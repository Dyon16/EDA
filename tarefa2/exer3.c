#include <stdio.h>

typedef struct
{
    float D;
    float d;
} CalLo;


void main()
{
    float A;
    CalLo Losango;

    printf ("Diagonal maior: ");
    scanf("%f", &Losango.D);

    printf ("Diagonal menor: ");
    scanf("%f", &Losango.d);
    
    A = (Losango.D * Losango.d)/2;

    printf ("Area: %0.2f\n", A);

}