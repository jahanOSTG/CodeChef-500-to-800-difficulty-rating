#include<iostream>
using namespace std;

int main(){
    int t, x;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x;

        if(x <= 1){
            cout << "no" << endl;
            continue;
        }

        bool prime = true;  // ✅ Fix 1: Moved inside loop

        for(int i = 2; i < x; i++){
            if(x % i == 0){
                prime = false;  // ✅ Fix 2: divisible → not prime
                break;          // ✅ Fix 3: stop checking further
            }
        }

        if(prime){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
