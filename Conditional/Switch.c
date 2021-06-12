#include<stdio.h>
#include<stdlib.h>

int main(void){

    int unit;
    float c,f,k;

    printf("Enter unit\n1 for Celcious\n2 for Farenheight\n3 for Kelvin\n");
    scanf("%d",&unit);

    switch (unit)
    {
    case 1:
        printf("Enter tempearture in Celcious\n");
        scanf("%f",&c);
        f = (1.8*c)+32;
        k = c + 273;
        printf("Farenheight = %f\nKelvin = %f\n",f,k);
        break;
    case 2:
        printf("Enter tempearture in Farenheight\n");
        scanf("%f",&f);
        c = (f-32)/1.8;
        k = c + 273;
        printf("Celcious = %f\nKelvin = %f\n",c,k);
        break;
    case 3:
        printf("Enter tempearture in Kelvin\n");
        scanf("%f",&k);
        c = k-273;
        f = (1.8*c)+32; 
        printf("Farenheight = %f\nCelcious = %f\n",f,c);
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    
    return EXIT_SUCCESS;
}