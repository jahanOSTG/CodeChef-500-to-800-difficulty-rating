#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x;
        y=x%3;
        if (y == 0) {
            cout << "NORMAL" << endl;
        } else if (y == 1) {
            cout << "HUGE" << endl;
        } else {
            cout << "SMALL" << endl;
        }
    }

    }

