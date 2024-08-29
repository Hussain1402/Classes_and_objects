#include<iostream>
using namespace std;
class cuboid{
    public:
    int l,w,h,vol;
    void input(){
        cout<<"enter length:"<<endl;
        cin>>l;
        cout<<"enter width:"<<endl;
        cin>>w;
        cout<<"enter height:"<<endl;
        cin>>h;
    }
    void calculation(){
        vol=l*w*h;
    }
    void output(){
        cout<<"The volume of cuboid is: "<<vol;
    }
};cuboid c1;
int main(){
    c1.input();
    c1.calculation();
    c1.output();
    return 0;
}


/*
enter length:
4
enter width:
4
enter height:
4
The volume of cuboid is: 64
*/
