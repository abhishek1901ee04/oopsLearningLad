#include<bits/stdc++.h>
using namespace std;
// staic member function 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// friend functions 
class Human{
    string name;
    int age;
public:
    Human (string iname, int iage){
        name = iname;
        age = iage;
    }
    void tellme (){
        cout<<name<<endl<<age<<endl;
    }
    friend void display(Human man);

};
void display(Human man ){
    cout<<man.name<<endl<<man.age<<endl;
}
int main(){
    init_code();
   Human abhishek("abhishek",22);
   display(abhishek);
   cout<<endl;
   Human akarsh("Mc akarsh",21);
   display(akarsh);
    return 0;

}