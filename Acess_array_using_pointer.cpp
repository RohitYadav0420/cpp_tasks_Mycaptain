#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter no.of elements in array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *ptr;
    ptr = arr;

    cout << "elements of array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}