#include <iostream>
using namespace std;

int main() { 
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "GRADE = A";
    } else if (marks >= 80 && marks < 90) {
        cout << "GRADE = B";
    } else if (marks >= 70 && marks < 80) {  // Added another range
        cout << "GRADE = C";
    } else if (marks >= 60 && marks < 70) {  // Added another range
        cout << "GRADE = D";
    } else {
        cout << "GRADE = F";  // For marks below 60
    }

    return 0;
}
