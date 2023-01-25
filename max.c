// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    // use bubble sort to sort the array
    for (int i = 0; i < n  ; i++)  // outter loop to repeat the process n-1 times
    {
        for (int j = 0; j < n - 1 ; j++)  //inner loop to check out-of-order elements up to index n-2
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];  //swap
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array[n - 1];
}
