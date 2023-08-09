#include<stdio.h>
int main(){
   int num,i,res=0;
   printf("Enter the number:");
   scanf("%d",&num);
   for(i=1;i<=num;i++){
      if(num%i==0)
         res=res+i;
   }
   if(res==2*num)
      printf("It is a perfect number");
   else
      printf("It is not a perfect number");
}
