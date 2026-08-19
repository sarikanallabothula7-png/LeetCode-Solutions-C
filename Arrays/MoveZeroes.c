#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int j = 0;

    // Move non-zero elements to the front
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while(j < n) {
        nums[j] = 0;
        j++;
    }

    printf("Array after moving zeroes: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}




//sample output
//Enter size of array: 5
//Enter array elements: 0 1 0 3 12
//Array after moving zeroes: 1 3 12 0 0



//Complexity
//Time Complexity: O(n)
//Space Complexity: O(1)
