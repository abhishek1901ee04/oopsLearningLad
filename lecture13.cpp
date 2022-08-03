#include<bits/stdc++.h>
using namespace std;
// staic member function 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Inheritance 
// using objects of one class into another one 
// In this example class person is a base class 
// In this example class student is a subclass
class Person{
public:
    string name;
    int age;
    void setName( string iname){name = iname;}
    void setAge(int iage){age = iage;}
};
class student : public Person{
public:
    int id;
    void setId(int iid){
        id = iid;
    }
    void introduce(){
        cout<<"hi I am "<<name<<" and I am "<<age<<" years old "<<endl << " and mu student id is "<<id<<endl;
    }
};

int main(){
    init_code();
    student abhishek;
    abhishek.setName("abhishek");
    abhishek.setAge(21);
    abhishek.setId(190104);
    abhishek.introduce();
    return 0;

}