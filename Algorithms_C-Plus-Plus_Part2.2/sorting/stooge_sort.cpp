#include <iostream>

using namespace std;

// A function implementing stooge sort.
void StoogeSort(int a[], int start, int end)
{
    int temp;
    // Futher breaking the array if the Subpart's length is more than 2.
    if(end-start+1 > 2)
    {
        temp = (end-start+1)/3;
        StoogeSort(a, start, end-temp);
		StoogeSort(a, start+temp, end);
		StoogeSort(a, start, end-temp);
    }

    // swapping the element at start and end
    if (a[end] < a[start])
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
    }
}

int main()
{
    int n, i;
    cout << "\n Enter the number of data element to be sorted: ";
    cin >> n;

    int arr[n];
    for(i = 0; i< n; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    StoogeSort(arr, 0, n-1);

    // Printing the sorted data.
    cout << "\nSorted data";
    for (i = 0; i < n; i++)
        cout << "->" << arr[i];
    
    return 0;
}