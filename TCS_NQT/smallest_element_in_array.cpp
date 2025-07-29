#include <iostream>
using namespace std;
#include <algorithm>
//To solve this problem, we will use the C++ STL sort function to sort the array in ascending order and then print the first element as the smallest element.
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter values :";
        cin >> arr[i]; // Input elements into the array
    }
    
    sort(arr, arr + n); // Sort the array

    cout << "Sorted array (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    cout << "\nSmallest element in the array: ";
    
    cout << arr[0] << " ";
    return 0;
}