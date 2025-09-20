#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    int total_ball=m*6;
	    int total_run=total_ball*6;
	    if(n<=total_run){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}

}
