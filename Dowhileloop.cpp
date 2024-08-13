// #include<iostream>
// using namespace std;
// void main()
// {
//     int Number ;
//     do {
//        cout << "Enter the number :";
//        cin >> Number ;

//     } while(Number!= 0);
    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int Number =0;
//     cout <<"Enter the Even number :";
//     cin >> Number ;
//     do{
//         cout <<"Enter the Even number :";
//         cin >> Number ;
//         if(Number % 2 !=0)
//         {
//             Number =Number +1;
            
//         }

//     }while (Number != 0);
//     return 0;
// }


#include<iostream>
using namespace std ;
int main()
{
    int Number ;
    int Sum =0;
    cout << "Enter the Even number :";
     cin >> Number;
   
    do {
            if( Number %2 ==0)
            { 
                 Sum =Sum +Number;
               cout << "Enter the  odd number  :";
               cin >> Number ;
            }
            else {
                 Sum =Sum+Number;
                    cout << "Enter the  even number  :";
                    cin >> Number ; 
            }
        
         
        }while(Number != 0); 

    cout<< Sum;
    return 0;
}


//        
    //         cout << "Enter the  even number  :";
    //         cin >> Number ;
    //    if((Count ==true && Number %2 == 0 )||(Count == true && Number %2 == 2 )||(Count == true && Number %2 == 4 ) ||(Count == 1 && Number %2 == 5 )||(Count == 1 && Number %2 == 7 )||(Count == 1 && Number %2 == 9 ))
    //     {
    //         Count= false;
    //         Sum =Sum +Number;
    //         cout << "Enter the  odd number  :";
    //      

    //     } 
    //     else if((Count ==false && Number %2 == 1 )||(Count == false && Number %2 == 3 )||(Count == false && Number %2 == 4 ) ||(Count == 1 && Number %2 == 5 )||(Count == 1 && Number %2 == 7 )||(Count == 1 && Number %2 == 9 )){
    //          Sum =Sum+Number;
    //          Count =true; 
    //          cout << "Enter the  even number  :";
    //        
    //      }
          

        //   w.a.p to di account for user if the amount lessan then total balancs then print vi __success_typeotherwise print in siffient balan   you 
        //   withbal 
          

         