#include<iostream>
using namespace std;

int getSum(int a[], int n)
{
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];    
    }
    return sum;
    
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum is " <<getSum(arr, size);

    

    return 0;
}