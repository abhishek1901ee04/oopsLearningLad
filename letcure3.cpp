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
    humanBeing man; // by this method object is stired in stack 
    humanBeing *bunty = new humanBeing(); // by this method object is stored in heap 

    man.name = " abhishek";
    man.introduce();
    
    bunty->name = "bunty";
    bunty->introduce();
    // for object we use . operator  & for pointer we use -> operator 
    return 0;
}