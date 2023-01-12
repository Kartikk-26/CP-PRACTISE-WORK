#include<stdio.h>
void indian();
void french();
int main(){
    int a;
    printf("PRESS 1 FOR INDIAN\nPRESS 2 FOR FRENCH\n");
    scanf("%d",&a);
    if(a==1){
        indian();
    }
    else if(a==2){
        french();
    }

    
}
void indian(){
    printf("NAMASTE!\n");
}
void french(){
    printf("BONJOUR!\n");
}