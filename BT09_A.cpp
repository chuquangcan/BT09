#include <iostream>
#include <cstring>

using namespace std;

int sizeofS(const char* a)
{
	int sizea = 0;
	for (int i=0; a[i]!='\0'; i++)
	{
		sizea++;
	}
	return sizea;
}

char* concat(const char* a, const char* b)
{
	int sizea = sizeofS(a);
	int sizeb = sizeofS(b);
	cout << sizea << " " << sizeb << endl;
	char* c = new char [sizea + sizeb];
	strcpy(c, a);
	int k = 0;
	for (int i = sizea; i<sizeb+sizea; i++)
	{
		c[i] = b[k];
		k++;
	}
	return c;
}

int main()
{
	char* a = "hello";
	char* b = " world";
	char* c = concat(a, b);
	for (int i=0; i<sizeofS(c); i++)
	{
		cout << c[i];
	}
}
