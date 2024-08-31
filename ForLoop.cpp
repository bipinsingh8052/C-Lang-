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



// #include<iostream>
// using namespace std;
// int main()
// {
//     int NumberMax = 0;
//     for(int i=1;i <=5 ;i++)
//     {
//         int Number1;
//         cout<< "Enter the number :";
//         cin >> Number1 ;
//         if(NumberMax < Number1)
//         {
//             NumberMax = Number1;
//         }

//     }
//     cout << NumberMax;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int MIN ;
//     int NUmber=0;
//     cout<< "Enter the number";
//     cin>>NUmber;
//      MIN = NUmber;
//     for(int i=1;i<5;i++)
//     {
//         cout<< "Enter the number";
//         cin>>NUmber;
//         if(MIN > NUmber)
//         {
//             MIN = NUmber;
//         }
//     }
//     cout <<MIN;
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    a%2==0?cout<<"Even number:":cout<<"Odd number";

}