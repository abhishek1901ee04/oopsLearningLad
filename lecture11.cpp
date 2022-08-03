#include<bits/stdc++.h>
using namespace std;
// staic member function 
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}
class humanBeing{
public:
static int human_count;
humanBeing(){
    human_count++;
}
void humanTotal(){
    cout<<"there are total "<<human_count <<" people in the program"<<endl;
}
static void humanCount(){
    cout<<"there are total "<<human_count <<" people in the program"<<endl;
}

  
};
int humanBeing ::human_count =0;
int main(){
    init_code();
    humanBeing amit;
    humanBeing abhishek;
    humanBeing ankit;
    humanBeing :: humanCount();
    cout<<humanBeing:: human_count <<endl;
    return 0;

}