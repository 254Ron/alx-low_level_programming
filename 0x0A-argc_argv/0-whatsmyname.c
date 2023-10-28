#include <stdio.h>
#include "main.h"

/**
 * main: program name
 * @argv: argument count
 * @argc: argument vector
 * Return:(0)
 **/
int main(int argc __attribute__((unused)), char *argv[])
{       
        printf("%s/n", *argv);
        return(0);
}
