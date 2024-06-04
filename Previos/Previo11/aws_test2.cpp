#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;
using namespace sql;

int main() {
    cout << "Iniciando programa..." << endl;
    try {
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;

        cout << "Obteniendo instancia del driver..." << endl;
        driver = sql::mysql::get_mysql_driver_instance();
        cout << "Conectando a la base de datos..." << endl;
        con = driver->connect("tcp://<RDS_ENDPOINT>:3306", "<RDS_USER>", "<RDS_PASSWORD>");
        //con = driver->connect("tcp://database-ie0217....:3306", "", "");

        cout << "Seleccionando la base de datos..." << endl;
        con->setSchema("database-ie0217");

        cout << "Creando una tabla..." << endl;
        stmt = con->createStatement();
        stmt->execute("CREATE TABLE IF NOT EXISTS test_table (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(255))");

        cout << "Insertando datos..." << endl;
        stmt->execute("INSERT INTO test_table (name) VALUES ('John Doe'), ('Jane Doe')");

        cout << "Consultando datos..." << endl;
        res = stmt->executeQuery("SELECT * FROM test_table");
        while (res->next()) {
            cout << "id = " << res->getInt("id");
            cout << ", name = " << res->getString("name") << endl;
        }

        delete res;
        delete stmt;
        delete con;

        cout << "Programa terminado exitosamente." << endl;
    } catch (sql::SQLException &e) {
        cout << "Error de SQL: " << e.what();
        cout << " (Código de error de MySQL: " << e.getErrorCode();
        cout << ", Estado SQL: " << e.getSQLState() << " )" << endl;
    } catch (std::exception &e) {
        cout << "Error estándar: " << e.what() << endl;
    }

    return 0;
}
