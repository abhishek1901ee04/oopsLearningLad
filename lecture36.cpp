#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

// Overloading Arrow operator ->
// it can not be implemented by friend function 
class Marks{
private:
int mark;
public:
  Marks (int x){
    mark = x;
  }
  void displaymark(){
    cout<<"hey i got "<<mark<<endl;
  }
  Marks* operator->() { 
    return this;
  } 
};

int main(){
    init_code();
    Marks m(43);
    m.displaymark();
    m->displaymark();
    return 0;
}
