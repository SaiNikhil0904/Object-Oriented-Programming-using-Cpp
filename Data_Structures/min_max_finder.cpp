#include <iostream>
using namespace std;

void userInput(int arr[], int arr_size) {
    cout << "Enter the Elements in the Array: ";
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
}

struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low, int high) {
    struct Pair minmax, left, right;
    int mid;

    if (low == high) {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } else {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    mid = (low + high) / 2;
    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    minmax.min = (left.min < right.min) ? left.min : right.min;
    minmax.max = (left.max > right.max) ? left.max : right.max;

    return minmax;
}

int main() {
    int arr_size;
    cout << "Enter the Size of the array: ";
    cin >> arr_size;

    int arr[arr_size];
    userInput(arr, arr_size);

    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);
    cout << "Minimum element in the array is: " << minmax.min << endl;
    cout << "Maximum element in the array is: " << minmax.max << endl;

    return 0;
}