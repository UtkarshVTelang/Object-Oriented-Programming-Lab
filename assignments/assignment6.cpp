#include <iostream>
using namespace std;
class employee

{
    public:
            int employee_id;
            string employee_name;
            char employee_desk;
    void in()
    {
        cout << "\n----------ENTER EMPLOYEE DETAILS----------";
        cout << "ENTER EMPLOYEE ID : ";
        cin >> employee_id;

        cout << "ENTER EMPLOYEE NAME : ";
        cin >> employee_name;

        cout << "ENTER EMPLOYEE DESK : ";
        cin >> employee_desk;
    }        

    void display()
    {
        cout << "\n----------EMPLOYEE DETAILS----------";
        cout << "\nEMPLOYEE ID : " << employee_id;
        cout << "\nEMPLOYEE NAME : " << employee_name;
        cout << "\nEMPLOYEE DESK : " << employee_desk;
    }
};

int main()
{
    
}