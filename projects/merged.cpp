#include <iostream>
using namespace std;
void mergeSortedArrays(const int arr1[], int size1, const int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int arr1[size1], arr2[size2];

    cout << "Enter " << size1 << " elements for the first array (ascending order): ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter " << size2 << " elements for the second array (ascending order): ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int result[size1 + size2];

    mergeSortedArrays(arr1, size1, arr2, size2, result);

    cout << "Merged Sorted Array: {";
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    cout <<"}"<< endl;

    return 0;
}
