#include <stdio.h>
 
int main(){
 
  int i;
  float n1, n2, n3;
  scanf("%d %f %f %f", &i, &n1, &n2, &n3);
 
  if(i==1){
          if(n1<n2 && n2<n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n1<n3 && n3<n2){
                             printf("%.2f %.2f %.2f", n1, n3, n2);
                            }
          if(n2<n1 && n1<n3){
                             printf("%.2f %.2f %.2f", n2, n1, n3);
                            }
          if(n2<n3 && n3<n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n3<n1 && n1<n2){
                             printf("%.2f %.2f %.2f", n3, n1, n2);
                            }
          if(n3<n2 && n2<n1){
                             printf("%.2f %.2f %.2f", n3, n2, n1);
                            }
          if(n1==n2 && n2<n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n2==n3 && n3<n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n1<n2 && n2==n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n2<n3 && n3==n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n1==n2 && n2==n3){
                               printf("%.2f %.2f %.2f", n1, n2, n3);
                               } 
}
 
  if(i==2){
          if(n1>n2 && n2>n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n1>n3 && n3>n2){
                             printf("%.2f %.2f %.2f", n1, n3, n2);
                            }
          if(n2>n1 && n1>n3){
                             printf("%.2f %.2f %.2f", n2, n1, n3);
                            }
          if(n2>n3 && n3>n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n3>n1 && n1>n2){
                             printf("%.2f %.2f %.2f", n3, n1, n2);
                            }
          if(n3>n2 && n2>n1){
                             printf("%.2f %.2f %.2f", n3, n2, n1);
                            }
          if(n1==n2 && n2>n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n2==n3 && n3>n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n1>n2 && n2==n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n2>n3 && n3==n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n1==n2 && n2==n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
} 
           
  if(i==3){
          if(n1>n2 && n2>n3){
                             printf("%.2f %.2f %.2f", n2, n1, n3);
                            }
          if(n1>n3 && n3>n2){
                             printf("%.2f %.2f %.2f", n3, n1, n2);
                            }
          if(n2>n1 && n1>n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n2>n3 && n3>n1){
                             printf("%.2f %.2f %.2f", n3, n2, n1);
                            }
          if(n3>n1 && n1>n2){
                             printf("%.2f %.2f %.2f", n1, n3, n2);
                            }
          if(n3>n2 && n2>n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n1==n2 && n2>n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
          if(n2==n3 && n3>n1){
                             printf("%.2f %.2f %.2f", n2, n3, n1);
                            }
          if(n1>n2 && n2==n3){
                             printf("%.2f %.2f %.2f", n2, n1, n3);
                            }
          if(n2>n3 && n3==n1){
                             printf("%.2f %.2f %.2f", n3, n2, n1);
                            }
          if(n1==n2 && n2==n3){
                             printf("%.2f %.2f %.2f", n1, n2, n3);
                            }
} 
 
 return 0;
}