#include<bits/stdc++.h>
using namespace std;
// overoading constructor 
class humanBeing{
    private:
    int age;
    string name;
public:
    humanBeing(){
        cout<<"default constructor "<<endl;
        age =0;
        name = "noname";
    }
    humanBeing(string iname){
        cout<<"constructor with name as the parameter"<<endl;
        name = iname;
        age = 0;
    }
    humanBeing(int iage){
        cout<<"constructor with age as the parameter" <<endl;
        name = "noname";
        age = iage;
    }
    humanBeing(string iname , int iage){
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
    humanBeing man3(15);
       man3.display();
    return 0;
}