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

    int result[n];

    // Store left products
    result[0] = 1;
    for(int i = 1; i < n; i++)
    {
        result[i] = result[i - 1] * nums[i - 1];
    }

    // Multiply with right products
    int rightProduct = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    printf("Output Array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
