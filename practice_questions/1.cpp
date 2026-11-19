#include <iostream>
using namespace std;
class student

{
    public:
            int student_ID;
            string student_name;
            char student_department;
            int student_age;
            float student_marks;

    void in()
    {
        cout << "\n----------ENTER STUDENT DETAILS----------\n";
        cout << "ENTER STUDENT ID NUMBER : ";
        cin >> student_ID;

        cout << "ENTER STUDENT NAME : ";
        cin >> student_name;

        cout << "ENTER STUDENT DEPARTMENT : ";
        cin >> student_department;

        cout << "ENTER STUEDENT AGE : ";
        cin >> student_age;

        cout << "ENTER STUDENT MARKS : ";
        cin >> student_marks;
    }        

    void display()
    {
        cout << "\n----------STUDENT DETAILS----------";
        cout << "\nSTUDENT ID : " << student_ID;
        cout << "\nSTUDENT NAME : " << student_name;
        cout << "\nSTUDENT DEPARTMENT : " << student_department;
        cout << "\nSTUDENT AGE : " << student_age;
        cout << "\nSTUDENT MARKS : " << student_marks;
    }
};

int main()
{
    student s1;
    s1.student_ID;
    s1.student_name;
    s1.student_department;
    s1.student_age;
    s1.student_marks;

    s1.in();
    s1.display();

    return 0;
}