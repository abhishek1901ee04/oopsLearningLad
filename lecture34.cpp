#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

// Overloading special [],(),->

class Marks{
protected:
int sub[3];
public:
  Marks (int sub1,int sub2,int sub3){
    sub[0] = sub1;
    sub[1] = sub2;
    sub[2] = sub3;
  }
  int operator[](int pos){
    return sub[pos];
  }
};

int main(){
    init_code();
    Marks m(34,38,43);
    cout <<m[0]<<" "<<m[1]<<" "<<m[2]<<endl;
    return 0;
}
