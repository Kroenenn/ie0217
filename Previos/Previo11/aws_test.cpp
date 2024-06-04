#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <iostream>

using namespace std;
using namespace sql;

int main() {
    try {
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;

        // Conectar a la base de datos de Amazon RDS
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://<RDS_ENDPOINT>:3306", "<RDS_USER>", "<RDS_PASSWORD>");
        //con = driver->connect("tcp://database-ie0217....:3306", "", "");

        // Seleccionar la base de datos
        con->setSchema("database-ie0217");

        // Crear una tabla
        stmt = con->createStatement();
        stmt->execute("CREATE TABLE IF NOT EXISTS test_table (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(255))");

        // Insertar datos en la tabla
        stmt->execute("INSERT INTO test_table (name) VALUES ('John Doe'), ('Jane Doe')");

        // Seleccionar y mostrar los datos
        res = stmt->executeQuery("SELECT * FROM test_table");
        while (res->next()) {
            cout << "id = " << res->getInt("id");
            cout << ", name = " << res->getString("name") << endl;
        }

        delete res;
        delete stmt;
        delete con;
    } catch (sql::SQLException &e) {
        cout << "ERR: SQLException in " << __FILE__;
        cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
        cout << "ERR: " << e.what();
        cout << " (MySQL error code: " << e.getErrorCode();
        cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    }

    return 0;
}