#include<iostream>
using namespace std;
int main ()
{
    int Number =0;
    cout<< "Enter the number :";
    cin >> Number;
    int Magic_number =55;
    while( Number != Magic_number)
    {
        cout<< "You can not enter the magic number :" << "\n";
        cout << "Try again :";
        cin >> Number;
    }
}


// w.a.p a to print 