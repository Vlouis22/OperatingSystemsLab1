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
char* readString(char* fileName){
    int size = 0;
    char *result = (char *) malloc(100 * sizeof(char));
    const int MAX_SIZE = 1024;

    FILE *pF = fopen(fileName, "r");
    FILE *temppF = fopen("temp.txt", "w");

    char buffer[MAX_SIZE];

    if(pF == NULL){
        printf("Error reading file");
    } else {
        fgets(buffer, MAX_SIZE, pF);
        result = strcpy(result, buffer);
    }

    FILE *pF2 = fopen(fileName, "r");
    int index2 = 0;

    if (pF2 == NULL) {
        printf("Error reading file");
    } else {
        while (fgets(buffer, MAX_SIZE, pF2)) {
            if (index2 != 0){
                fprintf(temppF, buffer);
            }
            index2++;
        }
    }

    fclose(pF);
    fclose(temppF);
    
    remove(fileName);
    rename("temp.txt", fileName);
    
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
char* mysteryExplode(const char* str){
    int size = 0;
    int index = 1;

    for(int i = 0; i < strlen(str); i++){
        size += index;
        index++;
    }

    char *explosionString = NULL;
    explosionString = malloc((strlen(str) * str[0])+1);

    for(int i = 0; i < strlen(str); i++){
        strncat(explosionString, str, i+1);
    }

    return explosionString;
}