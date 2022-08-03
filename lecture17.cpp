#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// access decleration in Cpp
// warning: access declarations are deprecated in favour of using-declarations; suggestion: add the 'using' keyword
class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }  
};

class student : private Person{
public:
    // so we use using keyword here 
    using Person :: name;
    using  Person :: setName;
    void display(){
        cout<<name<<endl;
    }
    void setStudentName(string iname){
        setName(iname);
    }

};

int main(){
    init_code();
    student abhishek;
    abhishek.name = "abhi";
    abhishek.display();
    abhishek.setName("trivedi");
    abhishek.display();
    return 0;

}