#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	char input[256];
	unsigned int index=0;/*流动指针*/
	unsigned int to=0;/*复制指针*/
	size_t input_length=0;/*输入字符串的长度*/
	char number_string[30];
	unsigned int number_lengt=0;
	
	
	while(strcmp(gets(input),"quit")!=0)
	{
		input_length=strlen(input);/*获得输入的字符串*/
		/*移除空格*/
		/*加入最后一个字符*/
		for(to=0,index=0;index<=input_length;index++) 
		if(*(index+input)!='  ')/*如果没有空格*/
		*(input+to++)=*(input+index);/*复制字符*/
		input_length=strlen(input);/*得到新的字符串长度*/
		index=0; /*由第一个字符开始*/
		/*code to implement the calculator*/
	}
	return 0;
}
