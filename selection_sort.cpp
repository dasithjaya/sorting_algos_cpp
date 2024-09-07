#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++){
        int min_index = i;

        for (int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }
}

int main() {
    vector<int> arr = {15, 20, 87, 11, 3};

    selection_sort(arr);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    
    return 0;
}