#include <iostream>

using namespace std;

int main() {
    int t, a;
    cin >> t;
    int number;


    for (int i = 0; i < t; i++) {
        cin >> a;
        int count = 0;
        for (int i = 0; i < a; i++) {
            cin >> number;

            if (number >= 10 && number <= 60) {
                count++;

            }


        }
        cout << count << endl;



    }


}
