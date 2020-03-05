#include<stdio.h>
#include<math.h>
 
int main(){
 
  double x, fat=1, sum=0;
  int n, k, k2=1;
  scanf("%lf %d", &x, &n);
 
  for(k=0;k<=n;k++){
                    while(k2<=k){
                                 fat=fat*k2;
                                 k2++;
                                 }
                    sum=sum+pow(x,k)/fat;
                              
}
  printf("e^%.2lf = %.6lf", x, sum); 
 
 return 0;
}