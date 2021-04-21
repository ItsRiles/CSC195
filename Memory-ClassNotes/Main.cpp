#include <iostream>

using namespace std;

void set(int& i)
{
	i = 100;
}

void swap(int i1, int i2)
{

}

int main()
{
	int i1 = 10;
	int i2 = 20;

	int& r = i1;
	int* p = nullptr;
	p = &i1;


	r = 30;
	
	set(i1);

	cout << &i1 << endl;
	cout << r << endl;
	cout << p << endl;
	cout << *p << endl;

	int* p1 = new int;

	cout << p1 << endl;


	char* c1 = new char;
	char* c2 = new char;

	cout << std::hex << (unsigned int)c1 << endl;
	cout << std::hex << (unsigned int)c2 << endl;

	int* a = new int[5];
	for (int i = 0; i < 5; i++) {
		cout << &a[i] << endl;
	}
	delete[] a;

	int ar[4] = { 1, 2, 3, 4 };

	cout << ar[0] << endl;
}