#include <iostream>
#include <TemplateDemo.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Ä£°å
template <class T> A <T> :: A(){}

template <class T> A <T> :: g(T a, T b){
	return a + b;
} 

int main(int argc, char** argv) {
	A<int> a;
	cout<<a.g(2, 3.2)<<endl<<5;
	return 0;
	system("Pause");
}
