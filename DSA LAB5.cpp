#include <stdio.h>

// Function to print the array

void print(int array[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Insertion sort function

void insertion(int array[], int size) 
{
    for (int step = 1; step < size; step++) 
	{
        int key = array[step];
        int j = step - 1;
        while (j >= 0 && array[j] > key)
	   {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main() 
{
    int data[100], n;

    // Taking the number of elements as input
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Taking array elements as input
    
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &data[i]);
    }

    // Sorting the array
    
    insertion(data, n);

    // Printing the sorted array
    
    printf("Sorted array in ascending order:\n");
    print(data, n);

    return 0;
}
