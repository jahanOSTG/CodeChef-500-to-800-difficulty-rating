#include <iostream>

using namespace std;

int main() {
    int t;
    float a, b, c, d;
    cin >> t;
    int number;


    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;

        if ((a / b) == (c / d)) {
            cout << "EQUAL" << endl;
        } else if ((a / b) > (c / d)) {
            cout << "ALICE" << endl;
        } else {
            cout << "BOB" << endl;
        }



    }


}
