#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr){
    for (int i = 1; i < arr.size(); i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        cout << endl;

        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {6, 94, 51, 22, 100};

    insertion_sort(arr);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}