#include <iostream>
#include <vector>
#include "merge_sort.h"

int main() {

    cout << "Hello! Welcome to Merge Sorter!\n\n";

    int size;
    cout << "Please enter the size for the vector: ", cin >> size;

    vector<int> my_vector(size);
    for (int i = 0; i < size; ++i) {
        cout << "Enter an integer number for index " << i << ": ", cin >> my_vector[i];
    }
    cout << "\n";

    cout << "The unsorted vector contains: ";
    for (int i = 0; i < my_vector.size(); ++i) {
        cout << my_vector[i] << " ";
    }
    cout << "\n\n";

    vector<int> sorted_vector = merge_sort(my_vector);

    cout << "The sorted vector contains: ";
    for (int i = 0; i < sorted_vector.size(); ++i) {
        cout << sorted_vector[i] << " ";
    }
    cout << "\n\n";

    return 0;
}