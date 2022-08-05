#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
// overloading increment and decrement operator 
class Marks{
protected:
int mark;
public:
    Marks(){
        mark =0;
    }
    Marks(int x){
        mark = x;
    }
    void yourmarkplease(){
        cout<<" your mark is "<<mark <<endl;
    }
    Marks operator++ (){
        mark +=1;
        return *this;
    }
    friend Marks operator--(Marks &);
};
Marks operator--(Marks &m){
    m.mark -= 1;
    return m;
}

int main(){
    init_code();
    Marks am(63);
    am.yourmarkplease();
    (++am).yourmarkplease();
    
    (--am).yourmarkplease();
    return 0;
}
