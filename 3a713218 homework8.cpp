#include<stdio.h>
#include<conio.h>
int main() 
{ 

int a,b,n,m=0; 

printf("��J n �A�D 1 ~ n ������� �G "); 
scanf("%d",&n); 

for ( a = 2 ; a <= n ; a++) 
{ 
m =0; 

for ( b = 1 ; b <= n ; b++) 
{ 
if( (a % b) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t �O��� !\n",a); 

} 
getch(); 
return 0; 

}
