// TO Sort and Array which could only contain the {0,1,2} and we have to sort the array without using any sorting algo.

//Input :
//N=5
//arr[]={0 2 1 2 0}

//output:
// 0 0 1 2 2

#include <iostream>
using namespace std;

void sort12(int A[], int n)
{
    int i = 0, zero = 0, one = 0, two = 0;
    for (i; i < n; i++)
    {
        if (A[i] == 0)
        {
            zero++;
        }
        else if (A[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    i = 0;
    while (zero != 0)
    {
        A[i] = 0;
        zero--;
        i++;
    }
    while (one != 0)
    {
        A[i] = 1;
        one--;
        i++;
    }
    while (two != 0)
    {
        A[i] = 2;
        two--;
        i++;
    }
}

int main()
{
    int A[5] = {2, 2, 1, 0, 2};
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
    sort12(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}