#include<bits/stdc++.h>
using namespace std;

// c++ destructors to release Resources with example 

class humanBeing{
    private:
    int *age;
    string *name;
public:
    humanBeing(string iname, int iage){
       age = new int;
       name = new string;

       *age = iage;
       *name = iname;
    }
    void display(){
        cout<<"hello boys I am "<<*name<<" and i am "<<*age<<" year old"<<endl;
    }
    ~humanBeing(){
        delete age;
        delete name;
        cout<<"destructer called and memory released"<<endl;
    }
  
};
int main(){
   humanBeing *anil = new humanBeing("abhishek ",21);
   anil->display();
    delete anil;
    return 0;

}