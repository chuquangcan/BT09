#include <iostream>

using namespace std;

int main()
{
	int* p = new int ();
	int* p2 = p;
	*p = 10;
	delete p; 
	*p2 = 100;
	cout << *p2;
	// delete p2; do minh khong cap phat bo nho dong cho con tro p2 nen minh khong co quyen giai phong no
}
