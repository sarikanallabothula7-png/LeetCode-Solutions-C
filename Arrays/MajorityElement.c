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

    // Boyer-Moore Voting Algorithm
    int candidate = nums[0];
    int count = 1;

    for(int i = 1; i < n; i++)
    {
        if(count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if(nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    printf("Majority Element = %d\n", candidate);

    return 0;
}
