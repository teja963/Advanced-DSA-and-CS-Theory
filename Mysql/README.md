# MYSQL
  <pre>
   Mysql is used for RDBMS, which is very fast, reliable, scalable, and easy to use and cross platform
   RDBMS - used to maintain a relational database
  </pre>
  	
# SQL DATABASE
   <pre>
1. <b>CREATE DATABASE</b> db_name;      To create new db

2. <b>SHOW DATABASES</b>;               To show all the dbs

3. <b>DROP DATABASE</b> db_name;        To Drop an existing db

4. <b>BACKUP DATABASE</b> db_name       used in sql server
   <b>TO DISK</b> = 'filepath';

5. <b>BACKUP DATABASE</b> db_name       only parts of db that hve changed reduces the backup time( since only changes are backed up)
   <b>TO DISK</b>= 'filepath'
   <b>WITH DIFFERENTIAL</b>;

6. <b>CREATE TABLE</b> tb_name (        create a new table in a db
       col_1 datatype,
       col_2 datatype,
       col_3 datatype,
       .....
       ) ;
7. <b>CREATE TABLE</b> new_tb_name <b>AS</b> copy of an existing table
   <b>SELECT</b> col_1, col_2
   <b>FROM</b> existing_tb_name;

8. <b>DROP TABLE</b> tb_name;           Drop a existing table in db

9. <b>TRUNCATE TABLE</b> tb_name;       Delete the data inside a tb and free the space
   <b>DELETE FROM</b>tb_name <b>WHERE=''</b>

10. <b>ALTER TABLE</b> tb_name          ADD  cols
    <b>ADD</b> col_name datatype;
    
    <b>ALTER TABLE</b> tb_name          DEL cols
    <b>DROP COLUMN</b> col_name;
    
    <b>ALTER TABLE</b> tb_name          modify cols data_type
    <b>ALTER COLUMN</b> col_name datatype;
    
    <b>ALTER TABLE</b> tb_name          rename attributes 
    <b>CHANGE</b> old_name new_name data_type; 
    
    <b>ALTER TABLE</b> tb_name          making constraints not null
    <b>MODIFY</b>col_name data_type not null;
   </pre>
# SQL CONSTRAINTS:
   <pre>
   Sql constraints are used to specify rules for data in the table(limit the type of data that can go into table-ensures accuracy, col costraints apply to col only where as table constraints apply to whole table)
   1. <b>NOT NULL</b>    Ensures that a col can't hve a NULL value	
   2. <b>UNIQUE</b>      Ensures that all values in a col diff, we can have many unique constraints in table
   3. <b>PRIMARY KEY</b> Combination of a "NOT NULL" and "UNQUIE", we can have only 1 primary key constraints in table(consist of single or multiple attributes)
   4. <b>FOREIGN KEY</b> Prevent actions that would destroy links btw tables, the table with this key is called child table and referencing table is called parent used for referential integerity 
   5. <b>CHECK</b>       Ensures that the values in a col satisfies a specific condition(limits the value range)
   6. <b>DEFAULT</b>     Sets a default value for a col if no value is specified(used to insert system values, by using functions "GETDATE()" )
   7. <b>CREATE INDEX</b> Used to create and retrieve data from the database very quickly

**Note:** 
Updating a table with indexes takes more time than updating a table without (because the indexes also need an update). So, only create indexes on columns that will be frequently searched against.
   
   
   8. <b>CREATE INDEX</b> index_name <b>ON</b> table_name (   //duplicate values are allowed
	      column1, column2, ...);
	      
      <b>CREATE UNIQUE INDEX</b> index_name <b>ON</b> tabel_name (
	      col_1, col_2 );
	      
   9. <b>AUTO INCREMENTATION</b>   unique num is generated automatically when a new record is inserted default value is 1
  10. <b>DATES</b>
			 DATE - format YYYY-MM-DD
		     DATETIME - format: YYYY-MM-DD HH:MI:SS
		SMALLDATETIME - format: YYYY-MM-DD HH:MI:SS
		    TIMESTAMP - format: a unique number 
	    
  11. <b>CREATE VIEW</b>        a view is a virtual table based on the result -set of an SQL statement.
       <b>CREATE VIEW</b> view_name <b>AS</b>
       <b>SELECT</b> column1, column2, ... 
       <b>FROM</b> table_name
       <b>WHERE</b> condition;
   </pre>
# SELECTION_and_FUNCTION_COMMANDS
  <pre>
1. <b>COUNT</b>(name);   <b>LENGTH</b>(name);  <b>AVG</b>(price);   <b>SUM</b>(price);
2. <b>ORDER BY</b> name <b>ASC/DESC LIMIT</b> number  how many it need to select after sorting
   <b>ORDER BY  SUBSTR</b>(name,number)      sorting according to matching how many char 
                                         
                                              eg: n a m e s
                                                  1 2  -2 -1 
                                               
3. <b>REGEXP ^[aeiou]</b>;                        select regular expression where starting with vowels 
             <b>[aeiou]$</b>                     select regular expression where ending with vowels 
            <b>^[aeiou].*[aeiou]$</b>            starting and ending with vowels	
    **NOTE: "RLIKE" is synonyms for regexp**
4. <b>LIKE  '[aeiou]%'</b>;                         is used in WHERE clause used for searching patterns 
                                                 %  represents 1 or more char to search
                                                 _ represents single char 
                      
5. <b>GROUP BY</b>                               It will group the all the same things together and used for aggregate functions

6. <b>CONCAT</b>(name,expression)                result is name+expression

7. <b>JOIN</b>                                   used to combine rows from 2 or more tables
   <b>INNER JOIN</b> tb_name <b>ON</b>             used to combine intersection things
   <b>LEFT JOIN</b> tb_name <b>ON</b>              used to combine left side things matches with rgt
   <b>RIGHT JOIN</b> tb_name <b>ON</b>             used to combine right side things matches with left
   <b>CROSS JOIN</b> tb_name <b>ON</b>             used to combine all the records from both the table
   <b>SELF JOIN</b>                              used to combine on its own
   <b>UNION</b>                                  used to combine the result-set of 2 or more select statements
   
   <b>
   Every SELECT statement within UNION must have the same number of columns
   The columns must also have similar data types
   The columns in every SELECT statement must also be in the same order
   </b>
   
8. <b>UPDATE</b> table_name
   <b>SET</b> col_1=val_1, col_2=val_2
   <b>WHERE</b> condition;                       Be Careful while updating otherwise it will update all records
              The HAVING clause was added to SQL because the WHERE keyword cannot be used with aggregate functions.
    
9. <b>AS</b>                                    often to make col_names more readable(alternate name its like alias)

10. <b>IN</b>                                    In operator allows you to specify multiple values in a WHERE clause.
    <b>SELECT</b> col_name
    <b>FROM</b> tb_name
    <b>WHERE</b> col_name <b>IN</b> (<b>SELECT</b> STATEMENT);
    
    Similarly <b>BETWEEN</b>                     used for particular range
    </pre>
# NOTE:
  <pre>
1. Triangle validation
  select case
          when a+b>c and b+c>a and a+c>b then
               case 
                     when a=b and b=c then 'Equilateral'
                     when a=b or b=c or c=a then 'Isosceles'
                     else 'Scalene'
                end
          else 'Not A Triangle'
      end
from triangles;
  </pre>
