#include <iostream>
using namespace std;

class Array
{
private:
    int n;
    int *arr;

public:
    Array()
    {
        n = 5;
        arr = new int[n];
    }
    Array(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    ~Array()
    {
        delete[] arr;
    }
    void read();
    void Display();
    void reverse();
};

void Array::read()
{
    printf("Enter the Elements\n");
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void Array::Display()
{
    printf("\nThe Array is \n");
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void Array::reverse()
{
    int i, j;
    int temp;
    i = 0;
    j = n - 1;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    Array arr(10);
    arr.read();
    arr.Display();
    arr.reverse();
    arr.Display();
    return 0;
}
