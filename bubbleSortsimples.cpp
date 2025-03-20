#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

void optimizedBubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Vetor original: ";
    printVector(data);
    
    optimizedBubbleSort(data);
    cout << "Vetor ordenado: ";
    printVector(data);
    
    return 0;
}