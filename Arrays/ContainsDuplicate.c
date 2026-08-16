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

    int duplicate = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                duplicate = 1;
                break;
            }
        }
        if(duplicate)
            break;
    }

    if(duplicate)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
