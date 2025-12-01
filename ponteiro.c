#include <stdio.h>
void troca(int *x, int *y){
    //criar uma função para trocar os 
    // valores de posição
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
    *x=2025;//aponta para var a
    *y=2026;//aponta para var b
}
int main() {
    int a,b;
    int valor = 10;
    int *ptr; 
    ptr = &valor; 
    a=70;
    b=100;
    printf("a = %d\n",a);//70
    printf("b = %d\n",b);//100
    troca(&a,&b);
    printf("a = %d\n",a);//100
    printf("b = %d\n",b);//70
    printf("Valor da variavel: %d\n", valor);//10
    printf("Endereco da variavel: %p\n", &valor);
    printf("Valor armazenado no ponteiro: %p\n", ptr); // Endereço
    printf("Valor apontado pelo ponteiro: %d\n", *ptr); // Desreferencia

    *ptr = 20;
    printf("Novo valor da variavel: %d\n", valor);
    valor = 50;
    printf("Novo valor da variavel: %d\n", valor);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr); 

    return 0;
}