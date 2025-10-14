//a.d.a.n_noa😇
#include <stdio.h>
#include <stdlib.h>

//function to get number of elements from user
int input1()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    return n;
}

//function to get input from user
int* input2(int n)
{
    int* arr = malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

//bubble sort function
void bubblesort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n = input1();
    int *arr = input2(n);
    bubblesort(arr, n);
    free(arr);
    return 0;
}

