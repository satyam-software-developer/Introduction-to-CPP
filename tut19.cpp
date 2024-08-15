/*Function Overloading with Examples in C++ 
In this tutorial, we will discuss function overloading in C++

Function Overloading in C++
Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence. 
An example program to explain function overloading is shown in Code Snippet 1.

int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}
Code Snippet 1: Sum Function Overloading Example

As shown in Code Snippet 1, we have created two “sum” functions, 
the 1st “sum” function takes two arguments “int a”, “int b” and return the sum of those two variables; and 
the 2nd sum function is taking three arguments “int a”, “int b”, “int c” and return the sum of those three variables. 
Function call for these “sum” function is shown in Code Snippet 2.

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    return 0;
}
Code Snippet 2: Sum Function Call

As shown in Code Snippet 2, we passed two arguments in the first function call and three arguments in the second function call. 
The output of the following program is shown in figure 1.



Figure 1: Sum Function Output

As shown in Code Snippet 3, both the “sum” function runs fine and gives us the required output. 
The main thing to note here is that the name of the function can be the same but the data type and the sequence of arguments need to be different as shown in the example program otherwise program will not run.

Another example of function overloading is shown in Code Snippet 3.

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}
Code Snippet 3: Volume Function Overloading Example

As shown in Code Snippet 3, we have created three “volume” functions, 
the 1st “volume” function calculates the volume of the cylinder and has two arguments “double r” and “int h”; 
the 2nd “volume” function calculates the volume of the cube and has one argument “int a”; 
the 3rd “volume” function calculates the volume of the rectangular box and has three arguments “int l”, “int b” and “int h”. 
The function call for these “volumes” function is shown in Code Snippet 4.

int main(){
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}
Code Snippet 4: Volume Function Call

As shown in Code Snippet 4, we passed three arguments in the first function call, two arguments in the second function call, 
and one argument in the third function call. The output of the following program is shown in figure 2.



Figure 2: Volume Function Output

As shown in figure 2, all three “volume” functions run fine and give us the required output.



Object Oriented Programming in C++ 
In this series of our C++ tutorials, we will visualize object-oriented programming in the C++ language. 
In our last lecture, we discussed function overloading in C++.

Why Object-Oriented Programming?
Before we discuss object-oriented programming, we need to learn why we need object-oriented programming?

C++ language was designed with the main intention of adding object-oriented programming to C language
As the size of the program increases readability, maintainability, and bug-free nature of the program decrease.
This was the major problem with languages like C which relied upon functions or procedure (hence the name procedural programming language)
As a result, the possibility of not addressing the problem adequately was high
Also, data was almost neglected, data security was easily compromised
Using classes solves this problem by modeling program as a real-world scenario
Difference between Procedure Oriented Programming and Object-Oriented Programming
Procedure Oriented Programming
Consists of writing a set of instruction for the computer to follow
The main focus is on functions and not on the flow of data
Functions can either use local or global data
Data moves openly from function to function
Object-Oriented Programming
Works on the concept of classes and object
A class is a template to create objects
Treats data as a critical element
Decomposes the problem in objects and builds data and functions around the objects
Basic Concepts in Object-Oriented Programming
Classes - Basic template for creating objects
Objects – Basic run-time entities
Data Abstraction & Encapsulation – Wrapping data and functions into a single unit
Inheritance – Properties of one class can be inherited into others
Polymorphism – Ability to take more than one forms
Dynamic Binding – Code which will execute is not known until the program runs
Message Passing – message (Information) call format
Benefits of Object-Oriented Programming
Better code reusability using objects and inheritance
Principle of data hiding helps build secure systems
Multiple Objects can co-exist without any interference
Software complexity can be easily managed */


#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}
