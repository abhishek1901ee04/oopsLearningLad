#include<bits/stdc++.h>
using namespace std;
// public and private are called access specifier 
class humanBeing{
public:
    string name;
    void introduce(){
        cout<<" hi i am "<<name <<endl;
    }
};
int main(){
    humanBeing man;
    man.name = " abhishek";
    man.introduce();
    humanBeing anjali ;
    anjali.name= "anjali";
    anjali.introduce();

    return 0;
}