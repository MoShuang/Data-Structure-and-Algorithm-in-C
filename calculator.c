#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	char input[256];
	unsigned int index=0;/*����ָ��*/
	unsigned int to=0;/*����ָ��*/
	size_t input_length=0;/*�����ַ����ĳ���*/
	char number_string[30];
	unsigned int number_lengt=0;
	
	
	while(strcmp(gets(input),"quit")!=0)
	{
		input_length=strlen(input);/*���������ַ���*/
		/*�Ƴ��ո�*/
		/*�������һ���ַ�*/
		for(to=0,index=0;index<=input_length;index++) 
		if(*(index+input)!='  ')/*���û�пո�*/
		*(input+to++)=*(input+index);/*�����ַ�*/
		input_length=strlen(input);/*�õ��µ��ַ�������*/
		index=0; /*�ɵ�һ���ַ���ʼ*/
		/*code to implement the calculator*/
	}
	return 0;
}
