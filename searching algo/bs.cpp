#include <iostream>

using namespace std;

int bs(int arr[], int n, int key)
{

    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2;

    while (high > low)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}

int main()
{

    int arr[20] ; int n ; int i ;

    cout << "Enter no of elements" << endl;
    cin >> n;

    cout << "Enter array element " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to found" << endl;
    cin >> key;
    int index = bs(arr, n, key);

    if (index == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "element found at  " << index << endl;
    }

    return 0;
}