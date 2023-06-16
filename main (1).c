/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, soma, cont;
    double media;
    
    printf("Digite as idade: \n");
    scanf("%d", &idade);
    
    cont = 0;
    soma = 0;
    
    while (idade >= 0){
    cont = cont + 1;
    soma = soma + idade;
    scanf("%d", &idade);
    
    }
    if(cont == 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
        
   
    media = (double) soma / cont;

    printf("MEDIA DE IDADES = %.2lf\n", media);
    }
    

    return 0;
}
