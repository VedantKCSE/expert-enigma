#include <stdio.h>
#include <string.h>

void main(){
    char Original [101];
    char Calculated [101];
    printf("\t\tEnter the ORIGINAL Hash\n");
    scanf("%s",Original);
    printf("\t\tEnter the CALCULATED Hash\n");
    scanf("%s",Calculated);

    if (strcmp(Original , Calculated)== 0){
        printf("\t\tGood to go :)");
    }
    else{
        printf("\t\tSomething is wrong :(");
    }
}