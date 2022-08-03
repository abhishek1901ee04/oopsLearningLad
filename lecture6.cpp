#include<bits/stdc++.h>
using namespace std;
// you can not access private constructor outside the class
class human{
private:
    string name;
    int age;

public:
  human(){
    name = "noname";
    age=0;
    cout<<"this is a constructor "<<endl;
  }
  void display(){
    cout<<name<<endl<<age<<endl;
  }
};
int main(){
    
    human anil;
    anil.display();
    return 0;
}