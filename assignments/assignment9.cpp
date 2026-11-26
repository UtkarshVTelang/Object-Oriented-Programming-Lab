#include <iostream>
using namespace std;
class vehicle
{
    protected:
                string brand;
                string vehicle_number;
                int speed;

    public:
                void getvehicledetails()
                {
                    cout << "Enter Brand : ";
                    cin >> brand;

                    cout << "Enter Vehicle Number : ";
                    cin >> vehicle_number;

                    cout << "Enter speed : ";
                    cin >> speed;
                }

                void displayvehicledetails()
                {
                    cout << "\nBrand : " << brand;
                    cout << "\nVehicle Number : " << vehicle_number;
                    cout << "\nSpeed : " << speed;
                }
};

class car : public vehicle
{
    private:
            int number_of_doors;

    public:
            void getcardetails()
            {
                getvehicledetails();

                cout << "Enter number of doors : ";
                cin >> number_of_doors;
            }

            void displaycardetails()
            {
                displayvehicledetails();

                cout << "\nNumber of Doors : " << number_of_doors;
            }
};

class Bus : public vehicle 
{
    private:
            int passengerCapacity;

    public:
            void getBusDetails() 
            {
                getvehicledetails();

                cout << "Enter Passenger Capacity: ";
                cin >> passengerCapacity;
            }

    void displayBusDetails() 
    {
        displayvehicledetails();
        cout << "\nPassenger Capacity: " << passengerCapacity;
    }
};

class Truck : public vehicle 
{
    private:
            float loadingCapacity;

    public:
            void getTruckDetails() 
            {
                getvehicledetails();

                cout << "Enter Loading Capacity (tons): ";
                cin >> loadingCapacity;
            }

    void displayTruckDetails() 
    {
        displayvehicledetails();
        cout << "\nLoading Capacity: " << loadingCapacity << " tons";
    }
};

int main() 
{
    while(true)
    {
        int choice;

        cout << "TRANSPORT MANAGEMENT SYSTEM\n";
        cout << "1. Car\n";
        cout << "2. Bus\n";
        cout << "3. Truck\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) 
        {
            car c;
            c.getcardetails();

            cout << "\n--- CAR DETAILS ---";
            c.displaycardetails();
        }
        else if (choice == 2) 
        {
            Bus b;
            b.getBusDetails();

            cout << "\n--- BUS DETAILS ---";
            b.displayBusDetails();
        }
        else if (choice == 3) 
        {
            Truck t;
            t.getTruckDetails();

            cout << "\n--- TRUCK DETAILS ---";
            t.displayTruckDetails();
        }
        else 
        {
            cout << "Invalid Choice!";
        }

        return 0;
    }
}