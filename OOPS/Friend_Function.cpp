// What is friend function
// Friend function is bascilly to access the private /protoed class data member and member function in outside the class 
#include<iostream>
using namespace std;
class student2;
class student1{
    int marks=90;
    friend void cmp(student1,student2);
};
class student2{
    int marks=80;
    friend void cmp(student1,student2);
};
void cmp(student1 s1,student2 s2){
    if(s1.marks>s2.marks){
        cout<<"Student 1 is greater then student 2 :"<<s1.marks<<"\n";
    }
    else{
        cout<<"Student 2 is greater then student 1 :"<<s2.marks<<"\n";
    }
    cout<<"student1 :"<<s1.marks<<"\t stundet 2:"<<s2.marks<<"\n";
};
int main(){
    student1 a1;
    student2 a2;
    cmp(a1,a2);
}