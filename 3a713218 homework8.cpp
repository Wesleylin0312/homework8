#include<stdio.h>
#include<conio.h>
int main() 
{ 

int a,b,n,m=0; 

printf("輸入 n ，求 1 ~ n 內的質數 ： "); 
scanf("%d",&n); 

for ( a = 2 ; a <= n ; a++) 
{ 
m =0; 

for ( b = 1 ; b <= n ; b++) 
{ 
if( (a % b) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t 是質數 !\n",a); 

} 
getch(); 
return 0; 

}
