/* this Pointer in C++ | C++ Tutorials for Beginners #53
In this tutorial, we will discuss ‘this’ pointer in C++

‘this’ Pointer in C++
“this” is a keyword that is an implicit pointer. 
“this” pointer points to the object which calls the member function. 
An example program is shown below to demonstrate the concept of “this” pointer.

#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
Code Snippet 1: “this” Pointer Example Program

As shown in a code snippet 1,

We created a class “A”, which contains private data members “a”.
The class “A” contains two member functions “setData” and “getData”
The Function “setData” will take one parameters and assign the values of parameter to the private data members “a” using “this” pointer. 
As we know that one copy of member function is shared between all object. 
The use of “this” pointer helps to points to the object which invokes the member function.
The Function “getData” will print the values of private data members “a”
The code for the main program is shown below,

int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
Code Snippet 2: Main Program

As shown in code snippet 2,

Object “a” is of data type “A” is created
The function “setData” is called using object “a” and the value “4” is passed to the function
The function “getData” is called using object “a”
The input and output of the following program is shown below,



Figure 1: Program Output

“this” pointer can be used to return a reference to the invoking object. An example program is shown below.

class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}
Code Snippet 3: Return Reference to Invoking Object Example Program

As shown in Code Snippet 3,

In the function “setData” the reference of the object is returned using “this” pointer.
In the main program by using a single object we have made a chain of the function calls. 
The main thing to note here is that the function “setData” is returning an object on which we have used the “getData” function. 
so we don’t need to call the function “getData” explicitly.
*/
 
 #include<iostream>
using namespace std;
// class A{
//     int a;
//     public:
//         void setData(int a){
//             this->a = a;
//         }

//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }


// };
// int main(){
//     A a;
//     a.setData(4);
//     a.getData();


//     return 0;
// }


class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}
