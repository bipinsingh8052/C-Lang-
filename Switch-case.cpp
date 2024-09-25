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



#include<iostream>
using namespace std;
int main()
{
    int Month;
    cout << "Enter the Month:";
    cout <<" Enter press 1 from month january , press 2 month Feb ....... and so Press 11 for nov , 12 for Dec and If you not see day then you press 0 :";
    cin >> Month;
    switch (Month)
    {
    case 1:
        cout << "IN this month 31 days";
        break;
     case 2:
        cout << "IN this month 28 days";
        break;
    case 3:
        cout << "IN this month 31 days";
        break;
    case 4:
        cout << "IN this month 30 days";
        break;
    case 5:
        cout << "IN this month 31 days";
        break;
    case 6:
        cout << "IN this month 30 days";
        break;
    case 7:
        cout << "IN this month 31 days";
        break;
    case 8:
        cout << "IN this month 30 days";
        break;
    case 9:
        cout << "IN this month 31 days";
        break;
    case 10:
        cout << "IN this month 30 days";
        
        break;
    case 11:
        cout << "IN this month 31 days";
        break;
    case 12:
        cout << "IN this month 30 days";
        break;
     case 0:
        cout << "Exiting...... ";
        break;   
    default:
       cout << "Your press a worng  option:";
        break;
    }
    return 0;
}


// switch 
// it is taken less time as compare as if/// condition base programing
// if condition
// its work nesting // choose base programming