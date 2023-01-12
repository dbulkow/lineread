#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp = fopen("lineread.c", "r");
    if (fp == NULL)
    {
        perror("fopen");
        exit(1);
    }

    char *line = NULL;
    size_t len = 0;

    while ((getline(&line, &len, fp)) != -1)
    {
        printf("%s", line);
    }

    fclose(fp);

    if (line)
        free(line);
}
