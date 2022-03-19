#include<iostream>
#include<math.h>
using namespace std;

int penambahan (int a, int b)
{
	int c=a+b;
	return c;
}
int pengurangan (int d, int e)
{
	int f=d-e;
	return f;
}
int perkalian (int g, int h)
{
	int i=g*h;
	return i;
}
double pembagian (double j, double k)
{
	double l=j/k;
	return l;
}
int pangkat(int m, int n)
{
	int o=pow(m,n);
	return o;
}
double akarpangkat(double p)
{
	double q=sqrt(p);
	return q;
}
int main()
{
	int a,b,d,e,g,h,m,n, menu;
	double j,k,p;
	string mulai;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"                       PROGRAM KALKULATOR"<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"\nMenu Operasi :"<<endl;
	cout<<" 1. Penambahan"<<endl;
	cout<<" 2. Pengurangan"<<endl;
	cout<<" 3. Perkalian"<<endl;
	cout<<" 4. Pembagian"<<endl;
	cout<<" 5. Perpangkatan"<<endl;
	cout<<" 6. Akar pangkat"<<endl;
	cout<<" 7. Keluar"<<endl;
	cout<<"\n----------------------------------------------------------------"<<endl;
	cout<<"Ketik 'mulai' untuk menggunakan program kalkulator : ";
	cin>>mulai;
}
