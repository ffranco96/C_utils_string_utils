#include "stringUtils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char statusGateway[] = "pENDING";
    char status[] = "PENDING";
    char *result;
//    halMinToMay ( statusGateway);
    printf("pasado a mayus %s\n",statusGateway);
    result = strstr(statusGateway, status);
    if(  result != NULL){
        printf("%s",result);
    }

    return 0;
}


