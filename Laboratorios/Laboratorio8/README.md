# Laboratorio 8 / Práctica de lenguaje SQL / Oscar Porras Silesky

## BREAKOUTROOM 2

## Integrantes:
- Oscar Porras Silesky
- Antony Brenes Rodríguez
- Gabriel Gonzales Rivera
- Kevin Jiménez Acuña

## Databases

Los comentarios de los códigos fueron realizados por mi persona, Oscar Porras Silesky.

### hospital.db

#### Preguntas Fáciles

- **Gabriel**

    **Pregunta:** Write a query to find the first_name, last name and birth date of patients who has height greater than 160 and weight greater than 70

    **Respuesta:**

    ```sql
        SELECT first_name, last_name, birth_date
        FROM patients
        WHERE height > 160 AND weight > 70;
    ```

    **Comentario del código:** El código SQL selecciona el `first_name`, `last_name` y `birth_date` de la tabla `patients` para aquellos pacientes cuya altura es mayor a 160 y cuyo peso es mayor a 70. La cláusula `WHERE` se usa para aplicar las condiciones de filtro en la consulta. Esto permite identificar a los pacientes que cumplen con ambos criterios.


- **Antony**

    **Pregunta:** Write a query to find list of patients first_name, last_name, and allergies where allergies are not null and are from the city of 'Hamilton'

    **Respuesta:**

    ```sql
        SELECT first_name, last_name, allergies
        FROM patients
        WHERE allergies IS NOT NULL
        AND city = 'Hamilton';
    ```

    **Comentario del código:** El código SQL selecciona los campos `first_name`, `last_name` y `allergies` de la tabla `patients` para aquellos pacientes cuyas alergias no son NULL y que viven en la ciudad de 'Hamilton'. El `WHERE` se usa para aplicar ambas condiciones de filtro en la consulta. Esto permite identificar a los pacientes con alergias que residen en 'Hamilton'.


#### Preguntas Medias

- **Gabriel**

    **Pregunta:** Show unique birth years from patients and order them by ascending.

    **Respuesta:**

    ```sql
        SELECT DISTINCT YEAR(birth_date) AS birth_year
        FROM patients
        ORDER BY birth_year;
    ```

    **Comentario del código:** El código SQL selecciona los años de nacimiento únicos de la tabla `patients` y los ordena de forma ascendente. La función `YEAR` extrae el año de la fecha de nacimiento, y `DISTINCT` asegura que cada año aparezca solo una vez en el resultado. La cláusula `ORDER BY` organiza los años de nacimiento en orden ascendente.


- **Antony**

    **Pregunta:** Show unique first names from the patients table which only occurs once in the list.
    
    For example, if two or more people are named 'John' in the first_name column then don't include their name in the output list. If only 1 person is named 'Leo' then include them in the output.


    **Respuesta:**

    ```sql
        SELECT first_name
        FROM patients
        GROUP BY first_name
        HAVING COUNT(first_name) = 1;
    ```

    **Comentario del código:** El código SQL selecciona los nombres únicos de la tabla `patients` que solo ocurren una vez en la lista. La cláusula `GROUP BY` agrupa los registros por `first_name`, y `HAVING COUNT(first_name) = 1` filtra los grupos para incluir solo aquellos nombres que aparecen una sola vez. Esto permite identificar y mostrar los nombres únicos en la tabla de pacientes.


- **Kevin**

    **Pregunta:** Show patient_id and first_name from patients where their first_name starts and ends with 's' and is at least 6 characters long.

    **Respuesta:**

    ```sql
        SELECT patient_id, first_name
        FROM patients
        WHERE first_name LIKE 's%__%s';
    ```

    **Comentario del código:** El código SQL selecciona el `patient_id` y el `first_name` de la tabla `patients` para aquellos pacientes cuyos nombres comienzan y terminan con la letra 's' y tienen al menos 6 caracteres de longitud. La cláusula `WHERE` utiliza `LIKE 's%__%s'` para aplicar el filtro de coincidencia de patrones. Esto permite identificar y mostrar los pacientes cuyos nombres cumplen con estos criterios específicos.



- **Oscar**
  
    **Pregunta:** Show patient_id, first_name, last_name from patients whos diagnosis is 'Dementia'. Primary diagnosis is stored in the admissions table.

    **Respuesta:**

    ```sql
        SELECT patients.patient_id, first_name, last_name
        FROM patients
        JOIN admissions ON admissions.patient_id = patients.patient_id
        WHERE diagnosis = 'Dementia';
    ```

    **Comentario del codigo:** El código SQL selecciona el `patient_id`, `first_name`, y `last_name` de la tabla `patients` para aquellos pacientes cuyo diagnóstico principal es 'Dementia'. Se realiza un `JOIN` entre las tablas `patients` y `admissions` usando `patient_id` como clave de unión. La cláusula `WHERE` filtra los registros para incluir solo aquellos donde el campo `diagnosis` en la tabla `admissions` coincide con 'Dementia'. Esto permite identificar específicamente a los pacientes con el diagnóstico.


#### Preguntas Difíciles
- **Gabriel**

    **Pregunta:** Show all of the patients grouped into weight groups. Show the total amount of patients in each weight group. Order the list by the weight group descending.
    
    For example, if they weight 100 to 109 they are placed in the 100 weight group, 110-119 = 110 weight group, etc.


    **Respuesta:**

    ```sql
        SELECT 
            COUNT(*) AS quantity_of_patients_in_group,
            FLOOR(weight / 10) * 10 AS group_of_weight
        FROM patients
        GROUP BY group_of_weight
        ORDER BY group_of_weight DESC;
    ```

    **Comentario del código:** El código SQL agrupa a los pacientes en grupos de peso y muestra la cantidad total de pacientes en cada grupo. La función `FLOOR(weight / 10) * 10` se utiliza para determinar el grupo de peso, redondeando el peso hacia abajo al múltiplo de 10 más cercano. La cláusula `GROUP BY` agrupa los resultados por estos grupos de peso, y `ORDER BY group_of_weight DESC` ordena la lista de forma descendente por grupo de peso. Esto permite ver cuántos pacientes hay en cada rango de peso especificado.


- **Antony**

    **Pregunta:** Show patient_id, weight, height, isObese from the patients table. Display isObese as a boolean 0 or 1. Obese is defined as weight(kg)/(height(m)^2) >= 30. weight is in units kg. height is in units cm.


    **Respuesta:**

    ```sql
        SELECT 
            patient_id,
            weight,
            height,
            CASE 
                WHEN weight / ((height / 100.0) * (height / 100.0)) >= 30 THEN 1
                ELSE 0
            END AS isObese
        FROM patients;
    ```

    **Comentario del código:** El código SQL selecciona el `patient_id`, `weight`, `height` y calcula si un paciente es obeso (`isObese`) según la fórmula BMI. La fórmula utilizada es `weight / ((height / 100.0) * (height / 100.0))`, que convierte la altura de centímetros a metros y luego calcula el BMI. La cláusula `CASE` devuelve 1 si el BMI es mayor o igual a 30, y 0 en caso contrario. Esto permite identificar y mostrar a los pacientes obesos como un valor booleano (0 o 1).


### northwind.db

#### Preguntas Fáciles
- **Antony**

    **Pregunta:** Show the company_name, contact_name, fax number of all customers that has a fax number. (not null)

    **Respuesta:**

    ```sql
        SELECT company_name, contact_name, fax
        FROM customers
        WHERE fax IS NOT NULL;
    ```

    **Comentario del código:** El código SQL selecciona el `company_name`, `contact_name` y `fax` de todos los clientes en la tabla `customers` que tienen un número de fax. La cláusula `WHERE fax IS NOT NULL` se utiliza para filtrar los registros y mostrar solo aquellos donde el valor de `fax` no es NULL. Esto permite identificar y mostrar los clientes que tienen un número de fax registrado.


- **Kevin**

    **Pregunta:** Show the first_name, last_name, hire_date of the most recently hired employee.

    **Respuesta:** 
    
    ```sql
        SELECT first_name, last_name, MAX(hire_date) AS hire_date
        FROM employees
        WHERE hire_date = (SELECT MAX(hire_date) FROM employees);
    ```

    **Comentario del código:** El código SQL selecciona el `first_name`, `last_name` y la fecha de contratación (`hire_date`) del empleado más recientemente contratado de la tabla `employees`. La función `MAX(hire_date)` se utiliza para obtener la fecha de contratación más reciente. Se utiliza el `WHERE` para cumplir la condición solicitada.


- **Oscar**

    **Pregunta:** Show the average unit price rounded to 2 decimal places, the total units in stock, total discontinued products from the products table.

    **Respuesta:**

    ```sql
        SELECT round(avg(Unit_Price), 2) AS average_price,
        SUM(units_in_stock) AS total_stock,
        SUM(discontinued) as total_discontinued
        FROM products;
    ```

    **Comentario del codigo:** El código SQL calcula tres estadísticas de la tabla `products`: el precio unitario promedio, redondeado a dos decimales, el total de unidades en stock y el total de productos descontinuados. Se usa la función `AVG` para el precio promedio, `SUM` para las unidades en stock y para contar los productos descontinuados.


#### Preguntas Medias
- **Gabriel**

    **Pregunta:** Show the ProductName, CompanyName, CategoryName from the products, suppliers, and categories table.

    **Respuesta:**

    ```sql
        SELECT products.product_name, suppliers.company_name, categories.category_name
        FROM products
        JOIN suppliers ON suppliers.supplier_id = products.supplier_id
        JOIN categories ON categories.category_id = products.category_id;
    ```

    **Comentario del código:** El código SQL selecciona el `product_name`, `company_name` y `category_name` de las tablas `products`, `suppliers` y `categories`. Se utilizan cláusulas `JOIN` para combinar las tablas: `suppliers` se une con `products` a través de `supplier_id` y `categories` se une con `products` a través de `category_id`. Esto permite obtener y mostrar el nombre del producto, el nombre de la compañía del proveedor y el nombre de la categoría correspondiente.



- **Kevin**

    **Pregunta:** Show the category_name and the average product unit price for each category rounded to 2 decimal places.

    **Respuesta:**

    ```sql
        SELECT c.category_name, ROUND(AVG(p.unit_price), 2) AS average_unit_price
        FROM products p
        JOIN categories c ON c.category_id = p.category_id
        GROUP BY c.category_name;
    ```

    **Comentario del código:** El código SQL selecciona el `category_name` y el precio unitario promedio de los productos para cada categoría, redondeado a dos decimales. Se realiza un `JOIN` entre las tablas `products` y `categories` usando `category_id`. La función `ROUND(AVG(p.unit_price), 2)` calcula el precio promedio de los productos en cada categoría y lo redondea a dos decimales. La cláusula `GROUP BY` agrupa los resultados por `category_name`, lo que permite obtener el promedio del precio unitario para cada categoría.


- **Oscar**

    **Pregunta:** Show the city, company_name, contact_name from the customers and suppliers table merged together. Create a column which contains 'customers' or 'suppliers' depending on the table it came from.


    **Respuesta:**

    ```sql
        SELECT City, company_name, contact_name, 'customers' AS relationship
        FROM customers
        UNION
        SELECT city, company_name, contact_name, 'suppliers' AS relationship
        FROM suppliers;
    ```

    **Comentario del codigo:** El código SQL utiliza `UNION` para combinar datos de las tablas `customers` y `suppliers`. Se seleccionan las columnas `city`, `company_name`, y `contact_name` de ambas tablas. Además, se crea una columna adicional llamada `relationship` que indica si el registro proviene de 'customers' o 'suppliers'. Esto permite ver la fuente de cada fila en los resultados combinados.


#### Preguntas Difíciles
- **Kevin**

    **Pregunta:** Show the employee's first_name and last_name, a "num_orders" column with a count of the orders taken, and a column called "Shipped" that displays "On Time" if the order shipped_date is less or equal to the required_date, "Late" if the order shipped late. Order by employee last_name, then by first_name, and then descending by number of orders.

    **Respuesta:**

    ```sql 
        SELECT 
            e.first_name,
            e.last_name,
            COUNT(o.order_id) AS num_orders,
            (CASE WHEN o.shipped_date <= o.required_date THEN 'On Time' ELSE 'Late' END) AS shipped
        FROM orders o
        JOIN employees e ON e.employee_id = o.employee_id
        GROUP BY 
            e.first_name,
            e.last_name
        ORDER BY 
            e.last_name,
            e.first_name,
            num_orders DESC;
    ```

    **Comentario del código:** El código SQL selecciona el `first_name` y `last_name` de los empleados, una columna `num_orders` con el conteo de pedidos realizados, y una columna `shipped` que muestra "On Time" si la fecha de envío (`shipped_date`) es menor o igual a la fecha requerida (`required_date`), o "Late" si el pedido se envió tarde. Se realiza un `JOIN` entre las tablas `orders` y `employees` utilizando `employee_id`. La cláusula `GROUP BY` agrupa los resultados por nombre y apellido del empleado, y la cláusula `ORDER BY` ordena los resultados por apellido, nombre y número de pedidos en orden descendente.


- **Oscar**

    **Pregunta:** Show how much money the company lost due to giving discounts each year, order the years from most recent to least recent. Round to 2 decimal places

    **Respuesta:**

    ```sql         
        SELECT 
        YEAR(o.order_date) AS 'order_year' , 
        ROUND(SUM(p.unit_price * od.quantity * od.discount),2) AS 'discount_amount' 

        FROM orders o 
        JOIN order_details od ON o.order_id = od.order_id
        JOIN products p ON od.product_id = p.product_id

        GROUP BY YEAR(o.order_date)
        ORDER BY order_year desc;
    ```

    **Comentario del codigo:** El código SQL muestra cuánto dinero perdió la empresa por dar descuentos cada año. Se ordenan los años desde el más reciente al menos reciente y los montos se redondean a dos decimales. Se selecciona el año de la fecha del pedido y se calcula la cantidad de descuento multiplicando el precio unitario, la cantidad y el descuento de cada producto. Se usan `JOIN` para combinar las tablas `orders`, `order_details` y `products` usando las claves adecuadas. Los resultados se agrupan por el año del pedido y se ordenan de forma descendente.

