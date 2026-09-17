#include <iostream>
using namespace std;
class book

{
    public:
            int book_id;
            string book_title;
            string book_author;
            float book_price;
    
    void display()
    {
        cout << "\nBOOK ID : " << book_id;
        cout << "\nBOOK TITLE : " << book_title;
        cout << "\nBOOK AUTHOR : " << book_author;
        cout << "\nBOOK PRICE : " << book_price;
        cout << "\n---------------------------------";
    }
    
    book()
    {
        book_id = 123;
        book_title = "OOP";
        book_author = "Utkarsh";
        book_price = 359.9;
    }

    book(int a, string b, string c, float d)
    {
        book_id = a;
        book_title = b;
        book_author = c;
        book_price = d;
    }
};

int main()
{
    book b1;
    b1.display();

    book b2(345, "DS", "Utkarsh", 459.9);
    b2.display();

    return 0;
}