#include <iostream>
using namespace std;
class product

{
    public:
            int product_id;
            string product_name;
            string category;
            float price;
            int quantity;

    void in()
    {
        cout << "\n----------ENTER PRODUCT DETAILS---------\n";
        cout << "ENTER PRODUCT ID : ";
        cin >> product_id;

        cout << "ENTER PRODUCT NAME : ";
        cin >> product_name;

        cout << "ENTER CATEGORY : ";
        cin >> category;

        cout << "ENTER PRICE : ";
        cin >> price;

        cout << "ENTER QUANTITY : ";
        cin >> quantity;
    }       
    
    void display()
    {
        cout << "\n----------PRODUCT DETAILS----------\n";
        cout << "\nPRODUCT ID : " << product_id;
        cout << "\nPRODUCT NAME : " << product_name;
        cout << "\nCATEGORY : " << category;
        cout << "\nPRICE : " << price;
        cout << "\nQUANTITY : " << quantity;
        cout << "\nTOTAL COST : " << price*quantity;
    }
};

int main()
{
    product p1;
    p1.product_id;
    p1.product_name;
    p1.category;
    p1.price;
    p1.quantity;
    
    p1.in();
    p1.display();

    return 0;
}