# Guía de Instalación de MySQL y SQLite en Ubuntu Linux

Este tutorial proporciona instrucciones detalladas para instalar MySQL y SQLite en Ubuntu Linux, incluyendo la configuración de MySQL y la instalación de interfaces gráficas para ambas bases de datos.

## Instalación de MySQL

### Actualización del sistema
Es recomendable actualizar los paquetes de tu sistema antes de instalar MySQL:
```bash
sudo apt update
```

### Instalación de MySQL Server
Instale MySQL Server utilizando:
```bash
sudo apt-get install mysql-server
```
Si no sirve, se debe instalar mysql con wget libraty, y se puede intentar este comando `sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys B7B3B788A8D3785C`, y se vuelve a intentar el sudo apt-get.

### Verificar el estado de MySQL
Para comprobar si MySQL está activo:
```bash
systemctl is-active mysql
```

### Configuración segura de MySQL
Ejecute la configuración segura de MySQL:
```bash
sudo mysql_secure_installation
```

### Iniciar sesión en MySQL
Para acceder a MySQL como root:
```bash
sudo mysql
```

### Instalación de MySQL Workbench
Instale MySQL Workbench usando snap:
```bash
sudo snap install mysql-workbench-community
```

### Cambiar la autenticación y establecer contraseña
```bash
mysql -u root -p -h localhost -P 3306
ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'your_password';
```
Reemplace `'your_password'` con la contraseña que desee.

### Conexión a MySQL
Para conectarse a MySQL usando la nueva configuración:
```bash
mysql -u root -p -h localhost -P3306
```

## Instalación de SQLite

### Instalación de SQLite3
Instale SQLite3:
```bash
sudo apt install sqlite3
```

### Verificación de la versión de SQLite
Para verificar la versión instalada de SQLite:
```bash
sqlite3 --version
```

### Instalación de DB Browser for SQLite
Instale la interfaz gráfica para SQLite:
```bash
sudo apt install sqlitebrowser
```

### Desarrollo adicional
Si necesita desarrollar aplicaciones que utilicen SQLite, puedes instalar las bibliotecas de desarrollo:
```bash
sudo apt-get install libsqlite3-dev
```

## Compilación de programas de prueba
Compile y ejecute los programas de prueba para MySQL, SQLite y Amazon RDS:
```bash
g++ -o mysql_test.exe mysql_test.cpp -lsqlite3
./mysql_test.exe

g++ -o mysql_test2.exe mysql_test2.cpp -lsqlite3
./mysql_test2.exe

g++ -o aws_test.exe aws_test.cpp -I/usr/include/cppconn -L/usr/lib -lmysqlcppconn
gdb ./aws_test.exe
(gdb) run
(gdb) exit

g++ -o aws_test2.exe aws_test2.cpp -I/usr/include/cppconn -L/usr/lib -lmysqlcppconn
gdb ./aws_test2.exe
(gdb) run
(gdb) exit
```

