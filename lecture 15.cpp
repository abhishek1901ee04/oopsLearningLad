#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// when we use protected inheritnce in our program the public members of base class act
// protected mebers in our subclass so we cannot access them directly outside the subclass
class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }  
};
class student : protected Person{
public:
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
    // to ab hum abhishek.setName("abhishek"); ko access nahi kar sakte 
    // ye ab stdent class ke andar protected ban gayi hai 
    abhishek.setStudentName("abhishek");
    abhishek.display();
    return 0;

}