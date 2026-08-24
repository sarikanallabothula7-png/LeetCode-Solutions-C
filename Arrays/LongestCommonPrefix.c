#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    // Read number of strings
    printf("Enter number of strings: ");
    scanf("%d", &n);

    // Array to store strings
    char strs[n][100];

    // Read all strings
    printf("Enter strings:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%s", strs[i]);
    }

    // Assume first string is the common prefix
    char prefix[100];
    strcpy(prefix, strs[0]);

    // Compare prefix with remaining strings
    for(int i = 1; i < n; i++)
    {
        int j = 0;

        // Compare characters one by one
        while(prefix[j] != '\0' &&
              strs[i][j] != '\0' &&
              prefix[j] == strs[i][j])
        {
            j++;
        }

        // Terminate prefix at mismatch position
        prefix[j] = '\0';

        // If no common prefix exists, stop checking
        if(strlen(prefix) == 0)
        {
            break;
        }
    }

    // Display longest common prefix
    printf("Longest Common Prefix: %s\n", prefix);

    return 0;
}
