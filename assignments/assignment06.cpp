#include <iostream>
using namespace std;
class employee

{
    public:
            int employee_id;
            string employee_name;
            char employee_desk;        

    void display()
    {
        cout << "\n----------EMPLOYEE DETAILS----------\n";
        cout << "\nEMPLOYEE ID : " << employee_id;
        cout << "\nEMPLOYEE NAME : " << employee_name;
        cout << "\nEMPLOYEE DESK : " << employee_desk;
    }

    employee()
    {
        employee_id = 2321;
        employee_name = "Utkarsh";
        employee_desk = 'A';
        cout << "\n-----CONSTRUCTOR IS CALLED-----\n";
    }

    ~employee()
    {
        cout << "\n-----DESTRUCTOR IS CALLED-----\n";
    }
};

int main()
{
    employee e1;
    e1.display();

    return 0;
}
