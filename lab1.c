#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 *
 * fileName is c-string representing the file to read.
 *
 */
char *readString(char *fileName)
{
    int size = 0;
    char *result = (char *)malloc(100 * sizeof(char));
    const int MAX_SIZE = 1024;

    FILE *pF = fopen(fileName, "r");

    char buffer[MAX_SIZE];

    if (pF == NULL)
    {
        printf("Error reading file");
    }
    else
    {
        fgets(buffer, MAX_SIZE, pF);
        strcpy(result, buffer);
    }

    fclose(pF);
    result[strlen(result) - 1] = '\0';
    return result;
}

/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 *
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 *
 */
char *mysteryExplode(const char *str)
{
    int size = (strlen(str) * (strlen(str) + 1)) / 2;

    char *explosionString = NULL;
    explosionString = (char *)malloc((size + 1) * sizeof(char));
    explosionString[0] = '\0';

    for (int i = 0; i < strlen(str); i++)
    {
        strncat(explosionString, str, i + 1);
    }

    return explosionString;
}
