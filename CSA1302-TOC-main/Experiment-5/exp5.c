#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, flag = 1, palindrome = 1;
    int l;

    printf("Enter a string to check: ");
    scanf("%s", s);

    l = strlen(s);

    // Check whether input contains only 0 and 1
    for(i = 0; i < l; i++)
    {
        if(s[i] != '0' && s[i] != '1')
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0)
    {
        printf("String is Not Valid\n");
    }
    else
    {
        printf("String is Valid\n");

        for(i = 0; i < l / 2; i++)
        {
            if(s[i] != s[l - i - 1])
            {
                palindrome = 0;
                break;
            }
        }

        if(palindrome == 1)
        {
            printf("The string is a palindrome\n");
            printf("String is Accepted\n");
        }
        else
        {
            printf("The string is not a palindrome\n");
            printf("String is Not Accepted\n");
        }
    }

    return 0;
}
