#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("output.txt","r");
    printf("HELLO");
    fprintf(fp,"FILE OPEN HOGYI BHAI\n ");
    fprintf(fp,"TODAY IS MONDAY\n ");
    
    fprintf(fp,"KAL BLACK DAY H GUYS");
    fclose(fp);
}