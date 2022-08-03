#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// order of execution of Constructor and destructors in Cpp
class Person{
    public:
    Person(){
        cout<<"constructor of base class"<<endl;
    }  
    ~Person(){
        cout<<"destructered of the base class"<<endl;
    }
};

class student : public Person{
public:
    student(){
        cout<<"constructer of the derived class"<<endl;
    }
    ~student(){
        cout<<"destructered of the derived class"<<endl;
    }
};

int main(){
    init_code();
    student abhishek;
    return 0;
}
// ------- Result --------
// constructor of base class
// constructer of the derived class
// destructered of the derived class
// destructered of the base class
