#include <iostream>
#include <stdio.h>


//using namespace std;//������������׼��������ռ䣻using �൱��import��
//�������������е�cout,endl�����䶨��� 
//��Ϊ��ͬ�����ռ���ܻ���ͬ���������Խ�����ʱ������ͻ���� 
/*
#include<iostream>�±�׼�涨�� 
��ʹ��#include<iostream.h>�Ͳ���д 
*/
using std::cin;
using std::string;
using std::cout;
using std::endl;

int x = 0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	int x = 20;
    std:cin >> x;//C++�и�ʽ�������� 
    cout << x <<endl;
    printf("%d", x);//C�еĸ�ʽ������� 
	int y = 0;
	{
		int x = 30;
		if(x=30) int y = 30;
		if(x=20) int y = 20;
		cout<<"x="<<x<<endl;//C++��׼�����䣨������� ��������ַ���x=�����������ֵx����������з�(endl) 
		cout<<"y="<<y<<endl;//���⣬ֻ�л����������ͼ��ַ�������ֱ��ʹ��cout���;<<ֻ�������� 
	}
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"x="<<::x<<endl;//�˴�ָ���ȫ�ֱ����� 
	cout<<"hello C++"<<endl;
	printf("%d", x);
	system("pause");
	return 0;
}
