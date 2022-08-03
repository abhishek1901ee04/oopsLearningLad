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
    public:
    int height;
    void askFather(){
        cout<<"I am your father ask me what you want "<<endl;
    }
};

class Mother{
    public:
    string skincolor;
    void askMother(){
        cout<<"I am your Mother ask me what you want "<<endl;
    }
};
class child: public Father , public Mother {
public:
    void askParents(){
        cout<<"asking my parents"<<endl;
    }
    void setColorandHeight (string icolor,int iheight){
        skincolor = icolor;
        height = iheight;
    }
    void display(){
        cout<<"height is "<<height<<" and color is "<<skincolor <<endl;
    }

};

int main(){
    init_code();
    child abhishek;
    abhishek.setColorandHeight("cocasian",6);
    abhishek.display();
    abhishek.askFather();
    abhishek.askMother();
    return 0;
}

