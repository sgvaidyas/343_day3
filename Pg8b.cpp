#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    cout << "Frequency of elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            cout << arr[i] << " occurs " << freq[i] << " times" << endl;
        }
    }
    cout << "Frequency of elements in the array where num frequency equals num: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
        	if(arr[i]==freq[i]){
            cout << arr[i] << " == " << freq[i] << endl;
        }
    }
    }
    return 0;
}
