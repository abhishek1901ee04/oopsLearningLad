#include<bits/stdc++.h>
using namespace std;
// staic member function 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// protected  access specifier is similar to private access specifier with a benefit that protected 
// members and the protected member function are available in the class in which they are defined and
// also in the subclasses which inherit the class where they are defined ..

// public inheritance:
class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }  
};
class student : public Person{
public:
    void display(){
        cout<<name<<endl;
    }
};

int main(){
    init_code();
    student abhishek;
    // you can not change the name like this 
    // abhishek.name = "abhi";
    // because the name is protected 
    abhishek.setName("abhishek");
    abhishek.display();
    return 0;

}
// access control inheritance specifier details
//-------------- public ---------- protected ------- private
// same class    yes                yes                 yes
// derived class yes                 yes                no 
// outside class yes                    no              no
