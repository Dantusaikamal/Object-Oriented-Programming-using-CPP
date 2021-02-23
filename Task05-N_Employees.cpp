/*  
   program to read data of N employee and computer net salary of each employee
   (DA = 52% of Basic and IT = 30% of the gross salary
*/

#include <iostream>
#include <conio.h>
using namespace std;

class Employee{
    char employeeName[25];
    int employeeNumber;
    double basicSalary, DA, IT, gross_salary, netSalary;

    public:
        //Reading employee basic details
        void readEmployeeDetails(int count){
            cout << "<<<< Enter Employee " <<count << " details >>>>\n\n";
            
            cout << "Enter Employee Number:  ";
            cin >> employeeNumber;
            
            cout <<"\nEnter Employee Name: ";
            cin >> employeeName;

            cout << "\nEnter Basic Salary: ";
            cin >> basicSalary;

            cout << "\n\nEmployee " << count << " details <<< saved >>>\n\n";
             
        }

        //calculating netSalary of an employee
        double findeNetSalary(){
            DA = basicSalary * 0.52;
            gross_salary = basicSalary + DA;
            IT = gross_salary * 0.30;

            netSalary = (basicSalary + DA) - IT;
            return netSalary;
        }

        //Displaying the employee details
        void displayEmployeeDetails(int count){
            cout << "<<<< Employee " <<count << " details >>>>\n\n";
            
            cout << "Employee Number:  " << employeeNumber;
            
            cout <<"\nEmployee Name: " << employeeName;

            cout << "\nNet Salary: " << netSalary;

            cout << "\n============================\n";
        }

};

int main(){
    
    
    int numberOfEmployeeDetails;
    system("cls");

    cout << "Please enter the number of employees: ";
    cin >> numberOfEmployeeDetails;

    Employee employee[numberOfEmployeeDetails]; // we can add upto 50 employee details

    //Getting employee details
    for (int i = 0; i < numberOfEmployeeDetails; i++)
    {   
        //As we are using array for storiing number of employee. So, we use
        // arrow operator to access member functions of a class.
        employee -> readEmployeeDetails(i);
    }

    // Finding netSalary of an employee
    for (int i = 0; i < numberOfEmployeeDetails; i++)
    {
        employee -> findeNetSalary();
    }

    getchar();
    cout << "Enter any key to display employee details" << endl;
    getchar();
    system("cls");

    // Display the detials of each employee
    for (int i = 0; i < numberOfEmployeeDetails; i++)
    {
        employee -> displayEmployeeDetails(i);
    }

    return 0;
}
