#include<stdio.h>
int main(){
  int x,y,i,hcf=1;
  printf("ENTER THE TWO NUMBER :\n");
  scanf("%d %d",&x,&y);
  for(i=1;i<=x||i<=y;i++)
  {
    if(x%i==0 && y%i==0)
    {
        hcf=i;

    }
  }  
  printf("HCF OF %d AND %d ARE %d",x,y,hcf);
}
