#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 int s,t,c;
 
 printf("�п�J�T���ΤT������ƭ�\n");
 printf("a="); scanf("%d",&s);
 printf("b="); scanf("%d",&t);
 printf("c="); scanf("%d",&c);
 
 
    if( (s+t) <= c ){
     printf("���i�H�򦨤@�ӤT����"); 
 }
 else if( (s+c) <= t && (t>>s>>c || t>>c>>s)){
     printf("���i�H�򦨤@�ӤT����"); 
 }
 else if( (t+c) <= s ){
     printf("���i�H�򦨤@�ӤT����"); 
 } 
 else{
  printf("�i�H�򦨤@�ӤT����");
 } 
 printf("\n");
 
 system("PAUSE");
 return 0;
}
