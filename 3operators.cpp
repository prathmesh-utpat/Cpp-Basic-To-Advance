#include <iostream>
using namespace std;


int main () {

    //operators 1.arithmatical operatord (calculator)


    int num1 ;
     cout << "enter the num1= " << endl;

     cin >> num1;

     int num2;

     cout <<"enter the num2= " << endl;

     cin >> num2;

     cout << "sum = " << (num1+num2) << endl;  
     cout << "diff = " << (num1-num2) << endl;
     cout << "divide = " << (num1/num2) << endl;
     cout << "multiply = " << (num1*num2) << endl;
     cout << "reminder or modulo = " << (num1%num2) << endl;


    //2.relational operator output is true or false = 0/1 

    cout << "num1 is greater than num2 or not = " << (num1>num2) << endl;
    cout << "num1 is less than num2 or not = "  << (num1<num2) << endl;
    cout << "num1 is equal to num2 = " << (num1==num2) << endl;
    cout << "num1 is greater than or equal to num2 = " << (num1>=num2) << endl;
    cout << "num1 is less than or equal to num2 = " << (num1<=num2) << endl;



    //3.logical operator (and , or , not )

    cout << "AND OPERATOR = " << ((num1>num2)&&(num1<num2)) << endl; //if one of this is not true then output is false= 0 (imagine and table )
    cout << "OR OPERATOR = " << ((num1>num2)||(num1>num2)) << endl; // if one of this is true ther output is true = 1 (or table)
    cout << "NOT OPERATOR = " << !(num1>num2) << endl; //reverse the process T-F , F-T

    return 0;
}