#include<bits/stdc++.h>
using namespace std;
// public and private are called access specifier 
// if you dont want the information to access outside the class you keep that information in private
// public ke andar ke elements ko keval class ke andar hi access kar sakte hai 
class human{
private:
    int age;
    int getAge(){
        return age-5;
    }
public:
   void displayAge(){
    cout<<getAge()<<endl;
   }
   void setAge(int val){
    age = val;
   }
};
int main(){
    human man;
   man.setAge(24);
   man.displayAge();

    return 0;
}