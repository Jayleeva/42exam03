#include "scanf.h"

void    ft_scanf(char *s, ...)
{
    va_list	args;

    va_start(args, s);
        // at every call, args increments
    va_end(args);
}

int main(void)
{
    int     a;
    int     b;
    char    c;
    char    buffer[80];
    void     *p;

    scanf("%c", &c);
    printf("print: %c\n", c);

    scanf("%d %d", &a, &b);
    printf("print: %d %d\n", a, b);

    scanf("%s[^\n]", buffer);
    printf("print: %s\n", buffer);

    scanf("%p", &p);
    printf("print: %p\n", p);
}