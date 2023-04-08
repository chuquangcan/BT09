#include <iostream>

using namespace std;

int main()
{
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	//delete c; // do minh khong cap phat bo nho dong cho con tro c nen khong co quyen giai phong no
	cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
