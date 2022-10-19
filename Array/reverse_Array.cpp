#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    int temp;
    while(start<=end){
        temp = arr[start];

        arr[start] = arr[end];
        arr[end] = temp;
        // OR -
        // swap(arr[start], arr[end]);
         start++;
        end--;
    }
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i]<< " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {2, 12, 5, 3, 8, 0};
    int brr[5] = {27, 21, 51, 1, 5};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}