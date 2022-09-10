/*Faça um programa em C que lê um valor para x e calcule o valor de Sen(x). O valor
deve ser calculado utilizando funções e enquanto o termo x
n
n!
calculado for maior que

10E-12.*/

#include <stdio.h>
#include <math.h>

/*long int fatorial(int n){
    long int fat = n * (n - 1);
    if(n == 0 || fat == 0)
        fat = 1.0;

    return fat;}*/

long fat(int n) {
    if(n < 2)
        return 1;
    else
        return n * fat(n-1);    //return (n < 2) ? 1 : n * fat(n-1); 
    }


int main()
{
    double x, z = 0.0;
    int n, i, j;
    scanf("%lf%d", &x, &n);

    for(i = 0; i < n; i++ )
    {
        z = z + ( ( pow(-1.0 , i)*pow(x, (2.0*i)) ) / (fat(2*i)) ); 
        //printf("\n\t%ld", fat(2*i)); //debug
    }

        printf("\n\ncos(x) = %lf\n", z );

    return 0;
}
