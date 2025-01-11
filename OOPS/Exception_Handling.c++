// What is Exception?
// abnormal condition (definition) are called Expertion




// What is Execption Handling
// is used to handle exception


// // What is DisInheritance
// // // it is resolve the function overriding problem
// // in this parent class function you write it{ Final} only
// void fun()final{
//     statment
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the 2 number:";
//     cin>>a;
//     cin>>b;
//     try{
//         if(a<=0||b<=0){
//             throw b;
//         }
//         else{
//             cout<<a/b;
//         }
//     }
//     catch(int a){
//         cout<<"enter again number";
      
//     }
//     cout<<"Done";
// }



#include<iostream>
using namespace std;
int main(){
    int a=9;
    cout<<"enter The number:";
    cin>>a;
    try{
        if(a==1){
            throw 9;
        }
        if(a==2){
            throw 'a';
        }if(a==3){
            throw 9.00;
        }
    }
    // catch(int a){
    //     cout<<"this is intger";
    // }
    // catch (float a){
    //     cout<<"This is float";
    // }
    // catch (char a){
    //     cout<<"THis is char";

    // }


    // work
    catch(...){
        cout<<"infindecxx";
    }
    cout<<"final";
}