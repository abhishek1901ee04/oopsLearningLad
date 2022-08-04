#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Diamond problem in c++
// diamond problem is set to arise when there is an inheritance hierachy 
//containing two or more bases classses that inherit from a common base
//  whih result in the need of ambiguity resolution in absence of virtual inheritance
class Animal{
public:
    int age;
    Animal(){
        cout<<"constructor of animal "<<endl;
    }
    void walk(){
        cout<<"animal walks"<<endl;
    }
};
class Tiger : virtual public Animal{
public:
    Tiger(){
        cout<<"Tiger constructor "<<endl;
    }
};
class Lion : virtual public Animal{
public:
    Lion(){
        cout<<"Lion constructor"<<endl;
    }
};
class Liger : public Tiger,public Lion{
public:
    Liger(){
        cout<<"constructor of liger "<<endl;
    }
};

int main(){
    init_code();
    Liger a;
    a.walk();
    return 0;
}
// it shows error 
// request for member 'walk' is ambiguous
//   38 |     a.walk();
// solution 
// whenever you need to use derived class as base class 
// always use virtual inheritance to avoid diamond problem
// --------- contructor call -------
// while using virtual inheritance 
// example inthis question 
// constructor of animal 
// Tiger constructor 
// Lion constructor
// constructor of liger 
// animal walks