#include <stdio.h>
 
int main(){
 
 int mat;
 double hrs, vlrhr, sal;
 
 do{
 scanf("%d %lf %lf", &mat, &hrs, &vlrhr);
 if(mat!=0)
 {
 sal=hrs*vlrhr;
 printf("%d %.2lf\n", mat, sal);
 }
 }
 while(mat!=0);
 
 return 0;
 }