#include <iostream>
using namespace std;
class employee

{
    public:
            int employee_id;
            string employee_name;
            char employee_department;
            int basic_salary;
            int bonus;

    void in()
    {
        cout << "\n----------ENTER EMPLOYEE DETAILS----------\n";
        cout << "ENTER EMPLOYEE ID : ";
        cin >> employee_id;

        cout << "ENTER EMPLOYEE NAME : ";
        cin >> employee_name;

        cout << "ENTER EMPLOYEE DEPARTMENT : ";
        cin >> employee_department;

        cout << "ENTER BASIC SALARY : ";
        cin >> basic_salary;

        cout << "ENTER BONUS SALARY : ";
        cin >> bonus;
    }
    
    void display()
    {
        cout << "\n----------EMPLOYEE DETAILS----------\n";
        cout << "\nEMPLOYEE ID : " << employee_id;
        cout << "\nEMPLOYEE NAME : " << employee_name;
        cout << "\nEMPLOYEE DEPARTMET : " << employee_department;
        cout << "\nEMPLOYEE BASIC SALARY : " << basic_salary;
        cout << "\nEMPLOYEE BONUS SALARY : " << bonus;
        cout << "\nTOTAL SALARY : " << bonus + basic_salary;
    }
};

int main()
{
    employee e1;
    e1.employee_id;
    e1.employee_name;
    e1.employee_department;
    e1.basic_salary;
    e1.bonus;

    e1.in();
    e1.display();

    return 0;
}