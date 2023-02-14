#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("testR.txt","w+");
    if(fp==NULL){
        printf("FILE NOT FOUND");
    }
    fprintf(fp,"test line");
    fclose(fp);
}