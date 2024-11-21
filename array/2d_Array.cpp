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


// // w.a.p to find the second largest value in the array
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
//     int max1,max2;
//     max1=max2=INT16_MIN;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(max1<a[i][j]){
//                 max2=max1;
//                 max1=a[i][j];
//             }
//             else if(a[i][j]>max2&a[i][j]<max1)
//             {
//                 max2=a[i][j];
//             }
//         }
//     }
//     cout<<max1<<"n"<<max2;
// }



// // w.a.p to find the transpose conceft of apply in max;
// #include<iostream>
// using namespace std;
// int main(){
//          int a[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     cout<<"OUtput"<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//     cout<<"Data output:"<<"\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<a[j][i]<<"\t";
//         }
//         cout<<"\n";
//     }
// }


// second option of this question:
#include<iostream>
using namespace std;
int main(){
    int s=3;
    int l=3;
    cout<<"Enter the size of 1d array:"<<"\n";
    cin>>s;
    cout<<"Enter the size of second 2d index array:"<<"\n";
    cin>>l;
    cout<<"Enter the  "<<s*l<<" numbers";
    int a[s][l]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<s;i++){
        for(int j=0;j<l;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<s;i++){
            for(int j=0;j<l;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
 cout<<"THis output is given your array:"<<"\n";   

    if(s==l){
        for(int i=0;i<s;i++){
        for(int j=i;j<l;j++){
            int temp =a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
        }
    }
    else{
        cout<<"this is not a square form:";
    }
    cout<<"out"<<"\n";
    for(int i=0;i<s;i++){
            for(int j=0;j<l;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
     }
}