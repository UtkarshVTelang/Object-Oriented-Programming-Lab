#include <iostream>
using namespace std;
class book

{
    public:
            int bookID;
            string book_name;
            float price;
            
    void display()
    {
        cout << "BOOK ID : " << bookID << endl;
        cout << "BOOK NAME : " << book_name << endl;
        cout << "BOOK's PRICE : " << price;
    }
};

int main()
{
    book b1;
    b1.bookID = 101;
    b1.book_name = "OOP";
    b1.price = 169.99;

    b1.display();

    return 0;
}