#include <iostream>
using namespace std;

class Array // Class is used coz we in function we can only return one thing either we use the Struture.
{
private:
    int n;
    int *arr;
    int max, min;

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
    void Finder();
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

void Array::Finder()
{
    min = max = arr[0]; // In case there are 1 Element.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << endl
         << "The Maximum element is " << max << " and minimum element is " << min;
}

int main()
{
    Array arr(10);
    arr.read();
    arr.Display();
    arr.Finder();

    return 0;
}