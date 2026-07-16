#include <bits/stdc++.h>
using namespace std;

// TIME: O(1)-best, avg. case, O(n)-worst case
// SPACE: O(1)-best, avg. case, O(n)-worst case

int main () {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    // Pre-compute
    unordered_map<int , int> hash_map;
    for(int i=0; i<n; i++) {
        hash_map[vec[i]]++;
    }

    // Using maximum values so that frequency values always satisfy condition
    int min_freq = INT_MAX, max_freq = INT_MIN;
    // in case there are multiple elements with same frequency
    vector<int> max_elements, min_elements;

    // iterate through the hash_map, to find max and min frequency
    for(auto& [element, frequency] : hash_map) {
        if(frequency < min_freq) min_freq = frequency;
        if(frequency > max_freq) max_freq = frequency;
    }

    // store elements having those min and max frequencies
    for(auto& [element, frequency] : hash_map) {
        if(frequency == min_freq) min_elements.push_back(element);
        if(frequency == max_freq) max_elements.push_back(element);

    }

    // give output
    cout << "The maximum occurring element/s are: ";
    for(auto x : max_elements) cout << x << " ";
    cout << "\nThe minimum occurring elements are: ";
    for(auto x : min_elements) cout << x << " ";

    return 0;
}
