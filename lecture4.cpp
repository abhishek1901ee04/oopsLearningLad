#include<bits/stdc++.h>
using namespace std;
// using the scope resolution operator 
// hum scope resolution operator ki madad se keval staic meber ko hi change kar skae hai 
// agar hum sring HumaanBeing::name = "abhishek" kre to error aa ajyegi 
class humanBeing{
public:
    string name;
    void introduce();
};
void humanBeing ::introduce(){
    cout<<humanBeing::name <<endl;
}
int main(){
    humanBeing man;
    man.name = " abhishek";
    man.introduce();

    return 0;
}