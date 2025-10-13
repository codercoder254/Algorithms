//@a.d.a.n_noa😇
#include <stdio.h>
#include <stdlib.h>

//function to ask input from user
int* input()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if(!arr)
    {
        perror("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    return arr;
}

//function to go through the array and find the target value
int search(int arr[], int target)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int* arr = input();
    int target;
    printf("Enter target element: ");
    scanf("%d", &target);
    int result = search(arr, target);
    if (result != -1)
    {
        printf("Element found: %d\n", result);
    }
    else
    {
        printf("Element not found.\n");
    }
    
    return 0;

}