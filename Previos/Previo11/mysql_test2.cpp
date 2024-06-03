#include <iostream>
#include <sqlite3.h>

using namespace std;

// Callback function to print the results of the query
static int callback(void *data, int argc, char **argv, char **azColName) {
    cout << (const char*)data << endl;
    for (int i = 0; i < argc; i++) {
        cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << endl;
    }
    cout << endl;
    return 0;
}

int main() {
    sqlite3 *db;
    char *errMsg = 0;
    int rc;
    const char* data = "Callback function called";

    // Open the database (creates if does not exist)
    rc = sqlite3_open("test.db", &db);
    if (rc) {
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return 0;
    } else {
        cout << "Opened database successfully" << endl;
    }

    // Create a table
    const char *sql = "CREATE TABLE COMPANY("
                      "ID INT PRIMARY KEY NOT NULL, "
                      "NAME TEXT NOT NULL, "
                      "AGE INT NOT NULL, "
                      "ADDRESS CHAR(50), "
                      "SALARY REAL);";

    rc = sqlite3_exec(db, sql, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << errMsg << endl;
        sqlite3_free(errMsg);
    } else {
        cout << "Table created successfully" << endl;
    }

    // Insert data into the table
    sql = "INSERT INTO COMPANY (ID, NAME, AGE, ADDRESS, SALARY) "
          "VALUES (1, 'Paul', 32, 'California', 20000.00), "
          "       (2, 'Allen', 25, 'Texas', 15000.00), "
          "       (3, 'Teddy', 23, 'Norway', 20000.00), "
          "       (4, 'Mark', 25, 'Rich-Mond', 65000.00);";

    rc = sqlite3_exec(db, sql, callback, (void*)data, &errMsg);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << errMsg << endl;
        sqlite3_free(errMsg);
    } else {
        cout << "Records created successfully" << endl;
    }


    // Select data from the table
    sql = "SELECT * FROM COMPANY;";
    rc = sqlite3_exec(db, sql, callback, (void*)data, &errMsg);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << errMsg << endl;
        sqlite3_free(errMsg);
    } else {
        cout << "Operation done successfully" << endl;
    }

    // Close the database
    sqlite3_close(db);

    // Return 0 to indicate success

    return 0;
}
