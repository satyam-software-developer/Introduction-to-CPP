/* C++ Basic Input/Output & More 
In this tutorial, we will visualize basic input and output in the C++ language.
In our last lesson, we discussed the variable's scope and data types.
In this C++ tutorial, we are going to cover basic input and output:

Basic Input and Output in C++
C++ language comes with different libraries, which helps us in performing input/output operations.
In C++ sequence of bytes corresponding to input and output are commonly known as streams. 
There are two types of streams:

Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

Output stream
In output stream, the direction of flow of bytes occurs from main memory to the output device (for ex-display)

Important Points
The sign "<<" is called insertion operator
The sign ">>" is called extraction operator
"cout" keyword is used to print
"cin" keyword is used to take input at run time.
Reserved keywords in C++
Reserved keywords are those keywords that are used by the language itself, which is why these keywords are not available for re-definition or overloading. 
In short, you cannot create variables with these names. A list of reserved keywords is shown in figure 3.
*/


# include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */

    cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */

    cout<<"The sum is "<< num1+num2;

    return 0;
}

