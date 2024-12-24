// Destructor
// it deallocated  (delete) it you extra memory


// this is example of destructor in class

// we can used in (~)teled sign create a function
#include<iostream>
#include<string.h>
using namespace std;
class student {
    char *c;
    public:
    student(char *s){
        c=new char[20];
        strcpy(c,s);
    }
    student (student &on){
        c=new char [20];
        strcpy(c,on.c);
    }
    void show(){
        cout<< "\n name"<<c<<"\n";
    }
    void surname(char *h){
        strcat(c,h);
    }
    ~student(){
        cout<<"Delete the memory:\n";
        delete c;
    }
};
int main(){
    student ju("bipinsing");
    ju.show();
    student hn(ju);
    hn.surname("singh");
    ju.show();
    hn.show();

}






// #include<iostream>
// using namespace std;
// class student {
   
//     public: student(){
//         cout<<"hellow"

//     }
// }u;
// int main(){
//     cout<<"he";
//     // student ju("bipinsinghyadavjsikmillaraqwertyuiopasdfghjkl");
//     // ju.show();
//     // student hn(ju);
//     // hn.surname("singh");
//     // ju.show();
//     // hn.show();

// }