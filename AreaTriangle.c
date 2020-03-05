#include <stdio.h>
 
int main(){
 
  double a, b, c, area;
  scanf("%lf %lf %lf", &a, &b, &c);
 
  if(a<b+c && b<a+c && c<a+b){
                              printf("Perimetro = %.1lf", a+b+c);
                             }
  else{
       area=((a+b)*c)/2;
       printf("Area = %.1lf", area);
        }
 
 return 0;
}