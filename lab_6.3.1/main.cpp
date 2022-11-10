#include <iostream>
#include <iomanip>
#include <time.h>


using namespace std;

void createArr(int* arr, const int size, const int Low, const int High)
{
 for (int i=0; i<size; i++)
 arr[i] = Low + rand() % (High-Low+1);
}

void Print(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i]<< " ";
    cout << endl;
}


void sortedArray(int *arr, const int size)
{

    int i, j;

    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; ++j)
        {
            if(arr[i] >= arr[j])
            {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
             }
        }
    }

}


int main ()
{

    srand((unsigned)time(NULL));
    const int n=7;
    int arr[n];
    int Low = 4;
    int High = 16;
    createArr(arr, n, Low, High);
    Print(arr, n);
    sortedArray(arr, n);
    Print(arr, n);

    return 0;
}



