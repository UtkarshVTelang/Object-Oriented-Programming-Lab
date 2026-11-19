#include <iostream>
using namespace std;
class books

{
    public:
            string book_title;
            int book_id;
            static string library_name; 

    void getbookdetails ()
    {
        cout << "ENTER TITLE OF BOOK : ";
        cin >> book_title;

        cout << "ENTER ID OF BOOK : ";
        cin >> book_id;
    }        

    void displaybookdetails ()
    {
        cout << "\nBOOK'S TITLE : " << book_title << endl;
        cout << "BOOK'S ID : " << book_id << endl;
    }

    static void getlibraryName()
    {
        cout << "Library Name : " << library_name << endl;
    }

    ~books()
    {
        cout << "BOOK REMOVED FROM LIBRARY";
    }
};

class paperbook : public books

{
    public:
            int pagecount;

    void getpaperbookdetails()
    {
        cout << "ENTER PAGECOUNT OF THE BOOK : ";
        cin >> pagecount;
    }        

    void displaypaperbookdetails()
    {
        cout << "PAGECOUNT OF THE BOOK : " << pagecount << endl;
    }
};

class Ebook : public books
{
    public:
            string filesize;

    void getEbookdetails()
    {
        cout << "ENTER FILESIZE OF THE BOOK : ";
        cin >> filesize;
    }        

    void displayEbookdetails()
    {
        cout << "FILESIZE OF THE BOOK : " << filesize << " MB" << endl;
    }
};

string books::library_name = "CENTRAL CITY LIBRARY";

int main()
{
    books b1;
    paperbook b2; 
    Ebook b3;

    cout << "\n----------LIBRARY SYSTEM---------\n";

    cout << "\n----------PAPERBOOK----------\n";

    b1.getlibraryName();
    b1.getbookdetails();
    b2.getpaperbookdetails();

    b1.displaybookdetails();
    b2.displaypaperbookdetails();

    cout << "\n---------Ebook-----------\n";

    b1.getlibraryName();
    b1.getbookdetails();
    b3.getEbookdetails();

    b1.displaybookdetails();
    b3.displayEbookdetails();

    return 0;
}