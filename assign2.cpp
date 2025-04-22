#include <iostream>
using namespace std;
class Vector {
    float x, y, z; // Components of the vector
public:
    // Constructor to initialize vector components
    Vector(float xVal = 0, float yVal = 0, float zVal = 0) {
         x=xVal; 
         y=yVal;
         z=zVal ;}
    // Display the vector
    void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
    // Add two vectors
    Vector add(const Vector& v) {
        return Vector(x + v.x, y + v.y, z + v.z);
    }
    // Dot product of two vectors
    float dotProduct(const Vector& v) {
        return (x * v.x + y * v.y + z * v.z);
    }
    // Cross product of two vectors
    Vector crossProduct(const Vector& v) {
        return Vector(
            y * v.z - z * v.y,
            z * v.x - x * v.z,
            x * v.y - y * v.x
        );
    }
};
int main() {
    // Create two vectors
    Vector v1(2.0, 3.0, 4.0);
    Vector v2(1.0, 0.0, -1.0);
    cout << "Vector 1: ";
    v1.display();
    cout << "\n Vector 2: ";
    v2.display();
    // Perform addition
    Vector vAdd = v1.add(v2);
    cout << "\n\nAddition Result: ";
    vAdd.display();
    // Perform dot product
    float dotRes = v1.dotProduct(v2);
    cout << "\n Dot Product Result: " << dotRes;
    // Perform cross product
    Vector vCross = v1.crossProduct(v2);
    cout << "\n Cross Product Result: ";
    vCross.display();

    return 0;
}

