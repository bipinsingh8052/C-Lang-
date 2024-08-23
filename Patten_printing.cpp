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






// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j =a ;j >=i ;j--)
//         {
//             cout <<" ";
//         }
//         for(int k=1 ;k<=i ;k++)
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
    for(int i=1;i<=5;i++)
    {
        for (int j=1 ;j<=9 ;j++)
        {

            if(i==1|| j==5 || 
            (i==2&&j==2)||(i==2 && j==3)||(i==2&& j==4)||(i==2&& j==6)||(i==2&& j==7)||(i==2&& j==8)||
            (i==3&& j==3)||(i==3&& j==4)||(i==3&& j==6)||(i==3&& j==7)||
            (i==4&& j==4)||(i==4&& j==6))
            {
                cout<<"*";
            }

            else{
                cout<<" ";
            }
        }
        cout <<"\n";
    }
    return 0;
}