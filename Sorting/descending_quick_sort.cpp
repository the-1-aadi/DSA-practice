// sorting in descending order

#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &vec, int low, int high) {
    int pivot_pointer = high; // let
    int i =low, j = high; // declaring left and right pointer

    while(i<j) {
        // i continues till an element <= pivot is reached
        while(vec[i]>vec[pivot_pointer] && i<high) {
            i++;
        }
        // j continues till an element > pivot is reached
        while(vec[j]<=vec[pivot_pointer] && j>low) {
            j--;
        }
        // both pointers are then swapped if they have not crossed each other
        if(i<j) swap(vec[i], vec[j]);
    }
    // the pivot element is moved to where i is
    swap(vec[pivot_pointer], vec[i]);
    // the pivot index is then returned to dquick_sort
    return i;
}

void dquick_sort(vector<int> &vec, int low, int high) {
    // avoids sorting arrays containing 1 element
    if(low<high) {
        int pivot_index = func(vec, low, high);
        dquick_sort(vec, low, pivot_index-1);
        dquick_sort(vec, pivot_index+1, high);
    }
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) cin >> vec[i];

    dquick_sort(vec, 0, n-1);

    cout << "The sorted array is: ";
    for(auto x : vec) cout << x << " ";

    return 0;
}
