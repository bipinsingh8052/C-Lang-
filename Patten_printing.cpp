// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1 ;j <=a ;j++)
//         {
//             cout << "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=i;j>0 ;j--)
//         {
//             cout << "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=a-i; j>=0 ;j--)
//         {
//             cout << "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j= i ;j>0 ;j--)
//         {
//             cout <<" ";
//         }
//         for(int k=i ;k<=a ;k++)
//         {
//             cout<< "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }






#include<iostream>
using namespace std;
int main()
{
    int a=5;
    for(int i=1;i<=a;i++)
    {
        for(int j =a ;j >=i ;j--)
        {
            cout <<" ";
        }
        for(int k=1 ;k<=i ;k++)
        {
            cout<< "*";
        }
        cout <<"\n";
    }
    return 0;
}