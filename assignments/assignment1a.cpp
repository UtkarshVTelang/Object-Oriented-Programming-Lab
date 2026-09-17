#include <iostream>
using namespace std;
class book

{
    public:
            int book_ID;
            char book_shelf;
            string book_name;
            float book_price;
            string welcomemessage = "WELCOME";
            string thankyoumessage = "THANK YOU";
    
    void in()
    {
        cout << "\n<<<<<<<<<<ENTER BOOKS DETAILS>>>>>>>>>>\n";
        cout << "\n-----------------------------------------------------\n";
        cout << "               " << welcomemessage << "               ";
        cout << "\n-----------------------------------------------------\n";
        cout << "\nENTER BOOK'S ID : ";
        cin >> book_ID;
        cout << "\nENTER BOOK'S SHELF : ";
        cin >> book_shelf;
        cout << "\nENTER BOOK'S NAME : ";
        cin >> book_name;
        cout << "\nENTER BOOK'S PRICE : ";
        cin >> book_price;   
    }   
    
    void display()
    {
        cout << "\n<<<<<<<<<<BOOK'S DETAILS>>>>>>>>>>\n";
        cout << "\nBOOK'S ID : " << book_ID;
        cout << "\nBOOK'S SHELF : " << book_shelf;
        cout << "\nBOOK'S NAME : " << book_name;
        cout << "\nBOOK'S PRICE : " << book_price << endl;
        cout << "\n-----------------------------------------------------\n";
        cout << "              " << thankyoumessage << "               ";
        cout << "\n-----------------------------------------------------\n";
    }    
};

int main()
{
    book b1;
    b1.book_ID;
    b1.book_shelf;
    b1.book_name;
    b1.book_price;

    b1.in();
    b1.display();

    return 0;
}