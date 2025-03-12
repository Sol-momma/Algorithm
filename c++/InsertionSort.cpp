// 問題1: Insertion Sort を使って、整数配列 [12, 11, 13, 5, 6] をソートしてください。


#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Before sorting: ";
    for (int num : arr)
        cout << num << " ";
    cout << "\n";
    
    insertionSort(arr);
    
    cout << "After sorting: ";
    for (int num : arr)
        cout << num << " ";
    cout << "\n";
    return 0;
}
