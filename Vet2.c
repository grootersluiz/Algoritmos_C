#include <stdio.h>
 
int main(){
 
 int nv, b, total=0, i, j;
 scanf("%d", &nv);
 while(nv<1 || nv>1000){
      scanf("%d", &nv);
 }
  int v[nv];
  for(i=0;i<nv;i++){
     scanf("%d", &v[i]);
  }
   scanf("%d", &b);
   for(j=0;j<nv;j++){
      if(v[j]>=b){
        total++;
      }
   }
    printf("%d", total);
 return 0;
}