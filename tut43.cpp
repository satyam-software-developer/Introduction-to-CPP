/* Ambiguity Resolution in Inheritance in C++ 
In this tutorial, we will discuss ambiguity resolution in inheritance in C++

Ambiguity Resolution in Inheritance
Ambiguity in inheritance can be defined as when one class is derived for two or more 
base classes then there are chances that the base classes have functions with the same name. 
So it will confuse derived class to choose from similar name functions. 
To solve this ambiguity scope resolution operator is used “::”. 
An example program is shown below to demonstrate the concept of ambiguity resolution in inheritance.

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};
Code Snippet 1: Ambiguity Resolution in Inheritance Example Program 1

As shown in a code snippet 1,

We have created a “Base1” class which consists of public member function “greet”. 
The function “greet” will print “how are you?”
We have created a “Base2” class which consists of public member function “greet”. 
The function “greet” will print “kaise ho?”
We have created a “Derived” class which is inheriting “Base1” and “Base2” classes. 
The “Derived” class consists of public member function “greet”. 
The function “greet” will run the “greet” function of the “Base2” class because 
we have used a scope resolution operator to let the compiler know which function should it run otherwise it will cause ambiguity.
The code of the main function is shown below

int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();

    return 0;
}
Code Snippet 2: Main program 1

As shown in code snippet 2,

Object “base1obj” is created of the “Base1” data type.
Object “base3obj” is created of the “Base2” data type.
The function “greet” is called by the object “base1obj”.
The function “greet” is called by the object “base2obj”.
Object “d” is created of the “Derived” data type.
The function “greet” is called by the object “d”.
The main thing to note here is that when the function “greet” is called by 
the object “d” it will run the “greet” function of the “Base2” class because we had specified 
it using scope resolution operator “::” to get rid ambiguity. The output for the following program is shown in figure 1.



Figure 1: Output

Another example of ambiguity resolution in inheritance is shown below.

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};
Code Snippet 3:  Ambiguity Resolution in Inheritance Example Program 2

As shown in a code snippet 3,

We have created a “B” class which consists of public member function “say”. 
The function “say” will print “hello world”
We have created a “D” class that is inheriting the “B” class. 
The “D” class consists of the public member function “say”. 
The function “say” will print “Hello my beautiful people”
The main thing to note here is that both “B” and “D” classes have the same function “say”, 
So if the class “D” will call the function “say” it will override the base class “say” 
method because compiler by default run the method which is already written in its own body. 
But if the function “say” was not present in the class “D” then the compiler will run the method of the class “B”.

The code of the main function is shown below,

int main(){
    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
Code Snippet 4: Main Program 2

As shown in code snippet 4,

Object “b” is created of the “B” data type.
The function “say” is called by the object “b”.
Object “d” is created of the “D” data type.
The function “say” is called by the object “d”.
The output for the following program is shown in figure 2. */

#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};


int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();

    return 0;
}
