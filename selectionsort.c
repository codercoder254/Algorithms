//@a.d.a.n_noa😇
#include <stdio.h>
#include <stdlib.h>

int input1()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    return n;
}

int* input2(int n)
{
   int *arr = malloc(n * sizeof(int));
   if(!arr)
   {
         perror("Memory allocation failed\n");
         exit(1);
   }
   printf("Enter elements:\n");
   for(int i = 0; i < n; i++)
   {
         scanf("%d", &arr[i]);
   }

   return arr;
    
}


int* selection_sort(int*arr, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    return arr;
}


int main()
{
    int n = input1();
    int* arr = input2(n);
    arr = selection_sort(arr, n);
    printf("Sorted elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}