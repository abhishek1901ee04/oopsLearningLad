#include<bits/stdc++.h>
using namespace std;
// creating the distructor  
// we can't pass any value to distructor and distructor can not return any value 
class humanBeing{
    private:
    int age;
    string name;
public:
    humanBeing(){
        cout<<" constructor called"<<endl;
        age =0;
        name = "noname";
    }

    ~humanBeing(){
        cout<<"destructer called "<<endl;
    }
  
};
int main(){
   humanBeing *anil;
   anil = new humanBeing();
   delete anil;
    return 0;

}