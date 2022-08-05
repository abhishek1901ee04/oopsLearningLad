#include<bits/stdc++.h>
#include <exception>
#include<stdexcept>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
class Person {
  public:
  string *name;
  int age;
    Person(string name, int age){
      this->name = new string(name);
      this->age = age;
    }
    Person(const Person &p){
      name = new string (*p.name);
      age  = p.age;
    }
    void changeNameandAge(string name, int age){
      *(this->name) = name;
      this->age = age;
    } 
    void introduce(){
      cout<<" hey I am "<<*name <<" and my age is "<<age<<endl;
    }
};
int main(){
    init_code();
    Person abhi ("abhi",22);
    abhi.introduce();
    Person dupabhi = abhi;
    dupabhi.introduce();

    abhi.changeNameandAge("abhishek ",20);
    abhi.introduce();
    dupabhi.introduce();
    return 0;
}
