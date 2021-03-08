Define a class that represents employee data in the "Give from the Heart" organization for the purpose of calculating salaries.

The class should include the following fields:
•	Social security number (int).
•	Name - up to 20 characters (static array) (char name[21 [)
•	Hourly wage (float)
•	Number of hours worked (int)
•	The amount of money collected for the organization (float).

And the following methods
For each field:
•	Set method.
•	A method that returns its value
•	a method to calculate the total salary according to the formula: number of hours worked * wages per hour + percentage of amount collected

The percentages are calculated according to the following table:

Salary	Percentage
up to 1000 nis (inclusive)	10%
from 1000 nis to 2000 nis (inclusive)	15%
from 2000 nis to 4000 nis (inclusive)	20%
from 4000 nis to 5000 nis (inclusive)	30%
above 5000 nis	40%

For example, a worker that collected 4500 NIS for the organization, the percentage of their salary would be 1000*0.1+1000*0.15+2000*0.2+500*0.3=800, that is in addition to the employee’s base salary theemployee receives an additional 800 nis.

Write a main program that will input information of employees (until an SSN of 0 is entered). For each employee, the following data will be received, in order: SSN number, name, hourly wage, number of hours worked, the NIS amount of contributions collected. (It can be assumed that there is at least one employee).

The program should print out:
•	the SSN and name of the employee who collected the least amount of money
•	the employee who received the highest salary

Note:
•	The program should read all the data for an employee before checking if it is legal. On illegal input, the program should print ERROR. Each field should contain legal data relevant for that field. 
•	The main program should not allocate an array of employees.
