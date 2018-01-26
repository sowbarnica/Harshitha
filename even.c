#include<stdio.h>
int main(){
int d1,d2,remainder,s;
printf(" Give the First number for the Range : \n");
scanf("%d",&d1);
printf(" Give the Final number for the Range : \n");
scanf("%d",&d2);
printf("\n The Even numbers between %d and %d are ",d1,d2);
for(s=d1; s<=d2; ++s){
remainder = s % 2;
if(remainder == 0)
printf("\n %d",s);
}
return 0;
}
