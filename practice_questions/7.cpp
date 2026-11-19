#include <iostream>
using namespace std;
class vehicle

{
    public:
            int license_number;
            string model;
            string owner_name;
            string vehicle_type;

    void in()
    {
        cout << "\n----------ENTER VEHICLE DETAILS----------\n";
        cout << "ENTER LICENSE NUMBER OF THE VEHICLE : ";
        cin >> license_number;


        cout << "ENTER MODEL OF THE CAR : ";
        cin >> model;

        cout << "ENTER THE NAME OF THE OWNER : ";
        cin >> owner_name;
       
        cout << "ENTER THE TYPE OF THE VEHICLE : ";
        cin >> vehicle_type;
    }        

    void display()
    {
        cout << "\n----------VEHICLE DETAILS----------\n";
        cout << "LICENSE NUMBER OF THE CAR : " << license_number << endl;
        cout << "MODEL OF THE CAR : " << model << endl;
        cout << "NAME OF THE OWNER : " << owner_name << endl;
        cout << "TYPE OF VEHICLE : " << vehicle_type << endl;
    }
};

int main()
{
    vehicle v1;
    v1.in();
    v1.display();

    return 0;
}