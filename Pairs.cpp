// In this code we will understabd a rough topic about pairs in c++.

#include <bits\stdc++.h>
using namespace std;

int main()
{
    // syntax => pair <data type, data type> variable name ={first data , second data};
    pair<int, int> p = {1, 3};
    cout << p.first << " ";   // This prints 1.
    cout << p.second << endl; // This prints 3.
    // we can use pairs in nestesd form
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " ";          // this prints 1.
    cout << p1.second.first << " ";   // this prints 2.
    cout << p1.second.second << endl; // This prints 3.

    // we can declare pairs array.

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cout << "{"<< arr[i].first << ", " << arr[i].second << "}"<< " ";
    }

    return 0;
}
