#include<bits/stdc++.h>
#include <exception>

using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// overloading stream insertion and extraction .. 
class Person{
private:
  string name;
  int age;
  public:
    Person(){
      name = "noname";
      age = 24;
    }
    friend ostream & operator << (ostream &output , Person &p);
    friend istream & operator >>(istream & input, Person & p);
};
ostream & operator <<(ostream & output, Person &p){
  output <<"my name is "<<p.name <<" and age is "<<p.age<<endl;
  return output;
}
istream & operator >>(istream & input, Person &p){
  input>>p.name >> p.age;
  return input;
}
int main(){
    init_code();
    Person abhi;
    cin>>abhi;
    cout<<abhi;
    return 0;
}
