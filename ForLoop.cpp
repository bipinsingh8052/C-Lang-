// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =9;
//     for(;i<11;)
//     {
//         cout<<"Hello world";
//         i++;
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int NumberMax = 0;
    for(int i=1;i <=5 ;i++)
    {
        int Number1;
        cout<< "Enter the number :";
        cin >> Number1 ;
        if(NumberMax < Number1)
        {
            NumberMax = Number1;
        }

    }
    cout << NumberMax;
}