#include <iostream>
#include <stdio.h>


//using namespace std;//即加载整个标准库的命名空间；using 相当于import；
//例如下述代码中的cout,endl就是其定义的 
//因为不同命名空间可能会有同名现象，用以解决变成时命名冲突问题 
/*
#include<iostream>新标准规定的 
但使用#include<iostream.h>就不用写 
*/
using std::cin;
using std::string;
using std::cout;
using std::endl;

int x = 0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	int x = 20;
    std:cin >> x;//C++中格式化输入流 
    cout << x <<endl;
    printf("%d", x);//C中的格式化输出流 
	int y = 0;
	{
		int x = 30;
		if(x=30) int y = 30;
		if(x=20) int y = 20;
		cout<<"x="<<x<<endl;//C++标准输出语句（输出流） ：先输出字符“x=”，在输出数值x，在输出换行符(endl) 
		cout<<"y="<<y<<endl;//此外，只有基本数据类型及字符串可以直接使用cout输出;<<只起间隔作用 
	}
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"x="<<::x<<endl;//此处指输出全局变量ｘ 
	cout<<"hello C++"<<endl;
	printf("%d", x);
	system("pause");
	return 0;
}
