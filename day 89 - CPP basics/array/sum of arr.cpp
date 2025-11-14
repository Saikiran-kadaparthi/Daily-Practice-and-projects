//sum of array

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Size of ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter array elements : ";
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
	}
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
	}
	
    cout << "\nsum of array : " << sum;
}

