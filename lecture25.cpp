#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Polymorphism and virtual function 
class Person{
public:
    virtual void introduce(){
        cout<<"hi I am a Person "<<endl;
    }
};
class Student : public Person{
public:
    void introduce(){
        cout<<"hi I am a student "<<endl;
    }
};
class Farmer : public Person{
public:
    void introduce(){
        cout<<"hi I am a Farmer "<<endl;
    }
};
void Whosthis(Person &p){
    p.introduce();
}
int main(){
  init_code();
  Student alice;
  Farmer bob;
  Whosthis(alice);
  Whosthis(bob);
    return 0;
}
// notes 
//  when we didn't specify the which overritten function to execute it 
// execute the base class one 
// but when we write virtual ahead of overwritten function 