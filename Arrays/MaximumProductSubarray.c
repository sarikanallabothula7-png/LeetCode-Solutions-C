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

    // Initialize max, min, and result
    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = nums[0];

    for(int i = 1; i < n; i++)
    {
        // If current number is negative,
        // swap maxProduct and minProduct
        if(nums[i] < 0)
        {
            int temp = maxProduct;
            maxProduct = minProduct;
            minProduct = temp;
        }

        // Update maximum product ending at current index
        if(nums[i] > maxProduct * nums[i])
            maxProduct = nums[i];
        else
            maxProduct = maxProduct * nums[i];

        // Update minimum product ending at current index
        if(nums[i] < minProduct * nums[i])
            minProduct = nums[i];
        else
            minProduct = minProduct * nums[i];

        // Update overall result
        if(maxProduct > result)
            result = maxProduct;
    }

    printf("Maximum Product Subarray = %d\n", result);

    return 0;
}
