#include <iostream>
using namespace std;

// Base class 1: Vehicle
class Vehicle {
protected:
    double speed;
    double fuelEfficiency;
public:
    Vehicle() : speed(0), fuelEfficiency(0) {}

    void setVehicleData(double spd, double fuelEff) {
        speed = spd;
        fuelEfficiency = fuelEff;
    }

    void displayVehicleData() {
        cout << "\n[Vehicle Data]";
        cout << "\nSpeed: " << speed << " km/h";
        cout << "\nFuel Efficiency: " << fuelEfficiency << " km/l";
    }
};

// Base class 2: ElectricSystem
class ElectricSystem {
protected:
    double batteryHealth;
    double chargeTime;
public:
    ElectricSystem() : batteryHealth(100), chargeTime(0) {}

    void setElectricData(double battHealth, double chrgTime) {
        batteryHealth = battHealth;
        chargeTime = chrgTime;
    }

    void displayElectricData() {
        cout << "\n[Electric System Data]";
        cout << "\nBattery Health: " << batteryHealth << " %";
        cout << "\nCharge Time: " << chargeTime << " hours";
    }
};

// Derived class: HybridCar
class HybridCar : public Vehicle, public ElectricSystem {
public:
    void setHybridData(double spd, double fuelEff, double battHealth, double chrgTime) {
        Vehicle::setVehicleData(spd, fuelEff);
        ElectricSystem::setElectricData(battHealth, chrgTime);
    }

    void displayHybridData() {
        cout << "\n Hybrid Vehicle Monitoring System ";
        Vehicle::displayVehicleData();
        ElectricSystem::displayElectricData();
        cout << "\n";
    }
};

int main() {
    HybridCar myCar;

    // Set data for the hybrid car
    double speed, fuelEfficiency, batteryHealth, chargeTime;
    cout << "Enter Speed (km/h): ";
    cin >> speed;
    cout << "Enter Fuel Efficiency (km/l): ";
    cin >> fuelEfficiency;
    cout << "Enter Battery Health (%): ";
    cin >> batteryHealth;
    cout << "Enter Charge Time (hours): ";
    cin >> chargeTime;

    myCar.setHybridData(speed, fuelEfficiency, batteryHealth, chargeTime);
    
    // Display hybrid car data
    myCar.displayHybridData();

    return 0;
}
