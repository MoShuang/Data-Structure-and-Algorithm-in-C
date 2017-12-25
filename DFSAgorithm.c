#include <stdio.h>
#include <stdlib.h>
#define maxvtxnum 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int adjmatrix [maxvtxnum][maxvtxnum];
int visited[maxvtxnum], path[maxvtxnum]; //�ڴ˴�����Ϊȫ�ֱ��������ڵݹ�ʱ���� 
adjmatrix A;
adjmatrix C;
void Change_1(adjmatrix A, adjmatrix C, int n){//����1����6��˼·:����DFS 
	int i, k;
	for(i = 0; i < n; i++)
	    visited[i] = 0;
	for(k = 0; k < n; k++){
        if(visited[k] == 0){
        	i = k;
        	//DFS(A, C, i, visited);
		}
	}
}
void DFSTraverse(adjmatrix A){//ͼ����DFS�㷨ʵ�� 
	int i,j;
	for(i = 0; i < maxvtxnum; i++)//��ʼ�����ʾ��� 
	    visited[i] = 0;
	for(i = 0; i < maxvtxnum; i++){//��0��ʼ����  
	    if(visited[i] == 0)
	        DFS(A, i);
    }
} 

void DFS(adjmatrix A, int i){//DFS�ݹ��� 
	//���ʶ���i 
	printf("��ǰ�Ƕ��㣺%d\n", i);
	visited[i] = 1;
	int j = 0;
	while(1){
		if(A[i][j] == 1 && visited[j] == 0){//��iδ�����ʹ����ڽӵ� 
		    printf("���ڵݹ���ʱ��\n");
	        DFS(A, j);
	    j++;
	    if(j == 5) break;
	    }
	}
}

void Change_2(adjmatrix A, adjmatrix C, int n){//����2���������˼· 
	int i;
    int ok[n];
    for(i = 0; i < n; i++)
        ok[i] = 1;
	for(i = 0; i < n; i++){
		if(ok[i]) continue;
		if(A[n][i]){
			C[n][i] = 1;
			Change_2(A, C, i);
		}
		ok[n] = 0;
	} 
} 
void Change_3(adjmatrix A, adjmatrix C, int n){//����3��Ī�հ���˼·
    int i;
	//for(i = 0; i < n; i++){
		
	 
}
 
int main(int argc, char *argv[]){
	int i = 0;//C99��׼�ﲻ����forѭ���ڳ�ʼ������ 
	int j = 0;
	for(i = 0; i < 10; ++i){//��ʼ���ڽӾ����·������ 
	    for(j = 0; j < 10; ++j)
	        A[i][j] = 65536, C[i][j] = 0;
	        //�˴�i,j��ֵ����һ��������仯;�����ǣ�����ѭ�������������⣺��û��{}�����������һ���� 
    }
    
	for(i = 0; i < 4; i++){//����ֵ 
	    A[i][i] = 0;
	    A[i][i+1] = 1;
	}
	A[0][3] = 1;//��Ӷ���1������4�Ļ� 
	printf("�ڽӾ����������\n");
	for(i = 0; i < 10; i++){//�ڽӾ���������� 
		printf("\n");
	    for(j = 0; j < 10; j++)
	        printf("%d\t", A[i][j]); 
    }
    printf("·�������������\n");
    for(i = 0; i < 10; i++){//�ڽӾ������
		printf("\n");
	    for(j = 0; j < 10; j++)
	        printf("%d\t", C[i][j]);
    }
    printf("���������\n");
    //Change_2(A, C, 5);
    DFSTraverse(A);
    for(i = 0; i < 10; i++){//·���������
	    printf("\n");
        for(j = 0; j < 10; j++)
            printf("%d\t", C[i][j]);
    }
	return 0;
	system("Pause");
}
