#include <iostream>
using namespace std;

template <class T>
class Satyam
{
public:
    T data;
    Satyam(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Satyam<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    // Satyam<float> s(5.7);
    // Satyam<char> s('c');
    // Satyam<int> s(87);
    // cout << s.data << endl;
    // s.display();

    // func(4);// Exact match takes the highest priority
     func1(4);// Exact match takes the highest priority
    return 0;
}