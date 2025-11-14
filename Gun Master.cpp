#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, p;
    cin >> t;

    while (t--) {
        cin >> n >> p;   // p is D in the problem
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;  // count = number of switches
        bool closeGun = true;  // initially holding close-range gun

        for (int i = 0; i < n; i++) {

            bool needClose = (arr[i] <= p);   // if distance ≤ D → close gun needed

            if (needClose != closeGun) {
                count++;        // switch gun
                closeGun = needClose; // change current gun
            }
        }

        cout << count << endl;
    }

    return 0;
}
