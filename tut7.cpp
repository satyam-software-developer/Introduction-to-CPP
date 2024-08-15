/* Built-in Data Types
Float, Double and Long Double Literals
Reference Variables
Typecasting
Built-in Data Types
As discussed in our previous lectures, built-in data types are pre-defined by the language and can be used directly. 
An example program for built-in data types is shown in figure 1.
*/




#include<iostream>

using namespace std;

int c =45;

int main(){


    // ******** Build in Data types ***********
    // int a, b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

     // ******** Float, double and long double literals ***********
    //  float d = 34.4F;
    //  long double e = 34.4L;
    //  cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //  cout<<"The size of 34.4f is "<<sizeof(34.4F)<<endl;
    //  cout<<"The size of 34.4F is "<<sizeof(34.4f)<<endl;
    //  cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    //  cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //********** Reference Variables **************
    // Satyam Kumar ------>Sattu------>shivam----->Dangerous coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    
    // ********* Typecasting *****************
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression of is "<<(a + b)<<endl;
    cout<<"The expression of is "<<(a + int(b))<<endl;
    cout<<"The expression of is "<<(a + (int)b)<<endl;
    
    return 0;
}