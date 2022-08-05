#include<bits/stdc++.h>
#include <exception>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Functions Throwing Exceptions 
// in functions we need to speicfy which type of errors it can throw
// but now ISO C++17 does not allow dynamic exception specifications
void test() throw(int, string, runtime_error){
  throw(20);
}
int main(){
    init_code();
    try{
      test();
    }catch(runtime_error &error){
          cout<<error.what();
    }catch(const char *e){
      cout<<e <<endl;
    }catch(int error){
      cout<<error <<endl;
    }catch(...){
      cout<<" some exception occured "<<endl;
    }
    // we can write a catch block which can catch
    // all type of errors 

    return 0;
}
