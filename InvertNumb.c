#include <stdio.h>
 
int main() {
 
 int a, a1, a2, a3;
 scanf("%d", &a);
 
 a1=a%10;
 a2=(a/10)%10;
 a3=(a/10)/10;
 
 printf("%d%d%d\n", a1, a2, a3);
 
 return 0;
}