// SWITCH CASE
// WHEN LOT OF USING IF ELSE THEN WE USE IT SWITCH CASE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int Choice;
//     cout << "Enter the Choice NUmber:";
//     cin >> Choice;
//     int Number;
//     cout << "Enter the number:";
//     cin >> Number;
//     int Number2;
//     cout << "Enter the number:";
//     cin >> Number2;
//     int Total;
//     switch (Choice)
//     {
//     case 1 :
       
//         Total = Number+ Number2;
//         break;
    
//     case 2 :
         
//         Total = Number - Number2;
//         break;

//      case 3 :
        
//         Total = Number * Number2;
//         break;  
//     case 4 :
        
//         Total = Number /  Number2;
        
//         break;

//     default:
//         cout << "YOu enter the incorrect option:";
//         break;
//     }
//     cout << Total; 
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int Month;
//     cout << "Enter the Month:";
//     cout <<" Enter press 1 from month january , press 2 month Feb ....... and so Press 11 for nov , 12 for Dec and If you not see day then you press 0 :";
//     cin >> Month;
//     switch (Month)
//     {
//     case 1:
//         cout << "IN this month 31 days";
//         break;
//      case 2:
//         cout << "IN this month 28 days";
//         break;
//     case 3:
//         cout << "IN this month 31 days";
//         break;
//     case 4:
//         cout << "IN this month 30 days";
//         break;
//     case 5:
//         cout << "IN this month 31 days";
//         break;
//     case 6:
//         cout << "IN this month 30 days";
//         break;
//     case 7:
//         cout << "IN this month 31 days";
//         break;
//     case 8:
//         cout << "IN this month 30 days";
//         break;
//     case 9:
//         cout << "IN this month 31 days";
//         break;
//     case 10:
//         cout << "IN this month 30 days";
        
//         break;
//     case 11:
//         cout << "IN this month 31 days";
//         break;
//     case 12:
//         cout << "IN this month 30 days";
//         break;
//      case 0:
//         cout << "Exiting...... ";
//         break;   
//     default:
//        cout << "Your press a worng  option:";
//         break;
//     }
//     return 0;
// }


// // switch 
// // it is taken less time as compare as if/// condition base programing
// // if condition
// // its work nesting // choose base programming


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the number a :";
//     cin >>a;
//     cout<<"Enter the number b:";
//     cin>>b;
//     int c=0;
//     cout<<"Enter for swap: 1"<<"\n";
//     cout<<"select for 2 for max value:"<<"\n";
//     cin>>c;
//     // switch (c)
//     // {
//     // case 1:{
//     //     a=a+b;
//     //     b=a-b;
//     //     a=a-b;
//     //     cout<<"a is value:"<<a<<"\n"<<"b is value"<<b;
//     //     break;
//     // }
//     // case 2:{
//     //     if(a>b){
//     //         cout<<"A is grater then b"<<"\n";
//     //     }
//     //     else{
//     //         cout<<"B is greater then a:"<<"\n";
//     //     }
//     //     break;
//     // }
    
//     // default:
//     //     cout<<"Invalid value";
//     //     break;
//     // }


// }



// Q.1 Program to take the hours and minutes and the show that whether it is AM or PM by using the switch statement.


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter the hour:";
//     cin>>a;
//     switch(a)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//         case 6:
//         case 8:
//         case 7:
//         case 9:
//         case 10:
//         case 11:
//         {
//             cout <<"AM"<<a;
//             break;
//         }
//         case 12:
//         case 21:
//         case 13:
//         case 14:
//         case 15:
//         case 16:
//         case 17:
//         case 18:
//         case 19:
//         case 20:
//         case 22:
//         case 23:
//         case 24:{
//             cout<< "P M "<<a;
//             break;
//         }
//         default:
//         {
//             cout<<"invalid hour and min";
//         }

//     }
// }



// Q.2 Write a Simple program in C++ to print Day of the Week using switch statements taking input as number 
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the day no:";
    cin>>day;
    switch(day){
        case 1:
        {
            cout<<"monday";
            break;
        }
        case 2:
        {
            cout<<"tuesday";
            break;
        }
        case 3:
        {
            cout<<"wend";
            break;
        }
        case 4:
        {
            cout<<"thur";
            break;
        }
        case 5:
        {
            cout<<"fri";
            break;
        }
        case 6:
        {
            cout<<"stau";
            break;
        }
        case 7:
        {
            cout<<"Sun";
            break;
        }
        default:
        {
            cout<<"Invalid input";
            
        }
    }

}