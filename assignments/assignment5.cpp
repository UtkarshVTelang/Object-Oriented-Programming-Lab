#include <iostream>
using namespace std;
class student


{
    public:
            int student_id;
            string student_name;
            int rollno;

    student(int student_id, string student_name, int rollno)
    {
    this->student_id = student_id;
    this->student_name = student_name;
    this->rollno = rollno;
    }
    
    void display()
    {
        cout << "\nSTUDENT ID : " << student_id;
        cout << "\nSTUDENT NAME : " << student_name;
        cout << "\nSTUDENT ROLL NUMBER : " << rollno;
    }
};

int main()
{
    student s1(13245, "utkarsh", 54);
    s1.display();

    return 0;

}