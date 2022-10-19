#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    // We usually assign a high value to MIN to compute minimum value in an array. But if an array has large elements, we must assign the highest possible value to the array. 
    // In simple words, if there are 10 elements and 50 is largest and 2 is minimum then, if we take int min = INT_MIN which will be 2 (not considering actual range of int) then, how will be the comparision possible. num < min(which  is 2) and here num will be also 2 from array as it is actuall smallest from array.

    int max = INT_MIN; // INT_MIN stores minimum value of of integer range, i.e. -2^31
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max) // we take max = minixmum number because to make comaparision. Ex - array containing 2, 3, 5. Then comparing here num with with min will only give maximum number as if 2 > 2 = no , 3 > 2 = yes, but runs for entire for loop so, 5>2 = yes so comes 5. So we are taking max = INT_MIN.
        {
            max = num[i];
        }
    }
    return max;
    
}
int getMin(int num[], int n)
{

    
    int min = INT_MAX; // INT_MIN stores maximum value of of integer range, i.e. +2^31
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{

    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum number: "<<getMax(num, size)<<endl;
    cout << "Minimum number: "<<getMin(num, size)<<endl;
    return 0;
}