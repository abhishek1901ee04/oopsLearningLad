#include<bits/stdc++.h>
#include <exception>

using namespace std;
class OverSpeed : public exception {
private:
  int speed;
public:
const char* what(){
  return "check out ur car speed \n you are in the car not in the plane \n ";
  }
  void getSpeed(){
    cout<<"your car speed is "<<speed<<endl;
  }  
  void setSpeed(int speed){
    this->speed = speed;
  }  
};
class Car{
private:
  int speed;
public:
  Car(){
    speed = 0;
    cout<<" speed is "<< speed <<endl;
  }
  void accelerate(){
    for(;;){
      speed +=10;
      cout<<" speed is "<< speed <<endl;
      if(speed>=250){
        OverSpeed s;
        s.setSpeed(speed);
        throw(s);
        s.getSpeed();
      }
    }
  }
};
void init_code(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE
}

int main(){
    init_code();
    Car apnigaddi;
    try{
      apnigaddi.accelerate();
    }catch(OverSpeed s){
      cout<<s.what() <<endl;
    }

    return 0;
}
