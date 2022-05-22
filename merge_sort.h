#ifndef merge_sort_h
#define merge_sort_h

#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> Left, vector<int> Right) {
    vector<int> sorted;
    int li = 0, ri = 0;
    
    // Add the values from the Left and Right in non-decreasing order
    while (li < Left.size() && ri < Right.size()) {
        if (Left[li] <= Right[ri]) {
            sorted.push_back(Left[li]);
            li += 1;
        } else {
            sorted.push_back(Right[ri]);
            ri += 1;
        }
    }
    
    // Add the remaining values to the vector
    for (int i = li; i < Left.size(); ++i) {
        sorted.push_back(Left[i]);
    }
    for (int i = ri; i < Right.size(); ++i) {
        sorted.push_back(Right[i]);
    }
    return sorted;
}

vector<int> merge_sort(vector<int> unsorted) {
    int n = unsorted.size();
    int half = n/2;
    // Base case
    if (n <= 1) {
        return unsorted;
    }

    vector<int> Left;
    vector<int> Right;

    // Divide the vector's values into Left and Right
    for (int i = 0; i < n; ++i) {
        if (i < half) {
            Left.push_back(unsorted[i]);
        } else {
            Right.push_back(unsorted[i]);
        }
    }

    // Recursively divide merge_sort
    vector<int> Left_Sorted = merge_sort(Left);
    vector<int> Right_Sorted = merge_sort(Right);

    // Merge the vectors
    return merge(merge_sort(Left_Sorted), merge_sort(Right_Sorted));
}

#endif /* merge_sort_h */