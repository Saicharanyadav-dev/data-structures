#include <stdio.h>
int main()
{
    int n;
scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    int arr1[n], arr2[n], arr3[n];
    int i;
    int j = 0;
    int k = 0;
    printf("\n\nSeparate odd and even integers in separate arrays:\n");
    printf("Input the number of elements to be stored in the array :");
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    printf("\nThe Even elements are : \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");
	return 0;
}
