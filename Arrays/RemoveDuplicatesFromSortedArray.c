#include <stdio.h>

int main()
{
    int n;

    // Read size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Read sorted array elements
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // If array is empty
    if(n == 0)
    {
        printf("Length after removing duplicates: 0\n");
        return 0;
    }

    int j = 0;

    // Two-pointer approach
    for(int i = 1; i < n; i++)
    {
        if(nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    printf("Length after removing duplicates: %d\n", j + 1);

    printf("Array after removing duplicates: ");
    for(int i = 0; i <= j; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}
