#include <bits/stdc++.h>
using namespace std;

// TC: O(n*log2 (n))
// SC: O(1)

int partition(vector<int> &vec, int low, int high) {
    int pivot = vec[low];
    int i = low;
    int j = high;
    while(i<j) {
        while(vec[i] <= pivot && i<high) {
            i++;
        }
        while(vec[j] > pivot && j>low) {
            j--;
        }
        if(i<j) swap(vec[i], vec[j]);
    }
    swap(vec[low], vec[j]);
    return j;
}

void quick_sort(vector<int> &vec, int low, int high) {
    // not sorting for just 1 element
    if(low<high) {
        int piv_index = partition(vec, low, high);
        quick_sort(vec, low, piv_index-1);
        quick_sort(vec, piv_index+1, high);
    }
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    quick_sort(vec, 0, n-1);

    cout << "sorted array is: ";
    for(auto x: vec) cout << x << " ";

    return 0;
}
