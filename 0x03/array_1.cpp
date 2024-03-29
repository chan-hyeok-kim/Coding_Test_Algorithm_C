#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int &len)
{
    for (int i = len; i > idx; i--)
        arr[i] = arr[i - 1];
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int &len)
{
    len--;
    for (int i = idx; i < len; i++)
        arr[i] = arr[i + 1];
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