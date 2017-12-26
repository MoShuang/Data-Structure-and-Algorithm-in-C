// 计算器.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	char input[256]; /*输入内容*/
	char number_string[30];
	unsigned int index=0;
	unsigned int to=0;
	size_t input_length=0;
	unsigned int number_length=0;
	double result=0.0;


while(strcmp(gets(input),"quit")!=0)
	{
		input_length=strlen(input);
		/*清除输入字符串中的空格*/
		/*保存字符串的最终形式*/
		for(to=0,index=0;index<=input_length;index++)
			if(*(input+index)!=' ')/*如果不是空格，则将被复制下来*/
				*(input+to++)=*(input+index);
			input_length=strlen(input);
			index=0;

			if(input[index]== '=')/*如果输入的是=*/
				index++;
			
		/*补充计算器代码*/ 
	
	}

	return 0;
}
