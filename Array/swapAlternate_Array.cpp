#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            // swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    swapAlternate(arr, size);
    cout << "After swapping alternate elements of the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}