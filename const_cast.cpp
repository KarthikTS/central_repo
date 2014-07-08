#include <iostream>
using namespace std;

class student
{
private:
    const int roll;
    int k;
public:
    // constructor
    student(int r):roll(r) {}

    // A const function that changes roll with the help of const_cast
    void fun() const
    {
        // ( const_cast <student*> (this) )->roll = 5; not allowed
        ( const_cast <student*> (this) )->k = 5;
    }

    int getRoll()  { return roll; }
};

int main(void)
{
    student s(3);
    cout << "Old roll number: " << s.getRoll() << endl;

    s.fun();

    cout << "New roll number: " << s.getRoll() << endl;
    int a1 = 40;
    const int* b1 = &a1;
    char* c1 = (char *)(b1);
    *c1 = 'A';

    cout << a1 << '\t' << *c1;

    return 0;
}
