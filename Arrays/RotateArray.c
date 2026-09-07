#include <stdio.h>

int main()
{
    int n, k;

    // Read size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Read array elements
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Read rotation count
    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    int temp[n];

    // Place elements in rotated positions
    for(int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    // Copy back to original array
    for(int i = 0; i < n; i++)
    {
        nums[i] = temp[i];
    }

    printf("Rotated Array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}
