#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size;
    int a[100];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << unique(a, size);
    
    return 0;
}
