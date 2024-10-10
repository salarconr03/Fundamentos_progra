#include <stdio.h>

int main(){
     float cal = 0;

     printf("Introduzca un numero entre 0 y 100: ");
     scanf("%f", &cal);

     if(cal >= 90 && cal <= 100){
          printf("Su calificacion es A");
     }else if(cal >= 80 && cal <= 89){
          printf("Su calificacion es B");
     }else if(cal >= 70 && cal <= 79){
          printf("Su calificacion es C");
     }else if(cal >= 60 && cal <= 69){
          printf("Su calificacion es D");
     }else if(cal >= 0 && cal < 60){
          printf("Su calificacion es F");
     }else{
     printf("Por favor introduzca una cantidad entre 0 y 100");
     }

     return 0;
}