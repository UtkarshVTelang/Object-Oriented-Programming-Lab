#include <iostream>
using namespace std;
class result

{
    public:
            int roll_number;
            string student_name;
            float physics_marks;
            float chem_marks;
            float maths_marks;

    void in()
    {
        cout << "\n---------ENTER STUDENT DETAILS----------\n";
        cout << "ENTER STUDENT ROLL NUMBER : ";
        cin >> roll_number;

        cout << "ENTER STUDENT NAME : ";
        cin >> student_name;

        cout << "ENTER PHYSICS MARKS : ";
        cin >> physics_marks;

        cout << "ENTER CHEMISTRY MARKS : ";
        cin >> chem_marks;

        cout << "ENTER MATHS MARKS : ";
        cin >> maths_marks;
    }
    
    void display()
    {
        cout << "\n----------STUDENT DETAILS----------\n";
        cout << "\nSTUDENT ROLL NUMBER : " << roll_number;
        cout << "\nSTUDENT NAME : " << student_name;
        cout << "\nPHYSICS MARKS : " << physics_marks;
        cout << "\nCHEMISTRY MARKS : " << chem_marks;
        cout << "\nMATHS MARKS : " << maths_marks;
        cout << "\nTOTAL MARKS : " << physics_marks + chem_marks + maths_marks;
        cout << "\nPERCENATGE OBTAINED : " << ((physics_marks + chem_marks + maths_marks)/300.0)*100 << "%";
    }
};

int main()
{
    result r1;
    r1.roll_number;
    r1.student_name;
    r1.physics_marks;
    r1.chem_marks;
    r1.maths_marks;

    r1.in();
    r1.display();

    return 0;
}