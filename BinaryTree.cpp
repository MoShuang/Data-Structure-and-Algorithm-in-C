#include <iostream>
#include <malloc.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {//���ݽڵ� 
	int key;
	char info[10];
}elementype;

typedef struct node{//���ڵ� 
	elementype data;
	node *lchild, *rchild;
}node, *bitptr;

bitptr Search_Insert(bitptr T, elementype e){
	
}

int main(int argc, char** argv) {
	bitptr T = NULL;
	T = (bitptr)malloc(sizeof(node));
	T->data.key = 100;
	cout<<T->data.key;

	system("Pause");//�ó������е���������ͣ������ֹͣ 
	return 0;
}

