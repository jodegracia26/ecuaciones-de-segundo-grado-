#include <stdio.h>
#include <math.h>

void ecuaciones (double, double, double, double *, double *);

void main (void){
    double a, b, c, x1, x2;

    while(1+1==2){
    printf("Introduzca a: \n");
    scanf("%lf", &a);
    printf("Introduzca b: \n");
    scanf("%lf", &b);
    printf("Introduzca c: \n");
    scanf("%lf", &c);
    ecuaciones(a, b, c, &x1, &x2);
    printf("Las soluciones son: %lf y %lf \n ", x1,x2);
    }
}


void ecuaciones (double a, double b , double c , double *x1, double *x2){
    *x1 = (-b+(sqrt(b*b-4*a*c)))/2*a;
    *x2 = (-b-(sqrt(b*b-4*a*c)))/2*a;

}
