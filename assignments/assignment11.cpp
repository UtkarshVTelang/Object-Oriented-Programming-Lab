#include <iostream>
using namespace std;

template <class T>
T swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int EmployeeID1;
    int EmployeeID2;

    float room1;
    float room2;

    char priority1;
    char priority2;

    cout << "\n------Fill the Details------\n";
    cout << "\n---EMPLOYEE 1---\n";
    cout << "Enter Employee ID 1 : ";
    cin >> EmployeeID1;

    cout << "Enter Room 1 : ";
    cin >> room1;

    cout << "Enter Priority 1 : ";
    cin >> priority1;

    cout << "--------------------------------------------";

    cout << "\n---EMPLOYEE 2---\n";
    cout << "Enter Employee ID 2 : ";
    cin >> EmployeeID2;

    cout << "Enter Room 2 : ";
    cin >> room2;

    cout << "Enter Priority 2 : ";
    cin >> priority2;

    cout << "Before Swapping:\n";

    cout << "\nEmployee IDs: " << EmployeeID1 << " " << EmployeeID2 << endl;
    cout << "Room Numbers: " << room1 << " " << room2 << endl;
    cout << "Task Priorities: " << priority1 << " " << priority2 << endl;

    swap(EmployeeID1, EmployeeID2);
    swap(room1, room2);
    swap(priority1, priority2);

    cout << "\nAfter Swapping:\n";

    cout << "Employee IDs: " << EmployeeID1 << " " << EmployeeID2 << endl;
    cout << "Room Numbers: " << room1 << " " << room2 << endl;
    cout << "Task Priorities: " << priority1 << " " << priority2 << endl;

    return 0;
}
