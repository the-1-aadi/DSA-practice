#include <bits/stdc++.h>
using namespace std;

// TIME: O(n^2)-> best, avg, and worst case
// SPACE: O(1)-> Uses constant amount of extra memory for swapping elements

void selection_sort(vector<int> &vec, int n) {
    int min_index;
    // loop runs from 0->n-2, the last element need not be swapped with itself
    for(int i=0; i<=n-2; i++) {
        min_index = i; // let
        // checking from i till last element
        for(int j = i; j<n; j++) {
            if(vec[j] < vec[min_index]) min_index = j;
        }
        // swapping
        int temp = vec[min_index];
        vec[min_index] = vec[i]; // moving the element
        vec[i] = temp;
    }
}

int main() {
    int n;
    cout << "Number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    selection_sort(vec, n);
    cout << "\nThe sorted array is: ";
    for(auto x : vec) {
        cout << x << " ";
    }

    return 0;
}
