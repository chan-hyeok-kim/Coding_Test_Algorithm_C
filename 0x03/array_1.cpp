#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int &len)
{
    int arr2[len];
    for (int i = 0; i < idx; i++)
    {
        arr2[i] = arr[i];
    }

    arr2[idx] = num;

    for (int i = idx + 1; i < len; i++)
    {
        arr2[i] = arr[i];
    }
}

void erase(int idx, int arr[], int &len)
{
}

void printArr(int arr[], int &len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << "\n\n";
}

void insert_test()
{
    cout << "======insert 출력======";
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;

    insert(3, 80, &len, arr[10]);

    printArr(arr, len);
}

void erase_test()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    insert_test();
    erase_test();
}