#include <iostream>

using namespace std;

int main() {
    int t, a,b,c;
    cin >> t;
    int number;


    for (int i = 0; i < t; i++) {
        cin >> a>>b>>c;
        int d=a-b;
        if(d<=c){
            cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }



    }


}
