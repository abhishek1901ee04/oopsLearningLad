#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

// Execptional handling in CPP

int main(){
    init_code();
    int a=10,b=0;
    int c;
    try{
      if(b==0)
        throw "divide by zero error";
      c= a/b;
      cout<<c<<endl;
      }catch(const char *e){
        cout<<"exception occured "<<endl <<e;
    }
    return 0;
}
