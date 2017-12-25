#include <stdio.h>
#include <stdlib.h>
#define maxvtxnum 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int adjmatrix [maxvtxnum][maxvtxnum];
int visited[maxvtxnum], path[maxvtxnum]; //在此处定义为全局变量，便于递归时访问 
adjmatrix A;
adjmatrix C;
void Change_1(adjmatrix A, adjmatrix C, int n){//方法1：计6的思路:遍历DFS 
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
void DFSTraverse(adjmatrix A){//图遍历DFS算法实现 
	int i,j;
	for(i = 0; i < maxvtxnum; i++)//初始化访问矩阵 
	    visited[i] = 0;
	for(i = 0; i < maxvtxnum; i++){//从0开始遍历  
	    if(visited[i] == 0)
	        DFS(A, i);
    }
} 

void DFS(adjmatrix A, int i){//DFS递归体 
	//访问顶点i 
	printf("当前是顶点：%d\n", i);
	visited[i] = 1;
	int j = 0;
	while(1){
		if(A[i][j] == 1 && visited[j] == 0){//对i未被访问过的邻接点 
		    printf("现在递归是时间\n");
	        DFS(A, j);
	    j++;
	    if(j == 5) break;
	    }
	}
}

void Change_2(adjmatrix A, adjmatrix C, int n){//方法2：吴彦祖的思路 
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
void Change_3(adjmatrix A, adjmatrix C, int n){//方法3：莫苏昂的思路
    int i;
	//for(i = 0; i < n; i++){
		
	 
}
 
int main(int argc, char *argv[]){
	int i = 0;//C99标准里不能在for循环内初始化变量 
	int j = 0;
	for(i = 0; i < 10; ++i){//初始化邻接矩阵和路径矩阵 
	    for(j = 0; j < 10; ++j)
	        A[i][j] = 65536, C[i][j] = 0;
	        //此处i,j的值在上一次用完后会变化;并不是，还是循环的作用域问题：若没有{}仅作用在其后一行内 
    }
    
	for(i = 0; i < 4; i++){//矩阵赋值 
	    A[i][i] = 0;
	    A[i][i+1] = 1;
	}
	A[0][3] = 1;//添加顶点1到顶点4的弧 
	printf("邻接矩阵输出调试\n");
	for(i = 0; i < 10; i++){//邻接矩阵输出调试 
		printf("\n");
	    for(j = 0; j < 10; j++)
	        printf("%d\t", A[i][j]); 
    }
    printf("路径矩阵输出调试\n");
    for(i = 0; i < 10; i++){//邻接矩阵输出
		printf("\n");
	    for(j = 0; j < 10; j++)
	        printf("%d\t", C[i][j]);
    }
    printf("处理后结果：\n");
    //Change_2(A, C, 5);
    DFSTraverse(A);
    for(i = 0; i < 10; i++){//路径矩阵输出
	    printf("\n");
        for(j = 0; j < 10; j++)
            printf("%d\t", C[i][j]);
    }
	return 0;
	system("Pause");
}
