#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
class Person{
public:
    void introduce(){
        cout<<"hey from person"<<endl;
    }
};
class Student : public  Person{
public:
    void introduce(){
        cout<<"hey from student "<<endl;
    }
};
void Whosthis(Person &p){
    p.introduce();
}

int main(){
    init_code();
  Student abhishek;
  abhishek.introduce();
  Whosthis(abhishek);
return 0;
}
