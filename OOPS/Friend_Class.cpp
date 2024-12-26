  #include<iostream>
  using namespace std;
  class sbi{

    int amount =10000;
    friend class rbi;
  };
  class pub{
    int amount =10000000;
    friend class rbi;
  };
  class rbi{
    public:void sbi_amount(sbi s){
        cout<<"amount of this sbi no:"<<s.amount<<"\n";
    }
    void pub_amount(pub p){
        cout<<"Amount of pub in no:"<<p.amount<<"\n";
    }
  };

  int main(){
    sbi s;
    pub p;
    rbi r;
    r.pub_amount(s);
    r.sbi_amount(p);
  }