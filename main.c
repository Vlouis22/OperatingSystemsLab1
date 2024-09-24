#include <stdio.h>
#include <stdlib.h>
#include "lab1.h"

/**********************************************
 *     DO NOT MODIFY THIS FILE IN ANY WAY!    *
 **********************************************/

int main()//int argc, char** argv)
{
    // char* explodedString = NULL;
    // char* str = NULL;
    // int result = SUCCESS;
    
    // if (argc < 2){
    //     fprintf(stderr,"SYNOPSIS: %s <file name>\n",argv[0]);
    //     return FAILURE;
    // }
    
    // str = readString(argv[1]);
    // if (str != NULL){
    //     explodedString = mysteryExplode(str);
    // }
    
    // printf("%s --> %s\n",str,explodedString);
    
    // free(str);
    // free(explodedString);
    
    // return SUCCESS;
    //char string[] = "Code";
    // char* explodedString = NULL;
    // explodedString = mysteryExplode("Code");
    // printf("final result main.c = %s\n", explodedString);
    // explodedString = mysteryExplode("abc");
    // printf("final result main.c = %s\n", explodedString);
    // explodedString = mysteryExplode(":)");
    // printf("final result main.c = %s\n", explodedString);

    char fileName[] = "poem.txt";
    readString(fileName);

    return 0;
}
