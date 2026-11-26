#include <iostream>
using namespace std;
class university

{
    public:
            string name;
            int age;
            string contact;

    void in()
    {
        cout << "ENTER NAME : ";
        cin >> name;

        cout << "ENTER AGE : ";
        cin >> age;

        cout << "ENTER CONTACT : ";
        cin >> contact;
    }

    void display()
    {
        cout << "\nNAME : " << name << endl;
        cout << "AGE : " << age << endl;
        cout << "CONTACT : " << contact << endl;  
    }
};

class student : public university
{
    public:
            int rollno;
            string branch;

    void getstudentdetails()
    {
        cout << "ENTER ROLL NUMBER : ";
        cin >> rollno;

        cout << "ENTER BRANCH : ";
        cin >> branch;
    }
    
    void displaystudentdetails()
    {
        cout << "ROLL NUMBER : " << rollno << endl;
        cout << "BRANCH : " << branch << endl;
    }
};

int main()
{
    student s1;

    cout << "\n----------ENTER STUDENTS DETAILS---------\n";
    s1.in();
    s1.getstudentdetails();

    cout << "\n----------STUDENT DETAILS----------\n";
    s1.display();
    s1.displaystudentdetails();

    return 0;

}
