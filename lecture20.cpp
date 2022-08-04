#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// multiple inheritance in cpp
class Father{
    protected:
        int height;
    public:
       Father(){
        cout<<"constructor of father is called"<<endl;
       }
};
class Mother{
    protected:
        string skincolor;
    public:
       Mother(){
        cout<<"constructor of mother is called"<<endl;
       }
};

class child: public  Mother, public Father  {
public:
    child(int x, string icolor){
        height =x;
        skincolor = icolor;
        cout<<"child class constructor"<<endl;
    }
    void display(){
        cout<<"height is "<<height <<" skin color is "<<skincolor<<endl;
    }
};

int main(){
    init_code();
    child abhishek(21,"cocasian");
    abhishek.display();
    return 0;
}
