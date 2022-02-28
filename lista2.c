#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(int candidato){
    if(candidato == 0 || candidato==1) return 0;
    if (candidato==4) return 0;
    for (int x = 2; x < candidato / 2; x++) {
        // Si es divisible por cualquiera de estos números, no
        // es primo
        if (candidato % x == 0) return 0;
    }
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return 1;
}



typedef struct Numero{ //listas simples
    int numer;
}Numero;

typedef struct Nodo{
    Numero numero;
    struct Nodo* sig;
}Nodo;

typedef struct Lista{
    Nodo* cabeza;
    int longitud;
}Lista;

Nodo* crear(int maximo,Numero * num) { //creamos nodo de la lista

    Nodo *nodo = (Nodo *) malloc(sizeof(nodo));
    for (int i = 2; i < maximo; i++) {
        if(primo(i) == 0) {
           nodo->numero,num->numer;
            nodo->sig = NULL;
            return nodo;
        }else{
            return 0;
        }
    }
}
    int contar(Lista* lista){ //longitud de la lista
        return lista->longitud;

}
void ImprimirElementosLista (Lista *a){
    Lista *aux =a;
    int i=0;
    while(aux!=NULL){
        printf("elemento de la lista %d:%d\n",i++,aux->);
    }
}

int main() {
    int valor;
    Numero *numero;
    Lista * lista;
    printf("hasta que numero quieres calcular\n");
    scanf("%d", &valor);
    crear(valor, numero);
    return 0;
}

