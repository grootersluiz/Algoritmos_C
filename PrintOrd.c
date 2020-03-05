#include <stdio.h>
 
int main(){
 
  float n, n1, n2, n3;
  scanf("%f %f %f %f", &n, &n1, &n2, &n3);
 
  if(n<n1 && n<n2 && n<n3){  
 
  if(n1<n2 && n2<n3){
     printf("%.2f, %.2f, %.2f, %.2f\n", n, n1, n2, n3);
                    }
  else
   if(n1<n3 && n3<n2){
      printf("%.2f, %.2f, %.2f, %.2f\n", n, n1, n3, n2);
                     }
  else
    if(n2<n1 && n1<n3){
       printf("%.2f, %.2f, %.2f, %.2f\n", n, n2, n1, n3);
                      }
  else
     if(n2<n3 && n3<n1){
        printf("%.2f, %.2f, %.2f, %.2f\n", n, n2, n3, n1);
                      }        
  else
      if(n3<n1 && n1<n2){
         printf("%.2f, %.2f, %.2f, %.2f\n", n, n3, n1, n2);
                        }
  else
       if(n3<n2 && n2<n1){
          printf("%.2f, %.2f, %.2f %.2f\n", n, n3, n2, n1);
                         }
}
  if(n1<n && n1<n2 && n1<n3){  
 
  if(n<n2 && n2<n3){
     printf("%.2f, %.2f, %.2f, %.2f\n", n1, n, n2, n3);
                    }
  else
   if(n<n3 && n3<n2){
      printf("%.2f, %.2f, %.2f, %.2f\n", n1, n, n3, n2);
                     }
  else
    if(n2<n && n<n3){
       printf("%.2f, %.2f, %.2f, %.2f\n", n1, n2, n, n3);
                      }
  else
     if(n2<n3 && n3<n){
        printf("%.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n);
                      }        
  else
      if(n3<n && n<n2){
         printf("%.2f, %.2f, %.2f, %.2f\n", n1, n3, n, n2);
                        }
  else
       if(n3<n2 && n2<n){
          printf("%.2f, %.2f, %.2f %.2f\n", n1, n3, n2, n);
                         }
} 
  if(n2<n && n2<n1 && n2<n3){  
 
  if(n1<n && n<n3){
     printf("%.2f, %.2f, %.2f, %.2f\n", n2, n1, n, n3);
                    }
  else
   if(n1<n3 && n3<n){
      printf("%.2f, %.2f, %.2f, %.2f\n", n2, n1, n3, n);
                     }
  else
    if(n<n1 && n1<n3){
       printf("%.2f, %.2f, %.2f, %.2f\n", n2, n, n1, n3);
                      }
  else
     if(n<n3 && n3<n1){
        printf("%.2f, %.2f, %.2f, %.2f\n", n2, n, n3, n1);
                      }        
  else
      if(n3<n1 && n1<n){
         printf("%.2f, %.2f, %.2f, %.2f\n", n2, n3, n1, n);
                        }
  else
       if(n3<n && n<n1){
          printf("%.2f, %.2f, %.2f %.2f\n", n2, n3, n, n1);
                      }
}
  if(n3<n && n3<n1 && n3<n2){  
 
  if(n1<n2 && n2<n){
     printf("%.2f, %.2f, %.2f, %.2f\n", n3, n1, n2, n);
                    }
  else
   if(n1<n && n<n2){
      printf("%.2f, %.2f, %.2f, %.2f\n", n3, n1, n, n2);
                     }
  else
    if(n2<n1 && n1<n){
       printf("%.2f, %.2f, %.2f, %.2f\n", n3, n2, n1, n);
                      }
  else
     if(n2<n && n<n1){
        printf("%.2f, %.2f, %.2f, %.2f\n", n3, n2, n, n1);
                      }        
  else
      if(n<n1 && n1<n2){
         printf("%.2f, %.2f, %.2f, %.2f\n", n3, n, n1, n2);
                        }
  else
       if(n<n2 && n2<n1){
          printf("%.2f, %.2f, %.2f %.2f\n", n3, n, n2, n1);
                      }
}
 return 0;
          
}