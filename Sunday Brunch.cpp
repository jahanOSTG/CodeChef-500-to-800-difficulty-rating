
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
        cin>>a>>b;
        int c=a/b;
        if(c<=20){
            cout<<c<<endl;
        }else{
            cout<<20<<endl;
        }
	}

}
