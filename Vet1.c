#include <stdio.h>
 
int main(){
 
 int nv, nt, b, teste=0, i, j, k;
 scanf("%d", &nv);
 int v[nv];
 for(i=0;i<nv;i++){
    scanf("%d", &v[i]);
 }
  scanf("%d", &nt);
  for(j=1;j<=nt;j++){                    
     scanf("%d", &b);
     for(k=0;k<nv;k++){
        if(b==v[k]){
           teste++;
        } 
     }
      if(teste>0){
        printf("ACHEI\n");
      }
       else{
        printf("NAO ACHEI\n");
       }
  teste=0;
  }    
 return 0;
}