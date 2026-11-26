#include <iostream>
using namespace std;
class person
{
    protected:
                string name;
                int rollno;

    public:
            void getpersondetails()
            {
                cout << "Enter Name : ";
                cin >> name;

                cout << "Enter Roll Number : ";
                cin >> rollno;
            }

            void displaypersondetails()
            {
                cout << "\nName : " << name;
                cout << "\nRoll Number : " << rollno;
            }
};

class employee : public person
{
    protected:
                int employeeID;
                long long salary;

    public:
            void getEmployeedetails()
            {
                getpersondetails();

                cout << "Enter Employee ID : ";
                cin >> employeeID;

                cout << "Enter Salary : ";
                cin >> salary;
            }            

            void displayEmployeedetails()
            {
                displaypersondetails();

                cout << "\nEmployee ID : " << employeeID;
                cout << "\nSalary : " << salary;    
            }
};

class Manager : public employee
{
    private:
            string department;
            int teamsize;

    public:
            void getmanagerdetails()
            {
                getEmployeedetails();

                cout << "Enter department : ";
                cin >> department;

                cout << "Enter Teamsize : ";
                cin >> teamsize;
            }

            void displaymanagerdetails()
            {
                displayEmployeedetails();

                cout << "\nDepartment : " << department;
                cout << "\nTeam Size : " << teamsize;
            }
};

int main()
{
    Manager m;

    cout << "Enter Manager details :\n";
    m.getmanagerdetails();

    cout << "\n---MANAGER INFORMATION---\n";
    m.displaymanagerdetails();

    return 0;
}
