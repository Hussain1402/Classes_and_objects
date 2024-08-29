#include<iostream>
using namespace std;
class student{
    public:
    string name;
    float age;
    string branch;
    float result;
    string year;
};student s1,s2;
int main(){
    s1.name="Hussain Tayyebi";
    s1.age=19;
    s1.branch="E&TC";
    s1.result=8.83;
    s1.year="Second";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"GPA: "<<s1.result<<endl;
    cout<<"Year: "<<s1.year<<endl;
    cout<<"Friend's information: "<<endl;
    s2.name="Soham Jade";
    s2.age=19;
    s2.branch="E&TC";
    s2.result=7.86;
    s2.year="Second";
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;
    cout<<"Branch: "<<s2.branch<<endl;
    cout<<"GPA: "<<s2.result<<endl;
    cout<<"Year: "<<s2.year<<endl;
    return 0; 
}



/*
Name: Hussain Tayyebi
Age: 19
Branch: E&TC
GPA: 8.83
Year: Second
Friend's information: 
Name: Soham Jade
Age: 19
Branch: E&TC
GPA: 7.86
Year: Second
*/
