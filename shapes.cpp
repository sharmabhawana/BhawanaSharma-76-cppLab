/*#include <iostream>
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
    double length;
    double width;
    int side;

    Rectangle(double len, double wid, int s) {
        length = len;
        width = wid;
        side = s;
    }

    void display() override {
        cout<<" [Rectangle input]";
        
    }

    void calculateArea() override {
        int length1, length2, breadth1, breadth2;
        cout << "\nEnter length of first side: ";
        cin >> length1;
        cout << "Enter length of opposite side: ";
        cin >> length2;
        cout << "Enter breadth of first side: ";
        cin >> breadth1;
        cout << "Enter breadth of opposite side: ";
        cin >> breadth2;

        if (side == 4) {
            cout << "\nIt matches the criteria for a 4-sided shape.";
            if (length1 == length2 && breadth1 == breadth2) {
                cout << "\nThe shape is a rectangle.";
            } else {
                cout << "\nThe shape is NOT a rectangle.";
            }
        } else {
            cout << "\nNot a 4-sided shape, cannot be a rectangle.";
        }
    }
};

// Triangle class
class Triangle : public Shape {
public:
    double base;
    double height;
    int side;

    Triangle(double b, double h, int s) {
        base = b;
        height = h;
        side = s;
    }

    void display() override {
        cout << "\n[Triangle Input]";
        cout << "\nEnter the base of triangle: ";
        cin >> base;
        cout << "Enter the height of triangle: ";
        cin >> height;
        cout << "Enter the number of sides: ";
        cin >> side;
    }

    void calculateArea() override {
        if (side == 3) {
            
            cout << "\nIt matches the criteria for a 3-sided shape.";
            cout << "\nThe shape is a triangle.";
        } else {
            cout << "\nNot a 3-sided shape, cannot be a triangle.";
        }
    }
};

// Circle class
class Circle : public Shape {
public:
    int radius;
    int diameter;

    Circle(int r, int d) {
        radius = r;
        diameter = d;
    }

    void display() override {
        cout << "\n[Circle Input]";
        cout << "\nEnter the diameter: ";
        cin >> diameter;
        cout << "Enter the radius: ";
        cin >> radius;
    }

    void calculateArea() override {
        if (radius * 2 == diameter) {
            double area = 3.1416 * radius * radius;
            cout << "\nThe shape is a circle.";
            cout << "\nArea: " << area;
        } else {
            cout << "\nThe shape is NOT a circle (invalid radius-diameter relationship).";
        }
    }
};

int main() {
    // You can use any one here or try all three
    Rectangle rec(0, 0, 0);
    rec.display();
    rec.calculateArea();

    Triangle tri(0, 0, 0);
    tri.display();
    tri.calculateArea();

    Circle cir(0, 0);
    cir.display();
    cir.calculateArea();

    return 0;
}*/
#include <iostream>
#include <cmath> // For mathematical calculations like area
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
    double length1, length2, breadth1, breadth2;
    int side;

    Rectangle() : length1(0), length2(0), breadth1(0), breadth2(0), side(0) {}

    void display() override {
        cout << "\n[Rectangle Input]";
        cout << "\nEnter length of first side: ";
        cin >> length1;
        cout << "Enter length of opposite side: ";
        cin >> length2;
        cout << "Enter breadth of first side: ";
        cin >> breadth1;
        cout << "Enter breadth of opposite side: ";
        cin >> breadth2;
        cout << "Enter number of sides: ";
        cin >> side;
    }

    void calculateArea() override {
        if (side == 4) {
            cout << "\nIt matches the criteria for a 4-sided shape.";
            if (length1 == length2 && breadth1 == breadth2) {
                double area = length1 * breadth1;
                cout << "\nThe shape is a rectangle.";
                cout << "\nArea: " << area;
            } else {
                cout << "\nThe shape is NOT a rectangle.";
            }
        } else {
            cout << "\nNot a 4-sided shape, cannot be a rectangle.";
        }
    }
};

// Triangle class
class Triangle : public Shape {
public:
    double base, height;
    int side;

    Triangle() : base(0), height(0), side(0) {}

    void display() override {
        cout << "\n[Triangle Input]";
        cout << "\nEnter the base of triangle: ";
        cin >> base;
        cout << "Enter the height of triangle: ";
        cin >> height;
        cout << "Enter the number of sides: ";
        cin >> side;
    }

    void calculateArea() override {
        if (side == 3) {
            double area = 0.5 * base * height;
            cout << "\nIt matches the criteria for a 3-sided shape.";
            cout << "\nThe shape is a triangle.";
            cout << "\nArea: " << area;
        } else {
            cout << "\nNot a 3-sided shape, cannot be a triangle.";
        }
    }
};

// Circle class
class Circle : public Shape {
public:
    int radius, diameter;

    Circle() : radius(0), diameter(0) {}

    void display() override {
        cout << "\n[Circle Input]";
        cout << "\nEnter the radius: ";
        cin >> radius;
        cout << "Enter the diameter: ";
        cin >> diameter;
    }

    void calculateArea() override {
        if (radius * 2 == diameter) {
            double area = 3.1416 * radius * radius;
            cout << "\nThe shape is a circle.";
            cout << "\nArea: " << area;
        } else {
            cout << "\nThe shape is NOT a circle (invalid radius-diameter relationship).";
        }
    }
};

int main() {
    // Rectangle
    Rectangle rec;
    rec.display();
    rec.calculateArea();

    // Triangle
    Triangle tri;
    tri.display();
    tri.calculateArea();

    // Circle
    Circle cir;
    cir.display();
    cir.calculateArea();

    return 0;
}


