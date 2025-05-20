#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        d=b/a;
        if(d<c){
            cout<<(c-d)<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}
