#include <iostream>

using namespace std;

int ls(int arr[], int n, int key)
{
    

    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
      
      
    }
    return -1;
}

int main()
{
    int arr[20], i = 0, n;

    cin >> n;

    for(i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
   int index = ls(arr, n, key);
    if (index == -1)
    {
        cout << "not found " << endl;
    }
    else
    {
        cout << index;
    }

    return 0;
}