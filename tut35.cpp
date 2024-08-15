/* Destructor in C++ in Hindi
In this tutorial, we will discuss Destructor in C++

Destructor in C++
A destructor is a type of function which is called when the object is destroyed.
Destructor never takes an argument nor does it return any value.
An example program to demonstrate the concept of destructors in C++ is shown below.

#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};
Code Snippet 1: Destructor Example Program

As shown in Code Snippet 1,

1st global variable “count” is initialized.
2nd we created a “num” class.
3rd default constructor of the “num” class is defined which has no parameters
and does increment in the variable “count” and prints its value.
The main thing to note here is that every time the new object will be created this constructor will run.
4th destructor of the “num” class is defined.
The destructor prints the value of the variable “count” and decrement in the value of “count”.
The main thing to note here is that every time the object has been destroyed this destructor will run.
The main program is shown in code snippet 2.

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
Code Snippet 2: Main Program

As shown in Code Snippet 2,

1st object “n1” is created of the “num” data type.
The main thing to note here is that when the object “n1” is created the constructor will run.
2nd inside the block two objects “n2” and “n3” are created of the “num” data type.
The main things to note here are that when the objects “n2” and “n3” are created
the constructor will run for both objects and when the block ends
the destructor will run for both objects “n2” and “n3”.
3rd when the program ends the destructor for the object “n1” will run.
The output for the following program is shown in figure 1.

Figure 1: Program Output

As shown in figure 1, first the constructor for the object “n1” was called;
second the constructor for the objects “n2” and “n3” was called;
third the destructor was called for the objects “n2” and “n3”;
at the end destructor for the object “n1” was called. */

#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}