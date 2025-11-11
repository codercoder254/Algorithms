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

int* insertionsort(int* arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return arr;

} 



int main()
{
    int n = input1();
    int* arr = input2(n);
    arr = insertionsort(arr, n);
    printf("Sorted elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}