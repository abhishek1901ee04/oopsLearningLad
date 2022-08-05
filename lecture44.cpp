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
// IO stream 
// type of streams 
// text stream -:-   
// binary stream -:- sequence of bytes 
//  CPP stream Classes 
// iostream header -- input output stream 
// fstream header -- file stream 
// sstream header --- string stream
// built in stream 
// cin, cout, cerror, clog
// format flags and manipulators 
// endl, ends

int main(){
    init_code();
    // cout.setf(ios :: showpos | ios::showpoint);
    // cout.unsetf(ios :: showpos );
    auto flag = ios::showpos | ios::showpoint | ios::showbase ;
    cout.flags(flag);
    cout<<10.2<<endl;
    cout<<-65.3<<endl;
    cout<<56.8 <<endl;
    return 0;
} 
