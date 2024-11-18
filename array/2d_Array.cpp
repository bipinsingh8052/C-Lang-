// // w.a.p to how to take input and output the array in 2d ?
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number :";
//             cin>>a[i][j];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"output  the number :";
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
// }


// //w.a.p to find the even number in 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]%2==0){
//                 cout<<"This is even number:";
//                 cout<<a[i][j]<<"\n";
//             }
//         }
//     }
// }


// // w.a.p to find sum of all value in given 2d array 
// #include<iostream>
// using namespace std;
// int main(){
//      int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int total=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             total+=a[i][j];
//         }
//     }
//     cout<<total<<"sum of arry";
// }


// // w.a.p to find the maximum value in this 2d array 
// #include<iostream>
// using namespace std;
// int main(){
//      int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int max=INT8_MIN;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(max<a[i][j]){
//                 max=a[i][j];
//             }
//         }
//     }
//     cout<<"this is maximum value :"<<max;
// }


// // w.a.p to find the minimun value in 2d array?
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int min =INT16_MAX;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(min>a[i][j]){
//                 min=a[i][j];
//             }
//         }
//     }
//     cout<<"This is minimum value:"<<min;
// }


// w.a.p to find the second largest value in the array
#include<iostream>
using namespace std;
int main(){
     int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the number:";
            cin>>a[i][j];
        }
    }
    int max1,max2;
    max1=max2=INT16_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max1<a[i][j]){
                max2=max1;
                max1=a[i][j];
            }
            else if(a[i][j]<max1&a[i][j]>max2);
            {
                max2=a[i][j];
            }
        }
    }
}