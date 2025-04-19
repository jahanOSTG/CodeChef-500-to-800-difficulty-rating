
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int A, B, C;
        cin >> A >> B >> C;


        int min_required = max(A, C);

        if(min_required <= B) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
