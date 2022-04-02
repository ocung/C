#include<stdio.h>
#define MAX 2

typedef struct {
	int item[MAX];
	int count;
}stack;

void push (stack *s, int x);
void pop (stack *s);
void play(stack *s);

void play (stack *s){
	int x=0;
	while (x != s->count){
	printf ("%d",s->item[x]);
	x++;
	}
}

void push (stack *s, int x){
	if(s->count==MAX){
		printf ("Penuh");
	}else{
		s->item[s->count]=x;
		s->count++;
	}
}

void pop (stack *s){
	int temp;
	if(s->count==0){
		printf ("kosong");
	}else{
	s->count--;
	
	}
}

int main (){
	stack s;
	s.count=0;
	
	push(&s,1);
	push(&s,2);
	play(&s);
	pop(&s);
	printf ("\n");
	play(&s);

	return 0;
}
