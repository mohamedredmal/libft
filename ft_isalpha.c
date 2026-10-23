#include <stdio.h>
int ft_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;

    }else
    {
        return 0;
    }
}

int main(void)
{
    int x = ft_isalpha('1');
    printf("%d\n", x);
    return 0;
}