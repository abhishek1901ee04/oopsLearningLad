#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Accessing the overridden methods in Cpp
class Person{
private:
    int age;
public:
    // if we pass parameter with same name as age will give garbage vlaues
    void setAge(int age){
        //age= age;
        this->age = age;
    }
    void showAge(){
        cout<< this->age <<endl;
    }
};

int main(){
    init_code();
    Person abhishek;
    abhishek.setAge(22);
    abhishek.showAge();
    return 0;
}
