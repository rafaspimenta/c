#include <stdio.h>
#include <string.h>

void copy(char *dst, char *src)
{
    while (*src != '\0')
    {
        printf("%p\t%c\n", src, (char)*src);
        *dst = *src;
        src++;
        dst++;
    }
    dst = '\0';
}

int main()
{
    char srcString[] = "for the next prize We promptly judged antique ivory buckles!";
    char dstString[] = "We promptly judged antique ivory buckles for the next hello!";

    copy(dstString, srcString);

    printf("%s\n", dstString);
}