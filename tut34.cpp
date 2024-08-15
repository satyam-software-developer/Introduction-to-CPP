/* Copy Constructor in C++ 
In this tutorial, we will discuss copy constructor in C++

Copy Constructor in C++
A copy constructor is a type of constructor that creates a copy of another object. 
If we want one object to resemble another object we can use a copy constructor. 
If no copy constructor is written in the program compiler will supply its own copy constructor. 
An example program to demonstrate the concept of a Copy constructor in C++ is shown below.

#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
Code Snippet 1: Copy Constructor Example Program

As shown in Code Snippet 1,

1st we created a “number” class which consists of private data member “a”.
2nd default constructor of the “number” class is defined which has no parameters and assign “0” to the data members “a”.
3rd parameterized constructor of the “number” class is defined which takes one parameter and assigns values to the data members “a”.
4th copy constructor of the “number” class is defined which takes its own reference object as a parameter and assigns values to the data members “a”.
5th function “display” is defined which will print the values of the data members “a”.
The main program is shown in code snippet 2.

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
Code Snippet 2: Main Program

As shown in Code Snippet 2,

1st objects “x”, “y”, “z”, and “z1” are created of the “number” data type. 
The main thing to note here is that the object “z” has a value “45”.
2nd function “display” is called by the objects “x”, “y”, and “z”.
3rd copy constructor is invoked and the object “z” is passed to “z1”
4th function “display” is called by the object “z1”
5th the value of “z” is assigned to “z1”. 
The main thing to note here is that it will not invoke a copy constructor because the object “z” is already created.
6th function “display” is called by the object “z2”
7th the value of “z” is assigned to “z3”. 
The main thing to note here is that it will invoke a copy constructor because the object “z3” is being created.
8th function “display” is called by the object “z3”
The output for the following program is shown in figure 1.



Figure 1: Program Output

As shown in figure 1, all the values which were passed and assigned through copy constructors are printed.*/


#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}