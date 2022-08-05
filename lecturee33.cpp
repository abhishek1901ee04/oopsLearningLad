#include<bits/stdc++.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

// implementing the ++  & -- prefix operation 

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
        cout<<" your mark is "<<mark <<endl;
    }
    Marks operator++(int){
        Marks duplicate(*this);
        mark+=1;
        return duplicate;
    }
    friend Marks operator--(Marks &,int);
};

Marks operator--(Marks &m,int){
    Marks duplicate(m);
    m.mark -= 1;
    return duplicate;
}

int main(){
    init_code();
    Marks am(63);
    (am++).yourmarkplease();
    am.yourmarkplease();
    (am--).yourmarkplease();
    am.yourmarkplease();
    return 0;
}
