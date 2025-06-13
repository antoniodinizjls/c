#include<stdio.h>

int main() {
   int x;
   printf("Digite o valor de X\n");
   scanf("%i",&x);
   if(x>10){
       printf("f(x)=%i",(x+(2*(x*x))));
       return 0;
       
   }else if(x<=10){
       printf("f(x)=10\n");
       return 0;
   }else if(x<=5){
       printf("f(x)=5\n");
       return 0;
   }else if(x>5){
       printf("f(x)=%i",x);
       return 0;
   }else if(1==1){
       printf("f(x)=%i",((x*x)+(3*x)-20));
   }
   
    
    return 0;
}