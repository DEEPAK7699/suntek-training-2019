//To find whether the substring is present in the string//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;
    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(search);
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("found");
    else
        printf("not found");
 
    return 0;
}
void main()
{
    find();
}