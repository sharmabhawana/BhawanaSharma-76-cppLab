#include <iostream>
#include <cmath> // For mathematical calculations
using namespace std;

class Shape {
public:
    virtual void identify() {
        cout << "\nIdentifying the shape...";
    }
    virtual void display() = 0;
    virtual void calculateArea() = 0;
};

// Rectangle class
class Rectangle : public Shape {
public:
    double length, breadth;
    
    Rectangle() : length(0), breadth(0) {}

    void display() override {
        cout << "\n Rectangle Input";
        cout << "\n Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void identify() override {
        cout << "\nThis shape is a Rectangle.";
    }

    void calculateArea() override {
        if (length > 0 && breadth > 0) {
            double area = length * breadth;
            cout << "\nArea: " << area;
        } else {
            cout << "\nInvalid rectangle dimensions.";
        }
    }
};

// Triangle class
class Triangle : public Shape {
public:
    double base, height;

    Triangle() : base(0), height(0) {}

    void display() override {
        cout << "\n[Triangle Input]";
        cout << "\nEnter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }

    void identify() override {
        cout << "\nThis shape is a Triangle.";
    }

    void calculateArea() override {
        if (base > 0 && height > 0) {
            double area = 0.5 * base * height;
            cout << "\nArea: " << area;
        } else {
            cout << "\nInvalid triangle dimensions.";
        }
    }
};

// Circle class
class Circle : public Shape {
public:
    double radius;

    Circle() : radius(0) {}

    void display() override {
        cout << "\n[Circle Input]";
        cout << "\nEnter radius: ";
        cin >> radius;
    }

    void identify() override {
        cout << "\nThis shape is a Circle.";
    }

    void calculateArea() override {
        if (radius > 0) {
            double area = M_PI * radius * radius;
            cout << "\nArea: " << area;
        } else {
            cout << "\nInvalid circle dimensions.";
        }
    }
};

int main() {
    Rectangle rec;
    Triangle tri;
    Circle cir;

    // Rectangle
    rec.display();
    rec.identify();
    rec.calculateArea();

    // Triangle
    tri.display();
    tri.identify();
    tri.calculateArea();

    // Circle
    cir.display();
    cir.identify();
    cir.calculateArea();

    return 0;
}
