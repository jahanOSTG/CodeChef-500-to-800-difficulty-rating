#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t,n,k,x,y;
	cin>>t;
	while(t--){
        cin>>n>>k>>x>>y;
        int price=min(x,y);
        int a=(k*x);
        cout<<a+(n-k)*price;
	}

}
