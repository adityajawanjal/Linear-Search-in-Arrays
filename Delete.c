#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int delete (int arr[], int size, int index)
{
    if (index >= size)
    {
        return -1;
    }
    for (int i = index; i <= size - 2; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int index = 2;

    display(arr, size);
    delete (arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}