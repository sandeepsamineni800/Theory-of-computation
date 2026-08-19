#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, flag = 1;
    int l;

    printf("Enter a string to check: ");
    scanf("%s", s);

    l = strlen(s);

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
        printf("String is Valid\n");

        if(s[0] == '0' && s[l - 1] == '1')
            printf("String is Accepted\n");
        else
            printf("String is Not Accepted\n");
    }

    return 0;
}
