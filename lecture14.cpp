#include<bits/stdc++.h>
using namespace std;
// staic member function 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }  
};
class student : public Person{
public:
    void display(){
        cout<<name<<endl;
    }
};

int main(){
    init_code();
    student abhishek;
    abhishek.setName("abhishek");
    abhishek.display();
    return 0;

}