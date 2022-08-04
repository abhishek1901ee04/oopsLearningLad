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
    int intmark;
    int extmark;
public:
    Marks(){
        intmark =0;
        extmark =0;
    }
    Marks(int im,int em){
        intmark = im;
        extmark = em;
    }
    void display (){
        cout<<intmark <<endl<<extmark<<endl;
    }
    Marks operator+(Marks m){
        Marks temp;
        temp.intmark = intmark + m.intmark;
        temp.extmark = extmark + m.extmark;
        return temp;
    }
     Marks operator-(Marks m){
        Marks temp;
        temp.intmark = intmark - m.intmark;
        temp.extmark = extmark - m.extmark;
        return temp;
    }
};

int main(){
    init_code();
    Marks m1(10,20),m2(25,38);
    Marks m3 = m1+ m2;
    Marks m4 = m2 - m1;
    m3.display();
    m4.display();
return 0;
}
