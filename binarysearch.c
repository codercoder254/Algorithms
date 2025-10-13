//@a.d.a.n_noa😇
#include <stdio.h>
#include <stdlib.h>

//function to ask input1 from user
int input1()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    return n;
}
//function to ask input2 from user
int* input2(int n)
{
    int* arr = malloc(n * sizeof(int));
    if(!arr)
    {
        perror("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}

//function to sort the array
int* bubblesort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}


//function to perform binary search
int search(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return arr[mid];
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;

} 

int main()
{
    printf("Binary Search Algorithm\n");
    int n = input1();
    int *arr = input2(n);
    int *bubblearr = bubblesort(arr, n);
    printf("Enter target element: ");
    int target;
    scanf("%d", &target);

    int result = search(bubblearr, target, n);
    if (result != -1)
    {
        printf("Element found: %d\n", result);
    }
    else 
    {
        printf("Element not found.\n");
    }

    free(arr);
    return 0;
}