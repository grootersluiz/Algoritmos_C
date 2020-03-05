#include<stdio.h>
#include<math.h>
 
int main(){
 
  double x, fat=1, sum=0;
  int n, k, k2=1;
  scanf("%lf %d", &x, &n);
 
  for(k=0;k<=n;k++){
                    while(k2<=(2*k)){
                                     fat=fat*k2;
                                     k2++;
                                      }
                    sum=sum+pow(-1,k)*pow(x,2*k)/fat;
                              
}
  printf("cos(%.2lf) = %.6lf", x, sum); 
 
 return 0;
}