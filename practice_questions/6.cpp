#include <iostream>
using namespace std;
class movies

{
    public:
            string title;
            string genre;
            string release_year;
            float rental_price;

    void in()
    {
        cout << "\n---------ENTER MOVIE DETAILS----------\n";
        cout << "ENTER MOVIE TITLE : ";
        cin >> title;

        cout << "\nENTER GENRE OF THE MOVIE : "; 
        cin >> genre;

        cout << "\nWHAT IS THE RELEASE YEAR OF THIS MOVIE : ";
        cin >> release_year;

        cout << "\nWHAT IS THE RENTAL PRICE : ";
        cin >> rental_price;
    }        


    void display()
    {
        cout << "\n----------MOVIE DETAILS---------\n";
        cout << "MOVIE'S TITLE : " << title << endl;
        cout << "MOVIE'S GENRE : " << genre << endl;
        cout << "RELEASE YEAR OF MOVIE : " << release_year << endl;
        cout << "RENTAL PRICE OF MOVIE : " << "$" << rental_price << endl;
 
    }
};

int main()
{
    movies m1;
    m1.in();
    m1.display();

    return 0;
}