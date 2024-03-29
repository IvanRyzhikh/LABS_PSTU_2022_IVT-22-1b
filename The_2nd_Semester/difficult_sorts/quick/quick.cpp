#include <iostream>
#include <ctime>


using namespace std;

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
    int x = arr[high];
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < x) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main()
{
    srand(time(0));
    int size;
    cout << "enter unsorted array: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
