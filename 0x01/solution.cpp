#include <bits/stdc++.h>
using namespace std;

int func1(int n)
{
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            answer += i;
        }
    }
    return answer;
}

int func2(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] == 100)
            {
                return 1;
            }
        }
    }
    return 0;
}

int func2_1(int arr[], int N)
{
    // 100이하의 숫자 정렬해서
    // 아모르겠다.
    return 0;
}

int func3(int N)
{
    for (int i = 1; i * i <= N; i++)
    {
        if (i * i == N)
        {
            return 1;
        }
    }
    return 0;
}

int func4(int N)
{
    int answer = 0;

    for (int i = 1; pow(2, i) <= N; i++)
    {
        answer = pow(2, i);
    }

    return answer;
}

int func4_1(int N)
{
    int answer = 1;

    while (answer * 2 <= N)
    {
        answer *= 2;
    }
    return answer;
}

void test1()
{
    cout << "****** func1 test ******\n";
    int n[3] = {16, 34567, 27639};
    int ans[3] = {60, 278812814, 178254968};
    for (int i = 0; i < 3; i++)
    {
        int result = func1(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result)
            cout << " ... Correct!\n";
        else
            cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test2()
{
    cout << "****** func2 test ******\n";
    int arr[3][4] = {{1, 52, 48}, {50, 42}, {4, 13, 63, 87}};
    int n[3] = {3, 2, 4};
    int ans[3] = {1, 0, 1};
    for (int i = 0; i < 3; i++)
    {
        int result = func2(arr[i], n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result)
            cout << " ... Correct!\n";
        else
            cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test3()
{
    cout << "****** func3 test ******\n";
    int n[3] = {9, 693953651, 756580036};
    int ans[3] = {1, 0, 1};
    for (int i = 0; i < 3; i++)
    {
        int result = func3(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result)
            cout << " ... Correct!\n";
        else
            cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test4()
{
    cout << "****** func4 test ******\n";
    int n[3] = {5, 97615282, 1024};
    int ans[3] = {4, 67108864, 1024};
    for (int i = 0; i < 3; i++)
    {
        int result = func4_1(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result)
            cout << " ... Correct!\n";
        else
            cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

int main(void)
{
    test1();
    test2();
    test3();
    test4();
}