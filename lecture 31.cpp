#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// operator overloading function 
class Marks{
private:
    int mark;
public:
    Marks(){
        mark =0;
    }
    Marks(int x){
        mark = x;
    }
    void yourmarkplease(){
        cout<<"your mark is "<<mark <<endl;
    }
    void operator+=(int bp){
        mark = mark + bp;
    }
    friend void operator-=(Marks &curobj , int redmark);
};
void operator-=(Marks &curobj,int redmark){
     curobj.mark -=redmark;
}

int main(){
    init_code();
    Marks am(25);
    am.yourmarkplease();
    am +=(15);
    am.yourmarkplease();
    am -=(10);
    am.yourmarkplease();
    return 0;
}
