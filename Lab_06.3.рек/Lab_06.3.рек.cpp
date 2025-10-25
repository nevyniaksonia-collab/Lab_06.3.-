#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX, int i)
{
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        create(arr, SIZE, MIN, MAX, i + 1);
    }
}

void print(int* arr, int SIZE, int i)
{
    if (i < SIZE)
    {
        cout << arr[i] << " ";
        print(arr, SIZE, i + 1);
    }
    else
        cout << endl;
}

bool isNonDec(int* arr, int SIZE, int i)
{
    if (i >= SIZE - 1) return true;
    if (arr[i] > arr[i + 1]) return false;
    return isNonDec(arr, SIZE, i + 1);
}

template <typename T>
void SecondCreate(T* arr, T SIZE, T MIN, T MAX, T i)
{
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        SecondCreate(arr, SIZE, MIN, MAX, i + 1);
    }
}

template <typename T>
void SecondPrint(T* arr, T SIZE, T i)
{
    if (i < SIZE)
    {
        cout << arr[i] << " ";
        SecondPrint(arr, SIZE, i + 1);
    }
    else
        cout << endl;
}

template <typename T>
bool SecondIsNonDec(T* arr, T SIZE, T i)
{
    if (i >= SIZE - 1) return true;
    if (arr[i] > arr[i + 1]) return false;
    return SecondIsNonDec(arr, SIZE, i + 1);
}

int main()
{
    srand(static_cast<unsigned>(time(NULL)));

    int MIN, MAX, SIZE;
    cout << "Enter array size (SIZE): "; cin >> SIZE;
    cout << "Enter minimum element value (MIN): "; cin >> MIN;
    cout << "Enter maximum element value (MAX): "; cin >> MAX;
    cout << endl;

    int* arr = new int[SIZE];

    create(arr, SIZE, MIN, MAX, 0);
    if (isNonDec(arr, SIZE, 0))
        cout << "Array is non-decreasing" << endl;
    else
        cout << "Array is not non-decreasing" << endl;
    print(arr, SIZE, 0);

    cout << endl;

    SecondCreate(arr, SIZE, MIN, MAX, 0);
    if (SecondIsNonDec(arr, SIZE, 0))
        cout << "Array is non-decreasing" << endl;
    else
        cout << "Array is not non-decreasing" << endl;
    SecondPrint(arr, SIZE, 0);

    delete[] arr;
    return 0;
}

