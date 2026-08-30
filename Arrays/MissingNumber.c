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

    // Sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    // Sum of array elements
    int actualSum = 0;

    for(int i = 0; i < n; i++)
    {
        actualSum += nums[i];
    }

    // Missing number
    int missingNumber = expectedSum - actualSum;

    printf("Missing Number = %d\n", missingNumber);

    return 0;
}
