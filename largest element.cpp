#include <stdio.h>
 
int main()
{
    int s, i, largest;
 
    printf("\n Enter the size of the array: ");
    scanf("%d", &s);
    int array[s];
    printf("\n Enter %d elements of the array: \n", s);
    for (i = 0; i < s; i++)
    {   
        scanf(" %d", &array[i]);
    }
    largest = array[0];
    for (i = 1; i < s; i++) 
    {
        if (largest < array[i])
        largest = array[i];
    }
    printf("\n largest element present in the given array is : %d", largest);
    return 0;
 }
