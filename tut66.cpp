#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Satyam
{
public:
    T1 a;
    T2 b;
    Satyam(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Satyam<> s(4, 6.4);
    s.display();
    cout<<endl;
    Satyam<float, char> g(1.4, 'o');
    g.display();

    return 0;
}