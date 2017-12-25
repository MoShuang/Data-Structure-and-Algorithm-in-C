#include <iostream>
#include "stdlib.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//This is just a linkedlist exercise -ShuangMo-8/8/2017

//Define the node for id card information
typedef struct Linknode{
	int data;
	Linknode *next;
	//struct Linknode *next;
}Linknode, *LinkList;

typedef union UNode{
	int x;
	double y;
	UNode *next;
}UNode, *Unode;

//Define the creating function
//1th to use tail insertion
LinkList CreatList(LinkList L){
	//L = (LinkList)(malloc(sizeof(Linknode)));
	//Linknode *s, *r = L; the two equal
	LinkList s, r = L;
	//s = (LinkList)(malloc(sizeof(Linknode)));
	printf("Please enter the number(enter 999 to end!):\n");
	int x = 0;
	scanf("%d", &x);
	while(x != 999){
		s = (LinkList)(malloc(sizeof(Linknode)));
	    s->data = x;
	    r->next = s;
	    
	    //r = s->next;
	    r = s;
	    //printf("\n");
	    scanf("%d", &x);
	}
	//r = NULL;
	r->next = NULL;
	return L;
}

//Define Print function
void Print(LinkList L){
	//printf("This is start of print");
	L = L->next;//skip the head
	while(L != NULL){
		//printf("I  can print out" );
	    printf("%d\n", L->data);
	    L = L->next;
    }
}

int main(int argc, char** argv) {
	LinkList L = (LinkList)(malloc(sizeof(Linknode)));
	L->next = NULL;
	L->data = 0;
	L = NULL;
	//CreatList(L);
	//Print(L);
	UNode *U = (Unode)(malloc(sizeof(UNode)));
	U->x = 78;
	U->y = 45.45;
	printf("%lf\t%d", U->y, U->x);
	
	return 0;
}


