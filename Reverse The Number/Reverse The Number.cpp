#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        string s=to_string(n);//convert int to string
        reverse(s.begin(),s.end());
        int num=stoi(s);//convert string to int
        cout<<num<<endl;

    }
}
