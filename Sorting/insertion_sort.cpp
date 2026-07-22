#include <bits/stdc++.h>
using namespace std;

// TIME: O(n^2)-> worst, avg. case, O(n)-> best case
// SPACE: O(1)

void insertion_sort(vector<int> &vec, int n) {
    for(int i=1; i<n; i++) {
        int j=i;
        while(j>0 && vec[j-1]>vec[j]) {
            int temp = vec[j-1];
            vec[j-1] = vec[j];
            vec[j] = temp;
            j--;
        }
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
    insertion_sort(vec, n);
    cout << "\nThe sorted array is: ";
    for(auto x : vec) cout << x << " ";

    return 0;
}
