#include <iostream>
using namespace std;
class student

{
    public:
            int student_id;
            string student_name;
            int student_standard;
            char student_section;
            float student_percentage;
            bool student_status;
        
    void in()
    {
        cout << "\n---------ENTER STUDENT RECORD----------\n";

        cout << "ENTER STUDENT ID : ";
        cin >> student_id;

        cout << "ENTER STUDENT NAME : ";
        cin >> student_name;

        cout << "ENTER STUDENT STANDARD : ";
        cin >> student_standard;

        cout << "ENTER STUDENT PERCENTAGE : ";
        cin >> student_percentage;

        cout << "ENTER STUDENT STATUS (1 = pass, 0 = fail) : ";
        cin >> student_status;
    }        

    void display()
    {
        cout << "\n----------STUDENT RECORD----------\n";

        cout << "\nSTUDENT ID : " << student_id;
        cout << "\nSTUDENT NAME : " << student_name;
        cout << "\nSTUDENT STANDARD : " << student_standard;
        cout << "\nSTUDENT PERCENATAGE : " << student_percentage << "%";
        cout << "\nSTUDENT STATUS : ";
        {
        if(student_status == 1)
        {
            cout << "PASS";
        }
        else
        {
            cout << "FAIL";
        }
        }
    }

};

int main()
{
    student s1;

    s1.in();
    s1.display();

    return 0;
}