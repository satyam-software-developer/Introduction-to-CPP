/* Initialization list in Constructors in Cpp | C++ Tutorials for Beginners #49
In this tutorial, we will discuss the Initialization list in Constructors in C++

Initialization list in Constructors in C++
The initialization list in constructors is another concept of initializing the data members of the class. 
The syntax of the initialization list in constructors is shown below.
*/

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
Code Snippet 1: Initialization list in Constructors Syntax

As shown in a code snippet 1,

A constructor is written first and then the initializations section is written
In the initialization section, the data members are initialized
To demonstrate the concept of Initialization list in Constructors an example program is shown below,

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
Code Snippet 2: Initialization list in Constructors Example Program 1

As shown in code snippet 2,

We have created a “test” class that consists of private data member “a” and “b” and parameterized constructor which takes two arguments and sets the value of data member “a” and “b” by using the initialization list. The constructor will also print the value of data member “a” and “b”.
In the main program object “t” is created of the “test” data type and the values (4, 6) are passed.
The output of the following program is shown below,



Figure 1: Program Output

Main Points

The main thing to note here is that if we use the code shown below to initialize data members the compiler will throw an error because the data member “a” is being initialized first and the “b” is being initialized second so we have to assign the value to “a” data member first.

Test(int i, int j) : b(j), a(i+b)
Code Snippet 3: Initialization list in Constructors Example 1

But if we use the code shown below to initialize data members the compiler will not throw an error because the data member “a” is being initialized first and we are assigning the value to the data member “a” first.

Test(int i, int j) : a(i), b(a + j)
Code Snippet 4: Initialization list in Constructors Example 2
*/

#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}


 