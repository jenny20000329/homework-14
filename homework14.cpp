#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 int s,t,c;
 
 printf("請輸入三角形三邊長的數值\n");
 printf("a="); scanf("%d",&s);
 printf("b="); scanf("%d",&t);
 printf("c="); scanf("%d",&c);
 
 
    if( (s+t) <= c ){
     printf("不可以圍成一個三角形"); 
 }
 else if( (s+c) <= t && (t>>s>>c || t>>c>>s)){
     printf("不可以圍成一個三角形"); 
 }
 else if( (t+c) <= s ){
     printf("不可以圍成一個三角形"); 
 } 
 else{
  printf("可以圍成一個三角形");
 } 
 printf("\n");
 
 system("PAUSE");
 return 0;
}
