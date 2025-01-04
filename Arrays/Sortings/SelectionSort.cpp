#include <iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,1,3};
    int n =5;
  
    for (int i = 0; i < n; i++)

    for (int i = 0; i < n - 1; i++)  {
        int index = i;
        for (int j = i + 1; j < n; j++)  {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // print array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}