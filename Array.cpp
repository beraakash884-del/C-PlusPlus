#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100], size;
    cout << "Enter array size :\n";
    cin >> size;
    cout << "Enter array elememts:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "your array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}