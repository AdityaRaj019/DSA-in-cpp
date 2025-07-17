
#include <iostream>

using namespace std;

/*int main()
{
    int n, i = 1;
    int count = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << count << " ";
            count++ ;
            j++;
        }
       
        cout << endl;
        i++;
    }
   
    return 0;
}


int main()
{
    int n, i = 1;
    cin >> n;
    int count = n * n   ;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << count << " ";
            count-- ;
            j++;
        }
       
        cout << endl;
        i++;
    }
    return 0;
}*/

int main()
{
    int n, i = 1;
    cin >> n;
    
    while (i <= n )
   {
        int j = 1;

        while (j <= i)
        {
            cout<<"*"<< " " ;
            j++;
        }
       
        cout << endl;
        i++;
    }
    return 0;

}
