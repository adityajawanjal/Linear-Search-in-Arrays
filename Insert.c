#include <stdio.h>

void insert(int arr[], int sizeOfArr, int capasity, int element, int index)
{
    for (int i = sizeOfArr - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
int main()
{
    int arr[5] = {51, 61, 71, 81};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int capasity = 5;
    int element = 100;
    int index = 1;
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insert(arr, sizeOfArray, capasity, element, index);
    capasity++;
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%d %d", sizeOfArray, capasity);
    return 0;
}