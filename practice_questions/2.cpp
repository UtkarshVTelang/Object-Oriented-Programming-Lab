#include <iostream>
using namespace std;
class car

{
    public:
            int car_id;
            string car_brand;
            string car_model;
            string fuel_type;
            float car_price;
            string welcomemessage = "WELCOME";
            string thankyoumessage = "THANK YOU";

    void in()
    {
        cout << "\n==========ENTER CAR DETAILS=========\n";
        cout << "\n-----------------------------------------------\n";
        cout << "            "<< welcomemessage <<"            ";
        cout << "\n-----------------------------------------------\n";    
        cout << "ENTER CAR ID : ";
        cin >> car_id;

        cout << "ENTER CAR BRAND : ";
        cin >> car_brand;

        cout << "ENTER CAR MODEL : ";
        cin >> car_model;

        cout << "ENTER FUEL TYPE : ";
        cin >> fuel_type;

        cout << "ENTER CAR PRICE : ";
        cin >> car_price;
    }        

    void display()
    {
        cout << "\n==========CAR DETAILS==========\n";
        cout << "\nCAR ID : " << car_id;
        cout << "\nCAR BRAND : " << car_brand;
        cout << "\nCAR MODEL : " << car_model;
        cout << "\nFUEL TYPE : " << fuel_type;
        cout << "\nCAR PRICE : " << car_price; 
        cout << "\n-----------------------------------------------\n";
        cout << "            "<< thankyoumessage <<"            ";
        cout << "\n-----------------------------------------------\n";

    }
};

int main()
{
    car c1;
    c1.car_id;
    c1.car_brand;
    c1.car_model;
    c1.fuel_type;
    c1.car_price;

    c1.in();
    c1.display();

    return 0;
}
