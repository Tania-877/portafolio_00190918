#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nod;
Nod *pInicio;

void insertaralprincipio(int num) {
    Nod *nuevo = new Nod;
    nuevo->dato = num;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertaralFinal(int num) {
    Nod *nuevo = new Nod;
    nuevo->dato = num;
    nuevo->sig = NULL;

    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nod *p = pInicio;
        Nod *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void recorrer() {
    Nod *s = pInicio;

    while (s != NULL) {
        cout<< s->dato<< " " ;
        s = s->sig;
    }
}


struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}


void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "El arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "El subarbol ya existe por la izquierda" << endl;
    else
        a->izq = crearArbol(unDato);
}
void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "El arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "El subarbol ya existe por la derecha" << endl;
    else
        a->der = crearArbol(unDato);
}
void agregar(Arbol a, Nod *s){
    Arbol p=a;
    s=pInicio;

    while (s!= NULL){
    while(true){
        if(s->dato == 6){
        s=s->sig;
        }
        else if(s->dato<p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }

    if(s->dato < p->info)
        asignarIzq(p, s->dato);
    else if(s->dato > p->info)
        asignarDer(p, s->dato);

        s = s->sig;

}
}
void valoresarbol(Arbol a){
    if(a != NULL){
        valoresarbol(a->izq);
        cout << " " << a->info;
        valoresarbol(a->der);
    }
}
int main(){
Nod *puntero;
insertaralprincipio(6);
insertaralFinal(10);
insertaralFinal(1);
insertaralFinal(4);
insertaralFinal(5);
insertaralFinal(7);
insertaralFinal(2);
insertaralFinal(11);

cout << "Datos contenidos en la lista:";
recorrer();

Arbol arbol = crearArbol(6);
cout << endl;

agregar(arbol, puntero);

cout << "Datos contenidos en el arbol:";
valoresarbol(arbol);
cout << endl;

}
