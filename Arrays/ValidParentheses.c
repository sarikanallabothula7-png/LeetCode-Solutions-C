#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    // Read input string
    printf("Enter parentheses string: ");
    scanf("%s", s);

    // Stack implementation using array
    char stack[100];
    int top = -1;

    // Traverse the string
    for(int i = 0; i < strlen(s); i++)
    {
        // Push opening brackets into stack
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack[++top] = s[i];
        }
        else
        {
            // If stack is empty, string is invalid
            if(top == -1)
            {
                printf("Invalid Parentheses\n");
                return 0;
            }

            // Pop top element
            char ch = stack[top--];

            // Check matching brackets
            if((s[i] == ')' && ch != '(') ||
               (s[i] == '}' && ch != '{') ||
               (s[i] == ']' && ch != '['))
            {
                printf("Invalid Parentheses\n");
                return 0;
            }
        }
    }

    // If stack is empty, all brackets matched
    if(top == -1)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}
