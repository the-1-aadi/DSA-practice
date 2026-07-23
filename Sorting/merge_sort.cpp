#include <bits/stdc++.h>
using namespace std;

// TC: worst case-> O(n*log2 (n))
// SC: worst case-> O(n)

// for merging 2 divided arrays in sorted order
void merge(vector<int> &vec, int low, int mid, int high) {
    // temporary array to store elements
    vector<int> temp;
    // create 2 pointers starting from low and mid
    int left = low, right = mid+1;
    while(left <= mid && right <= high) {
        if(vec[left] <= vec[right]) {
            temp.push_back(vec[left]);
            left++;
        }
        else {
            temp.push_back(vec[right]);
            right++;
        }
    }
    // entering any elements that are left for both pointers
    // using 2 separate loops
    while(left<=mid) {
        temp.push_back(vec[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(vec[right]);
        right++;
    }
    // moving elements from temporary to main vector
    for(int i=low; i<=high; i++) {
        vec[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &vec, int low,int high) {
    if(low >= high) return;
    int mid = (low+high)/2;
    merge_sort(vec, low, mid);
    merge_sort(vec, mid+1, high);

    merge(vec, low, mid, high);
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
    merge_sort(vec, 0, n-1);
    cout << "The sorted array is: ";
    for(auto x : vec) cout << x << " ";

    return 0;
}
