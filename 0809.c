#include <stdio.h>

int binarySearch(int arr[], int sizeOfArr, int element)
{
    int low = 0, mid, high = sizeOfArr - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
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
    int arr[7] = {12, 15, 65, 67, 105, 115, 122};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int element = 67;
    int position = binarySearch(arr, sizeOfArr, element);
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
