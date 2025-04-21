#include<iostream>
using namespace std;
int main(){
    string name1;
    string name2;
    int per1,per2;
    cin>>name1>>name2;
    cin>>per1>>per2;
    if(per1>per2){
        cout<<name1<<endl;

    }else if(per1==per2){
        cout<<"equal"<<endl;

    }
    else{
        cout<<name2<<endl;
    }
}
