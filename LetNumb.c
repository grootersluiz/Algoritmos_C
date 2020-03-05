#include <stdio.h>
 
int main(){
 
  int n1, n2, n3;
  char o1, o2, o3;
  scanf("%d %d %d\n", &n1, &n2, &n3);
  scanf("%c %c %c", &o1, &o2, &o3);
  
  if(o1=='A' && o2=='B' && o3=='C'){
 
  if(n1<n2 && n2<n3){
                     printf("%d %d %d\n", n1, n2, n3);
                     }
  if(n1<n3 && n3<n2){
                     printf("%d %d %d\n", n1, n3, n2);
                     }
  if(n2<n1 && n1<n3){
                     printf("%d %d %d\n", n2, n1, n3);
                     }
  if(n2<n3 && n3<n1){
                     printf("%d %d %d\n", n2, n3, n1);
                     }
  if(n3<n2 && n2<n1){
                     printf("%d %d %d\n", n3, n2, n1);
                     }
  if(n3<n1 && n1<n2){
                     printf("%d %d %d\n", n3, n1, n2);
                     }
}
  if(o1=='A' && o2=='C' && o3=='B'){
 
  if(n1<n2 && n2<n3){
                     printf("%d %d %d\n", n1, n3, n2);
                     }
  if(n1<n3 && n3<n2){
                     printf("%d %d %d\n", n1, n2, n3);
                     }
  if(n2<n1 && n1<n3){
                     printf("%d %d %d\n", n2, n3, n1);
                     }
  if(n2<n3 && n3<n1){
                     printf("%d %d %d\n", n2, n1, n3);
                     }
  if(n3<n2 && n2<n1){
                     printf("%d %d %d\n", n3, n1, n2);
                     }
  if(n3<n1 && n1<n2){
                     printf("%d %d %d\n", n3, n2, n1);
                     }
}
  if(o1=='B' && o2=='A' && o3=='C'){
 
  if(n1<n2 && n2<n3){
                     printf("%d %d %d\n", n2, n1, n3);
                     }
  if(n1<n3 && n3<n2){
                     printf("%d %d %d\n", n3, n1, n2);
                     }
  if(n2<n1 && n1<n3){
                     printf("%d %d %d\n", n1, n2, n3);
                     }
  if(n2<n3 && n3<n1){
                     printf("%d %d %d\n", n3, n2, n1);
                     }
  if(n3<n2 && n2<n1){
                     printf("%d %d %d\n", n2, n3, n1);
                     }
  if(n3<n1 && n1<n2){
                     printf("%d %d %d\n", n1, n3, n2);
                     }
}
  if(o1=='B' && o2=='C' && o3=='A'){
 
  if(n1<n2 && n2<n3){
                     printf("%d %d %d\n", n2, n3, n1);
                     }
  if(n1<n3 && n3<n2){
                     printf("%d %d %d\n", n3, n2, n1);
                     }
  if(n2<n1 && n1<n3){
                     printf("%d %d %d\n", n1, n3, n2);
                     }
  if(n2<n3 && n3<n1){
                     printf("%d %d %d\n", n3, n1, n2);
                     }
  if(n3<n2 && n2<n1){
                     printf("%d %d %d\n", n2, n1, n3);
                     }
  if(n3<n1 && n1<n2){
                     printf("%d %d %d\n", n1, n2, n3);
                     }
}
  if(o1=='C' && o2=='A' && o3=='B'){
 
  if(n1<n2 && n2<n3){
                     printf("%d %d %d\n", n3, n1, n2);
                     }
  if(n1<n3 && n3<n2){
                     printf("%d %d %d\n", n2, n1, n3);
                     }
  if(n2<n1 && n1<n3){
                     printf("%d %d %d\n", n3, n2, n1);
                     }
  if(n2<n3 && n3<n1){
                     printf("%d %d %d\n", n1, n2, n3);
                     }
  if(n3<n2 && n2<n1){
                     printf("%d %d %d\n", n1, n3, n2);
                     }
  if(n3<n1 && n1<n2){
                     printf("%d %d %d\n", n2, n3, n1);
                     }
}
  if(o1=='C' && o2=='B' && o3=='A'){
 
  if(n1<n2 && n2<n3){
                     printf("%d %d %d\n", n3, n2, n1);
                     }
  if(n1<n3 && n3<n2){
                     printf("%d %d %d\n", n2, n3, n1);
                     }
  if(n2<n1 && n1<n3){
                     printf("%d %d %d\n", n3, n1, n2);
                     }
  if(n2<n3 && n3<n1){
                     printf("%d %d %d\n", n1, n3, n2);
                     }
  if(n3<n2 && n2<n1){
                     printf("%d %d %d\n", n1, n2, n3);
                     }
  if(n3<n1 && n1<n2){
                     printf("%d %d %d\n", n2, n1, n3);
                     }
}
 
 return 0;
}