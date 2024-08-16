// #include<iostream>
// using namespace std;
// int main ()
// {
//     int Number =0;
//     cout<< "Enter the number :";
//     cin >> Number;
//     int Magic_number =55;
//     while( Number != Magic_number)
//     {
//         cout<< "You can not enter the magic number :" << "\n";
//         cout << "Try again :";
//         cin >> Number;
//     }
// }


// // w.a.p a to print 
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int Number =0;
//     cin >> Number;
//     int Digit= 0;
//     while (Number !=0)
//     {
//         Digit =Number % 10;
//         cout<<Digit;
//         Number =Number /10;
//     }
// }


// check palindrom number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int  Number =0;
//     cout << "Enter the number :";
//     cin >> Number ;
//     int digit =0 ;
//     int palindrom =Number;
//     while( Number > 0)
//     {
      
//         int Sum =  Number % 10;
//         Number =Number /10;

//         digit =digit *10 +Sum;
      
//     }
//     if( palindrom == digit)
//     {
//         cout<< "THis number is palindrom Number";
//     }
//     else{
//         cout << "Not a palindrom number";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
 int main ()
 {
    int Number=23;
    int Number2= 32;
    // int temp=0;
    // temp = Number;
    // Number =Number2;
    // Number2 =temp;
    // cout<< Number << "\n";
    // cout << Number2 <<"\n";
    Number =Number+Number2;
    Number2 =Number -Number2;
    Number =Number - Number2;
   cout<< Number << "\n";
    cout << Number2 <<"\n";
 }





 