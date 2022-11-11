#include <stdio.h>
#include <stdint.h>

int countPartition(int* arr, int n, int k)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int left_max = arr[0];
        int right_min = arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > left_max)
                left_max = arr[j];
        }
        for (int j = i; j < n; j++)
        {
            if (arr[j] < right_min)
                right_min = arr[j];
        }
        if (left_max + right_min >= k) count++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 5;
    printf("%d\n", countPartition(arr, sizeof(arr)/sizeof(int), k));
    return 0;
}