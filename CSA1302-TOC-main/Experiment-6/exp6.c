#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, l, count1, count2, flag;

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

    if(flag != 1)
    {
        printf("String is Not Valid\n");
    }
    else
    {
        i = 0;
        count1 = 0;

        // Count 0s at the beginning
        while(s[i] == '0')
        {
            count1++;
            i++;
        }

        // Skip all 1s
        while(s[i] == '1')
        {
            i++;
        }

        // Count 0s at the end
        count2 = 0;
        flag = 1;

        while(i < l)
        {
            if(s[i] == '0')
            {
                count2++;
            }
            else
            {
                flag = 0;
            }

            i++;
        }

        if(flag == 1 && count1 == count2)
        {
            printf("The string satisfies the condition 0n1m0n\n");
            printf("String Accepted\n");
        }
        else
        {
            printf("The string does not satisfy the condition 0n1m0n\n");
            printf("String Not Accepted\n");
        }
    }

    return 0;
}
