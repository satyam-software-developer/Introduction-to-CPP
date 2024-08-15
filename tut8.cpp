
/*Constants in C++
Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards. 

Manipulator
In C++ programming, language manipulators are used in the formatting of output.
The two most commonly used manipulators are: "endl" and "setw".

"endl" is used for the next line.
"setw" is used to specify the width of the output.


Operator Precedence & Operator Associativity
Operator precedence helps us to solve an expression. 
For example, in an expression "int c = a*b+c" the multiplication operator's precedence is higher than the precedence of addition operator, 
so the multiplication between "a & b" first and then addition will be performed.

Operator associativity helps us to solve an expression; when two or more operators have the same precedence,
the operator associativity helps us to decide that we should solve the expression from "left-to-right" or from "right-to-left".

expression "int c = ((((a*5)+b)-45)+87);". 
The precedence of multiply is higher than addition so the multiplication will be done first, 
but the precedence of addition and subtraction is same, so here we will check the associativity 
which is "left-to-right" so the addition is performed first and then subtraction is performed.
*/


#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a =34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a;
    // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant 
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators in C++
    // int a=3, b=78, c=1233;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;


    // Operator Precedence
    int a = 3, b=4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}