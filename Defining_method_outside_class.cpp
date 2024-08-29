#include<iostream>
using namespace std;
class student{
    public:
    void Mymethod();
};student s1;
void student::Mymethod(){
    cout<<"I am studying c++!";
}
int main(){
    s1.Mymethod();
    return 0;
}

/*
I am studying c++!
*/
