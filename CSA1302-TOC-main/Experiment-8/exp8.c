#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, flag, flag1, l;

    printf("Enter a string to check: ");
    scanf("%s", s);

    l = strlen(s);

    // Check whether input contains only 0 and 1
    flag = 1;

    for(i = 0; i < l; i++)
    {
        if(s[i] != '0' && s[i] != '1')
        {
            flag = 0;
        }
    }

    if(flag == 1)
    {
        printf("String is Valid\n");

        flag1 = 0;

        // Check for substring 101
        for(i = 0; i < l - 2; i++)
        {
            if(s[i] == '1')
            {
                if(s[i + 1] == '0' && s[i + 2] == '1')
                {
                    flag1 = 1;
                    break;
                }
            }
        }

        if(flag1 == 1)
        {
            printf("Substring 101 exists. String accepted\n");
        }
        else
        {
            printf("Substring 101 does not exist. String not accepted\n");
        }
    }
    else
    {
        printf("String is Not Valid\n");
    }

    return 0;
}
