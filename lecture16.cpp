#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }  
};
class student : private Person{
public:
    void display(){
        cout<<name<<endl;
    }
public:
    void studentSetName(string iname){
        setName(iname);
    }
};

class Gstudent: public student{
public:
    void setGstudentName(string iname){
        studentSetName(iname);
    }
};

int main(){
    init_code();
    Gstudent abhi;
    abhi.setGstudentName("trivedi");
    abhi.display();
    student abhishek;
    abhishek.studentSetName("abhishek");
    abhishek.display();
    return 0;

}