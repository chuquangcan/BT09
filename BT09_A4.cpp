#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >>  n;
	int* pointer = new int ();
	if (n%2==0)
	{
		int m = n/2;
		pointer = &m;
		cout << &m << endl;
		m = 3;
	}
	int i;
	cout << &i << endl;
	cerr << *pointer;
	// ta van co the truy cap vao dia chi cua bien dia phuong do va dia chi do van co gia tri
	// rút ra duoc la khi giai phong bien local thi chi xoa ten dinh danh cua bien ma khong xoa dia chi hay gia tri cua bien
	
	return 0;
}
