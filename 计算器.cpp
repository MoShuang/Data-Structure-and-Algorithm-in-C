// ������.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	char input[256]; /*��������*/
	char number_string[30];
	unsigned int index=0;
	unsigned int to=0;
	size_t input_length=0;
	unsigned int number_length=0;
	double result=0.0;


while(strcmp(gets(input),"quit")!=0)
	{
		input_length=strlen(input);
		/*��������ַ����еĿո�*/
		/*�����ַ�����������ʽ*/
		for(to=0,index=0;index<=input_length;index++)
			if(*(input+index)!=' ')/*������ǿո��򽫱���������*/
				*(input+to++)=*(input+index);
			input_length=strlen(input);
			index=0;

			if(input[index]== '=')/*����������=*/
				index++;
			
		/*�������������*/ 
	
	}

	return 0;
}
