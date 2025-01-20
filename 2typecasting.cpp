#include <iostream>
using namespace std;


//  There are two types 
  // 1.conversion[implicit] - small to big 
  
int main() {
    char grade = 'a'; // 'a' stores its ASCII value
                      // which is 97 in decimal

    // Convert into int
    int value = grade;

    cout << value << endl; // Outputs the ASCII value of 'a'

   

    // 2.casting[explecit] - big to small 

    double salary = 100.99; //double convert into int

    int newsalary = (int)salary; 

    cout << newsalary << endl;


    return 0;
}