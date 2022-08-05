#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

// Execptional handling in CPP
// you can not create nested try and catch blocks 
int main(){
    init_code();
    try{
      try{
         throw "a character exception";
      }catch(const char *e){
        cout<<"character type in inner block -->  "<<e<<endl;
        cout<<"rethrowing error"<<endl;
        throw runtime_error("sdded");
      }
    }catch(const char *e){
      cout<<"character type in outer block  --> "<<e<<endl;
    }catch(...){
      cout<<"unexpected exception in outer block "<<endl;
    }

    return 0;
}
