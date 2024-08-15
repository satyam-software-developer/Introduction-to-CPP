/* Solution to Exercise on Cpp Inheritance | C++ Tutorials for Beginners #47
A solution to Exercise on Inheritance in C++

As I have given you an exercise on inheritance to solve in the previous tutorial.
In this tutorial, we will see the solution to that exercise.
So the question was to make three classes “SimpleCalculator”, “ScientificCalculator” and “HybridCalculator”.

In “SimpleCalculator” class you have to take input of 2 numbers and perform function (+, -, *, /)
In “ScientificCalculator” class you have to take input of 2 numbers and perform any 4 scientific operations
You have to inherit both “SimpleCalculator” and “ScientificCalculator” classes with the “HybridCalculator” class.
You have to make an object of the “HybridCalculator” class and display the results of “SimpleCalculator” and “ScientificCalculator” classes.
The solution to the above Question is shown below,

class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
Code snippet 1: Simple Calculator Class

As shown in a code snippet 1,

We created a class “SimpleCalculator” which contains two private data members “a” and “b”
The class “SimpleCalculator” contains two member functions “getDataSimple” and “performOperationsSimple”
The function “getDataSimple” will take 2 numbers as input
The function “performOperationsSimple” will perform the operations “+, -, *, /”
class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        {
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
Code Snippet 2: Scientific Calculator Class

As shown in code snippet 2,

We created a class “ScientificCalculator” which contains two private data members “a” and “b”
The class “ScientificCalculator” contains two member functions “getDataScientific” and “performOperationsScientific”
The function “getDataScientific” will take 2 numbers as input
The function “performOperationsScientific” will perform the operations “cos, sin, exp, tan”
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};
Code Snippet 3: Hybrid Calculator Class

As shown in code snippet 3, we created a “HybridCalculator” class which is inheriting the “SimpleCalculator” class and “ScientificCalculator” class.

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}
Code Snippet 4: Main Program

As shown in code snippet 4,

We created an object “calc” of the data type “hybridCalculator”
The function “getDataScientific” is called using the object “calc”
The function “performOperationsScientific” is called using the object “calc”
The function “getDataSimple” is called using the object “calc”
The function “performOperationsSimple” is called using the object “calc”
The output of the following program is shown in the figure below,



Figure 1: Program Output 1



Figure 2: Program Output 2

Q1. What type of Inheritance are you using?

Ans. Multiple inheritances

Q2. Which mode of Inheritance are you using?

Ans. public SimpleCalculator, public ScientificCalculator
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void performOperationsSimple()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void performOperationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{

    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}
