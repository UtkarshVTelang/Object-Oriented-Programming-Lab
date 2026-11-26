#include <iostream>
using namespace std;

template <typename T>
T larger (T a , T b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int marks1;
    int marks2;

    float price1;
    float price2;

    double sensor1;
    double sensor2;

    cout << "\n---Fill the details---\n";
    cout << "\n--STUDENT 1--\n";
    cout << "Enter marks : ";
    cin >> marks1;

    cout << "Enter price : ";
    cin >> price1;

    cout << "Enter sensor : ";
    cin >> sensor1;

    cout << "\n--------------------------------------------\n";

    cout << "\n--STUDENT 2--\n";
    cout << "Enter marks : ";
    cin >> marks2;

    cout << "Enter price : ";
    cin >> price2;

    cout << "Enter sensor : ";
    cin >> sensor2;

    cout << "\n----Final Result----";

    if(marks1 > marks2)
        cout << "\nLarger Marks: " << marks1 << " (Student 1)";
    else if(marks2 > marks1)
        cout << "\nLarger Marks: " << marks2 << " (Student 2)";
    else
        cout << "\nBoth students have equal marks.";

    if(price1 > price2)
        cout << "\nLarger Price: " << price1 << " (Student 1)";
    else if(price2 > price1)
        cout << "\nLarger Price: " << price2 << " (Student 2)";
    else
        cout << "\nBoth prices are equal.";

    if(sensor1 > sensor2)
        cout << "\nLarger Sensor Reading: " << sensor1 << " (Student 1)";
    else if(sensor2 > sensor1)
        cout << "\nLarger Sensor Reading: " << sensor2 << " (Student 2)";
    else
        cout << "\nBoth sensor readings are equal.";
}