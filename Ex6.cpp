/*Using array of pointer,store information of books  like Book Id and price from user .
Accept from user at runtime ,how many books records he/she wants to store.
also calculate total cost of books at the end of the program */
/*Program:-Array of pointer to object
Stores student Information at Runtime*/
#include<iostream>
using namespace std;
class Books {
    public:
        int Bookid;
        float price;
    public:
        void Accept(int Id, float Price) {
            Bookid = Id;
            price = Price;
        }
        void Display() {
            cout << "\n Book ID = " << Bookid;
            cout << "\n Price = " << price;
        }
};
int main() {
    int n, i;
    float totalCost = 0;
    cout << "Enter how many book records you want to store: ";
    cin >> n;
    Books* obj[n]; // Array of pointer to object.
    for (i = 0; i < n; i++) {
        obj[i] = new Books(); // Allocate memory at runtime.
        int I;
        float P;
        cout << "Enter Book ID Number and Price: ";
        cin >> I >> P;
        obj[i]->Accept(I, P); // Passing value to Accept function using array index.
        totalCost += P; // Calculate total cost while accepting input.
    }
    cout << "\n Book Records:\n";
    for (i = 0; i < n; i++) {
        obj[i]->Display(); // Calling Display function using array of pointer.
    }
    cout << "\n Total Cost of Books: " << totalCost;
    for (i = 0; i < n; i++) {
        delete obj[i]; // Deallocate memory of array of pointer.
    }
    return 0;
}
