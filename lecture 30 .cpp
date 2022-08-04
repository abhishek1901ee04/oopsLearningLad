#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Local classes in Cpp 
// when we define a class inside a function then it is called local class
// we can only call the class inside the function .. 
void studentList(){
class Student{
    public:
        string name;
        int age;
        void display(){
            cout<<name<<endl<<age<<endl;
        }
    };
    Student anil;
    anil.name = "anil";
    anil.age = 24;
    anil.display();
}
int main(){
    init_code();
    studentList();
return 0;
}
