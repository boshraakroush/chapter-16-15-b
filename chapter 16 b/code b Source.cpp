//boshra akroush 
//cis 1202 201
//april 28 2023

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T half(T num)
{
	return num / 2;
}

int ihalf(int i)
{	
	static_cast<float>(i);
	float x = i / 2.0;
	float rounded = round(x);
	return rounded;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3; 

	cout << half(a) << endl;
	cout << half(b) << endl; 
	cout << ihalf(c) << endl; 

}