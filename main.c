#include "stringUtils.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Status: develop halMayToMin. Test halMinToMay2. Test strstr to seek substring within a bigger
 * string.
 * */

int main() {
    char stringTest1[] = "pENDING";
    char *stringTest2;
    char status[] = "PENDING";
    char *result;

    // -- Converting mayus to minus letters and vice versa
    halMinToMay ( stringTest1); // -- Giving static memory block
    printf("Str1 pasado a mayus %s\n",stringTest1);

    stringTest2 = (char *)calloc(8,sizeof(char));
    strcpy(stringTest2, "pENdINg");
    halMinToMay ( stringTest2); // -- Giving dynamic memory block
    printf("Str2 pasado a mayus %s\n",stringTest2);

//    result = strstr(statusGateway, status);
//    if(  result != NULL){
//        printf("%s",result);
//    }

    return 0;
}


