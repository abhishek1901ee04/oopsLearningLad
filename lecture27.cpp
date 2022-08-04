#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// pure virtual function 
// when declareing a pure virtual function
// when we have a pure virtual function in base class 
// we must need to overwrite it in derive class 
class Person{ 
public:
    virtual void introduce() = 0;
}; 
void Person :: introduce(){
    cout<<"hey form person "<<endl;
} 

class Student : public  Person{
public:
    void introduce(){
        cout<<"hey from student "<<endl;
        Person::introduce();
    }
};
 
int main(){
    init_code();
     // Person a;
    Student b;
    b.introduce();
    b.Person::introduce();
return 0;
}
//notes
// when we have a pure virtual function in a abstract class 
// it becomes abstract class and we can't create object of abstract class
// abstract classes can be used as a foundation of derived classes
 