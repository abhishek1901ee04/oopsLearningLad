#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// overriding Base class methods in derived class
class Person{
public:
    void introduce(){
        cout<<"hi I am a Person "<<endl;
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
    return 0;
}
