#include<bits/stdc++.h>
using namespace std;

// c++ destructors to release Resources with example 

class human{
public:
  static int human_count;
  human(){
    human_count++;
  }
  void humanTotal(){
    cout<<"there are "<<human_count <<" people in this program"<<endl;
  }
};
int human::human_count=0;
int main(){
    human amit;
    human ashu_p;
    human ankit;
    human abhishek;
    amit.humanTotal();
    return 0;

}