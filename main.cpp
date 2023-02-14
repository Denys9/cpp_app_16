#include <iostream>
#include <ctime>
using namespace std;

int** addColumn(int**& a, int m, int n, int value)
{
    int** tmp = new int* [n + value];
    for (int i = m - 1; i >= 0; i--)
    {
        tmp[i + value] = a[i];
    }
    for (int i = 0; i < value; i++)
    {
        tmp[i] = new int[m];
    }
    return tmp;
}


int main()
{
    srand(time(0));
    int randd;
    int i, j;
    int colon, line;
    cout << "colon < line - ";
    cin >> colon;
    cout << "\nline - ";
    cin >> line;
    int** array = new int* [line];
    for (i = 0; i < line; i++)
    {
        array[i] = new int[colon];
    }
    for (i = 0; i < colon; i++)
    {
        for (j = 0; j < line; j++)
        {
            array[i][j] = randd;
            for (size_t j = 0; j < randd; j++)
            {
                array[i][j] = rand() % 10;
            }
            cout << array[i][j] << '\t';
        }
        cout << '\n';
    }
    int add;
    cout << "add - ";
    cin >> add;
    array = addColumn(array, colon, line, add);
    colon += add;
    for (i = 0; i < colon; i++)
    {
        for (j = 0; j < line; j++)
        {
            array[i][j] = randd;
            for (size_t j = 0; j < randd; j++)
            {
                array[i][j] = rand() % 10;
            }
            cout << array[i][j] << '\t';
        }
        cout << '\n';
    }
    cout << '\n';

    for (i = 0; i < colon; i++)
        delete[]array[i];
    delete[]array;
}