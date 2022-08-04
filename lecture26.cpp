#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// virtual function use 
class Person{
public:
    virtual void introduce(){
        cout<<"hey from person"<<endl;
    }
};
class Student : public  Person{
public:
    void introduce(){
        cout<<"hey from student "<<endl;
    }
};
class GStudent : public Student{
public:
    void introduce(){
        cout<<"hey from graduated student "<<endl;
    }
};

void Whosthis(Person &p){
    p.introduce();
}

int main(){
    init_code();
    Person a;
    Student b;
    GStudent c;
    Whosthis(a);
    Whosthis(b);
    Whosthis(c);
return 0;
}
