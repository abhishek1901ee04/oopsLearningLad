#include<bits/stdc++.h>
using namespace std;
class humanBeing{
public:
    string name;
    void introduce(){
        cout<<" hi i am "<<name <<endl;
    }
};
// knowing how to use pointer and objects 
int main(){
    humanBeing man;
    humanBeing *bunty = new humanBeing();

    man.name = " abhishek";
    man.introduce();
    
    bunty->name = "bunty";
    bunty->introduce();

    return 0;
}