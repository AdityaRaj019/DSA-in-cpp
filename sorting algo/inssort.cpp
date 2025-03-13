#include <iostream>
#include <vector>
using namespace std;
void inssort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[30];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    inssort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
