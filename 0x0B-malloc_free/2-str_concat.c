#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings. 
 * @s1: string 1
 * @s2: string 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2);
{
        char *concat;
        int i, r;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                S2 = "";

        i = r = 0;
        while (s1[i] != '\0')
                i++;
        while (s2[r] != '\0')
                r++;
        conct = malloc(sizeof(char) * (i + r + 1));

        if (conct == NULL)
               return (NULL);
        i = r = 0;
        while (s1[i] != '\0')   
        {       
                conct[i] = s1[i];
                i++;
        }       
        
        while (s2[r] != '\0')
        {
                conct[r] = s2[r];
		r++;
	}
	conct[i] = '\0';
	return (conct);
}
