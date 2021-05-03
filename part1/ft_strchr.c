#include <stdio.h>

char *ft_strchr(char *str, int c)
{
    int i;

    i = -1;
    while (str[++i])
        if (str[i] == c)
            return (str + i);
    return (0);
}

int main(void)
{
    char str[] = "BlockDMask Blog is good";
    char* ptr = ft_strchr(str, 'o');
    
    while(ptr != NULL) 
    {
        printf("finding text : %c, string to find : %s\n", *ptr, ptr);
        ptr = ft_strchr(ptr + 1, 'o');    //ptr + 1 이 중요합니다.
    }
    
    return 0;
}