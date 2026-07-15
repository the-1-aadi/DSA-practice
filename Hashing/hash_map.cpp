#include <bits/stdc++.h>
using namespace std;

// for map:
// TIME: O(log(n))
// SPACE: O(log(n))

// for unordered_map:
// TIME: O(1)-best, avg. case, O(n)-worst case
// SPACE: O(1)-best, avg. case, O(n)-worst case

// n is the number of elements in the array

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements in array: ";
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    // pre computing
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[vec[i]]++;
    }

    // queries
    cout << "Enter number of queries: ";
    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        if (num>= 0) {
            cout << mpp[num] << "\n";
            // gives you the frequency of the element you entered
        }
        else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
