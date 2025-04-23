#include <iostream>
#include <string>
using namespace std;

// Base class 1: Vehicle
class Vehicle 
{
public:
    float speed;            // in km/h
    float fuelEfficiency;   // in km/l

    Vehicle(float spd = 0, float fe = 0) 
    {
        speed = spd;
        fuelEfficiency = fe;
    }

    void input() 
   {
        cout << "\nEnter Vehicle Speed (km/h): ";
        cin >> speed;
        cout << "Enter Fuel Efficiency (km/l): ";
        cin >> fuelEfficiency;
    }

    void display() const 
   {
        cout << "\nVehicle Speed: " << speed << " km/h";
        cout << "\nFuel Efficiency: " << fuelEfficiency << " km/l";
    }
};

// Base class 2: ElectricSystem
class ElectricSystem 
{
public:
    float batteryHealth;    // in percentage
    float chargeTime;       // in hours
    float speed;            // electric system speed (e.g. motor RPM-based speed)

    ElectricSystem(float bh = 100, float ct = 1.5, float spd = 0) 
    {
        batteryHealth = bh;
        chargeTime = ct;
        speed = spd;
    }

    void input() 
    {
        cout << "\nEnter Battery Health (%): ";
        cin >> batteryHealth;
        cout << "Enter Charge Time (hours): ";
        cin >> chargeTime;
        cout << "Enter Electric System Speed (km/h): ";
        cin >> speed;
    }

    void display() const 
    {
        cout << "\nBattery Health: " << batteryHealth << "%";
        cout << "\nCharge Time: " << chargeTime << " hours";
        cout << "\nElectric System Speed: " << speed << " km/h";
    }
};

// Derived class: HybridCar
class HybridCar : public Vehicle, public ElectricSystem {
public:
    string model;

    HybridCar() : Vehicle(), ElectricSystem() 
    {
        model = "Unknown";
    }

    void input() {
        cout << "Enter Hybrid Car Model: ";
        cin.ignore();        // to avoid getline being skipped
        getline(cin, model);

        // Input from both base classes
        Vehicle::input();
        ElectricSystem::input();
    }

    void displayHybridStats() const
   {
        cout << "\n\nHybrid Car Info: " << model;
        cout << "\n\n[From Vehicle System]";
        cout << "\nVehicle Speed: " << Vehicle::speed << " km/h";
        cout << "\nFuel Efficiency: " << fuelEfficiency << " km/l";

        cout << "\n\n[From Electric System]";
        cout << "\nElectric System Speed: " << ElectricSystem::speed << " km/h";
        cout << "\nBattery Health: " << batteryHealth << "%";
        cout << "\nCharge Time: " << chargeTime << " hours";
    }
};

int main() 
{
    HybridCar myHybrid;

    myHybrid.input();             // Take user input
    myHybrid.displayHybridStats(); // Display collected data

    return 0;
}



