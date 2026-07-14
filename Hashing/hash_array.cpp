#include <bits/stdc++.h>
using namespace std;

// TIME: O(n + q)
// SPACE: O(max_value)

int main() {

    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter array elements: ";
    vector <int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    // assumes all inputs are non-negative

    // O(1) lookup per query after O(n) precompute
    int max_value = (n > 0) ?  *max_element(vec.begin(), vec.end()) : -1;
    // if n==0, then hash_arr becomes size 0
    // gaurd against edge case
    vector<int> hash_arr(max_value + 1, 0); // declare hash array
    for(int i=0; i<n; i++) hash_arr[vec[i]]++; // update values using loop

    int q;
    // q is the number of times you want to look up a value
    cout << "How many times do you want to search? ";
    cin >> q;
    // fetch
    while(q--) {
        int num;
        cin >> num;
        if (num>= 0 && num <= max_value) {
            cout << hash_arr[num] << "\n";
            // gives you the frequency of the element you entered
        }
        else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
