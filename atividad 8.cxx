#include <iostream>
using namespace std;

struct Tpila{
	float  elements[10];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 9){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
}
