#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// Nested classes in Cpp

class Person{
public:
   string name;
   class Address{
   public:
        string country;
        string stname;
        int hno;
   };
   Address addr;
   void AddressPlease(){
    cout<<name<<endl<<addr.country<<endl<<addr.stname<<addr.hno<<endl;
   }
};

int main(){
    init_code();
    // aise declare karte hai error aata hai 
    // Address ad;
    // iski jagah 
     Person :: Address ad;
    // aise declare karte hai 
    Person a;
    a.name = "abhishek trivedi";
    a.addr.country = "India";
    a.addr.stname = "Madhya pradesh";
    a.addr.hno = 04;
    a.AddressPlease();
return 0;
}
