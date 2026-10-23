#include <stddef.h>
#include <stdio.h>
size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

int main(void)
{
    const char *str = "Hello, World!";
    size_t length = ft_strlen(str);
    printf("Length of the string \"%s\" is: %zu\n", str, length);
    return 0;
}