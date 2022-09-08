#include <stdio.h>

int linearSearch(int arr[], int sizeOfArr, int element)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {12, 15, 65, 67, 105, 115, 20};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int element = 65;
    int position = linearSearch(arr, sizeOfArr, element);
    if (position == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("element found at position : %d", position + 1);
    }
    return 0;
}