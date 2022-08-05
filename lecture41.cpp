#include<bits/stdc++.h>
#include <exception>
#include<stdexcept>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
class Student {
private:
  string name;
  int age;
  public:
    Student(){
      name ="noname";
      age =0;
    }
    Student( string name, int age){
      this->name = name;
      this->age = age;
    }
    void whoAreYou(){
      cout<<"name : "<<name<<" age: "<<age<<endl;
    }
    void *operator new(size_t size){
      void *pointer;
      cout<<"overloaded new.size is "<<size <<endl;
      pointer = malloc(size);
      if(!pointer){
        bad_alloc ba;
        throw ba;
      }
      return pointer;
    }
    void operator delete(void* pointer){
      cout<<"overloaded delete "<<endl;
      free(pointer);
    }
};
int main(){
    init_code();
    Student* abhi;
    try{
      abhi = new Student("abhishek" ,22);
      abhi ->whoAreYou();
      delete abhi;
    }catch(bad_alloc b){
      cout<<b.what()<<endl;
    }

    return 0;
}
