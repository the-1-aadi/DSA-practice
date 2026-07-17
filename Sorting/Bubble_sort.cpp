#include <bits/stdc++.h>
using namespace std;

// TIME: O(n^2)-> avg., worst case, O(n)-> best case
// SPACE: O(1)

void bubble_sort(vector<int> &vec, int n) {
    for(int i=n-1; i>=1; i--) {
        bool swap = false;
        for(int j=0; j<=i-1; j++) {
            if(vec[j] > vec[j+1]) {
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
                swap = true;
            }
        }
        if(!swap) break;
    }
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    bubble_sort(vec, n);
    cout << "\nThe sorted array is: ";
    for(auto x : vec) cout << x << " ";

    return 0;
}
