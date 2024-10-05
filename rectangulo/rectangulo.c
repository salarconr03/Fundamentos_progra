#include <stdio.h> 
#include <math.h>

#define NUMERO_DE_LADOS 4

void main(){
    //variables para el rectangulo
    float base = 0;
    float altura = 0;
    float area = 0;
    float perimetro = 0;
    //variables para la distancia euclidiana
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    float distancia = 0;

    //rectangulo
    printf("Ingresa la base y la altura del rectangulo. \n");
    scanf("%f %f", &base, &altura);
    area = base * altura;
    perimetro = 2 * (base + altura);
    printf("El area del rectangulo es:  %.2f ", area);
    printf("El perimetro del rectangulo es:  %.2f" , perimetro);
    //distancia euclidiana
    printf("\nIngresa las coordenadas del primer punto en formato (x,y). \n");
    scanf("%f %f", &x1, &y1);
    printf("Ingresa las coordenadas del segundo punto en formato (x,y). \n");
    scanf("%f %f", &x2, &y2);
    distancia = pow(pow(x2-x1, 2)+pow(y2-y1, 2), 0.5);
    printf("La distancia entre los dos puntos es: %.2f", distancia);

}