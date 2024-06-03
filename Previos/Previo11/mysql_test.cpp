#include <iostream>
#include <sqlite3.h>

using namespace std;

// Función de callback para imprimir los resultados de las consultas
static int callback(void *data, int argc, char **argv, char **azColName) {
    for (int i = 0; i < argc; i++) {
        cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << endl;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    sqlite3 *db;
    char *errMsg = 0;
    int rc;
    const char* data = "Callback function called";

    // Abre la base de datos (la crea si no existe)
    rc = sqlite3_open("test.db", &db);
    if (rc) {
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return 0;
    } else {
        cout << "Opened database successfully" << endl;
    }

    // Crea una tabla
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

    sqlite3_close(db);
    return 0;
}
