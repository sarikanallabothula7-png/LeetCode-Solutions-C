#include <stdio.h>

int main()
{
    int n;

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

    int totalSum = 0;

    // Calculate total sum
    for(int i = 0; i < n; i++)
    {
        totalSum += nums[i];
    }

    int leftSum = 0;

    // Find pivot index
    for(int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            printf("Pivot Index = %d\n", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("Pivot Index = -1\n");

    return 0;
}
