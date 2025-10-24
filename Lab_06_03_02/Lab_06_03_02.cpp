#include <iostream>
#include <string>
using namespace std;

template <typename T>
void SwapEvenOdd(T* a, const int size, int i = 0)
{
    if (i < size - 1)
    {
        T temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
        SwapEvenOdd(a, size, i + 2);
    }
}

template <typename T>
void PrintArray(T* a, const int size, int i = 0)
{
    if (i < size)
    {
        cout << a[i] << " ";
        PrintArray(a, size, i + 1);
    }
    else
    {
        cout << endl;
    }
}

int main()
{
    const int n = 10;

    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double b[n] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    string c[n] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

    cout << "Before swap (int): ";
    PrintArray(a, n);
    SwapEvenOdd(a, n);
    cout << "After swap (int): ";
    PrintArray(a, n);
    cout << endl;

    cout << "Before swap (double): ";
    PrintArray(b, n);
    SwapEvenOdd(b, n);
    cout << "After swap (double): ";
    PrintArray(b, n);
    cout << endl;

    cout << "Before swap (string): ";
    PrintArray(c, n);
    SwapEvenOdd(c, n);
    cout << "After swap (string): ";
    PrintArray(c, n);

    return 0;
}