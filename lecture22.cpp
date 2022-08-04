#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Accessing the overridden methods in Cpp
class Person{
public:
    void introduce(){
        cout<<"hi I am a Person "<<endl;
        Person::introduce();
    }
};
class Student : public Person{
public:
    void introduce(){
        cout<<"hi I am a student and i am awesome"<<endl;
    }
};

int main(){
    init_code();
  Student abhishek;
  abhishek.introduce();
// yaa to aise call karo 
  // yaa phir student ki intriduce class main Person::introduce() call kardo 
   // abhishek.Person::introduce();
    return 0;
}
