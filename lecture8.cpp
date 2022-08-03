#include<bits/stdc++.h>
using namespace std;
// agar hum kisi overloaded constructor main sarre parameter ki defualt value pass karde to wo default constructor ban jaata hai phir hum defualt ko hata sakte hai
class humanBeing{
    private:
    int age;
    string name;
public:
    // humanBeing(){
    //     cout<<"default constructor "<<endl;
    //     age =0;
    //     name = "noname";
    // }
   
    humanBeing(string iname="anil" , int iage=0){
        cout<<"constructor with name and age as the parameter" <<endl;
        name = iname;
        age = iage;
    }
    void display(){
        cout<<name<<endl<<age<<endl;
    }
};
int main(){
    humanBeing man;
    man.display();
    humanBeing man1("ankit");
    man1.display();
    humanBeing man2("amit",14);
       man2.display();
       
    return 0;
}