#include <iostream>
#include <algorithm> 
using namespace std;

//1
/*int findMax(int arr[], int size)
{
    if (size == 1) 
    {
        return arr[0]; 
    }
    return max(arr[size - 1], findMax(arr, size - 1)); 
}

int main() 
{
    int arr[] = {34, 7, 23, 32, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max: " << findMax(arr, size) << endl;
}*/


//2
/*int findMin(int arr[], int size)
{
    if (size == 1) 
    {
        return arr[0]; 
    }
    return min(arr[size - 1], findMin(arr, size - 1)); 
}

int main() 
{
    int arr[] = {34, 7, 23, 32, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Min: " << findMin(arr, size) << endl;
}*/


//3
/*void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; 
    int i = low - 1;       

    for (int j = low; j < high; j++) 
    {
        if (arr[j] <= pivot) 
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]); 
    return i + 1;
}

void quickSortLomuto(int arr[], int low, int high) 
{
    if (low < high) 
    {
        int pivotIndex = partition(arr, low, high);

        cout << "Element: " << arr[pivotIndex] << endl;
        cout << "Masiv after division: ";
        printArray(arr, high + 1);
        cout << "Index: " << pivotIndex << endl;

        cout << "Left: ";
        for (int i = low; i < pivotIndex; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Right: ";
        for (int i = pivotIndex + 1; i <= high; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        quickSortLomuto(arr, low, pivotIndex - 1);
        quickSortLomuto(arr, pivotIndex + 1, high);
    }
}

int main() 
{
    int arr1[] = {34, 7, 23, 32, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int arr3[] = {90, 80, 70, 60, 50, 40, 30};
    int arr4[] = {5, 3, 8, 8, 1, 5, 3, 9};

    int* arrays[] = {arr1, arr2, arr3, arr4};
    int sizes[] = {5, 6, 7, 8};

    for (int i = 0; i < 4; i++) 
    {
        cout << "Start masiv: ";
        printArray(arrays[i], sizes[i]);
        quickSortLomuto(arrays[i], 0, sizes[i] - 1);
        cout << "Sort masiv: ";
        printArray(arrays[i], sizes[i]);
        cout << "------------------------" << endl;
    }
}*/