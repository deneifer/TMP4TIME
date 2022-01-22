#include <iostream>
#include <vector>
#include <fstream>
#include <conio.h>
#include <cstdio> 
#include <ctime>    
#include <algorithm>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int comp(const void *a,const void * b)
{
	return (*(int*)a - *(int*)b);
}
void count(int* a, int n, int k) //сортировка подсчетом 
{
	int* F = new int[k + 1];
	for (int i = 0; i < k + 1; i++) //ввод массива
	{
		F[i] = 0;
	}
	for (int i = 0;i < n;i++)
	{

		F[a[i]] += 1;
	}

	int y = 0;

	for (int x = 0; x < k + 1;x++)
	{
		for (int i = 0;i < F[x];i++)
		{
			a[y] = x;
			y += 1;
		}

	}
}
void Shell(int a[], int n) //сортировка Шелла
	{
		int d = n, count = 0;
		d = d / 2;
		while (d > 0)
		{
			for (int i = 0; i < n - d; i++)
			{
				int j = i;
				while (j >= 0 && a[j] > a[j + d])
				{
					count = a[j];
					a[j] = a[j + d];
					a[j + d] = count;
					j--;
				}
			}
			d = d / 2;
		}
		//for (int i = 0; i < n; i++) cout << a[i] << " "; //вывод массива
	}
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите рамзер массива: ";


	/*ofstream countt("countt.xls", ios::app);
		if (!countt)
			exit(1);
	ofstream shell("shell.xls", ios::app);
		if (!shell)
			exit(1);*/
	ofstream file("file.xls", ios::app);
	if (!file)
		exit(1);

	vector <int> vec, vec2, vec3, vec4, vec5;
	const int n = 100, n2 = 1000, n3 = 2000, n4 = 5000, n5 = 10000;
	int k; cin >> k;
	double seconds=0.0,seconds2=0.0, seconds3=0.0, seconds4=0.0, seconds5=0.0;
	
	/////---------------count-----------------------------
	int* A = new int[n];
	int* A2 = new int[n2];
	int* A3 = new int[n3];
	int* A4 = new int[n4];
	int* A5 = new int[n5];

	int* B = new int[n]; //объявление динамического массива
	int* B2 = new int[n2];
	int* B3 = new int[n3];
	int* B4 = new int[n4];
	int* B5 = new int[n5];

	int* C = new int[n];
	int* C2 = new int[n2];
	int* C3 = new int[n3];
	int* C4 = new int[n4];
	int* C5 = new int[n5];


	for (int i = 0; i < n; i++) //ввод массива
	{
		A[i]=B[i]=C[i] = rand() % k + 1;
	}
	for (int i = 0; i < n2; i++) //ввод массива
	{
		A2[i] = B2[i] = C2[i] = rand() % k + 1;
	}
	for (int i = 0; i < n3; i++) //ввод массива
	{
		A3[i] = B3[i] = C3[i] = rand() % k + 1;
	}
	for (int i = 0; i < n4; i++) //ввод массива
	{
		A4[i] = B4[i] = C4[i] = rand() % k + 1;
	}
	for (int i = 0; i < n5; i++) //ввод массива
	{
		A5[i] = B5[i] = C5[i] = rand() % k + 1;
	}

	for (int i = 0;i < 10;i++)
	{
		//auto start = chrono::steady_clock::now();
		//clock_t start = clock();
		clock_t begin = clock();

		count(A, n, k);

		clock_t end = clock();
		double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
		seconds = seconds +time_spent;
	}
	for (int i = 0;i < 10;i++)
	{
		clock_t begin = clock();

		count(A2, n2, k);

		clock_t end = clock();
		double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
		seconds2 = seconds2 + time_spent;
	}
		for (int i = 0;i < 10;i++)
		{
			clock_t begin = clock();

			count(A3, n3, k);

			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds3 = seconds3 + time_spent;
		}
		for (int i = 0;i < 10;i++)
		{
			clock_t begin = clock();

			count(A4, n4, k);

			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds4 = seconds4 + time_spent;
		}
		for (int i = 0;i < 1;i++)
		{
			ofstream afile ("123.txt");
			clock_t begin = clock();

			count(A5, n5, k);

			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds5 = seconds5 + time_spent;
			ofstream bfile("124.txt");
		}
		
		
		file << endl << seconds/10.0<< "\t" << seconds2/10.0<< "\t" << seconds3/10.0 << "\t" << seconds4/10.0  << "\t" << seconds5/10.0 << "\t" << "Подсчетом" << "\n";
		//seconds = 0, seconds2 = 0, seconds3 = 0, seconds4 = 0, seconds5 = 0;


		////------------------------biblioteka----------------------------------
		seconds = 0.0, seconds2 = 0.0, seconds3 = 0.0, seconds4 = 0.0, seconds5 = 0.0;
		/*int a;
		for (int i = 0; i < n; i++) {
			a = rand() % 100 + 1;
			vec.push_back(a);
		}
		for (int i = 0; i < n2; i++) {
			a = rand() % 100 + 1;
			vec2.push_back(a);
		}
		for (int i = 0; i < n3; i++) {
			a = rand() % 100 + 1;
			vec3.push_back(a);
		}
		for (int i = 0; i < n4; i++) {
			a = rand() % 100 + 1;
			vec4.push_back(a);
		}
		for (int i = 0; i < n5; i++) {
			a = rand() % 100 + 1;
			vec5.push_back(a);
		}*/

		//int* C = new int[n];
		//int* C2 = new int[n2];
		//int* C3 = new int[n3];
		//int* C4 = new int[n4];
		//int* C5 = new int[n5];
		
		//for (int i = 0; i < n; i++) //ввод массива
		//{
		//	C[i] = rand() % 100 + 1;
		//}
		//for (int i = 0; i < n2; i++) //ввод массива
		//{
		//	C2[i] = rand() % 100 + 1;
		//}
		//for (int i = 0; i < n3; i++) //ввод массива
		//{
		//	C3[i] = rand() % 100 + 1;
		//}
		//for (int i = 0; i < n4; i++) //ввод массива
		//{
		//	C4[i] = rand() % 100 + 1;
		//}
		//for (int i = 0; i < n5; i++) //ввод массива
		//{
		//	C5[i] = rand() % 100 + 1;
		//}
		
				
				for (int i = 0;i < 10;i++)
				{
					
					clock_t begin = clock();
					//qsort(C, n, sizeof(int), comp);
					sort(C,C+n);
					clock_t end = clock();
					double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
					seconds = seconds + time_spent;
				
				}
				for (int i = 0;i < 10;i++)
				{
					clock_t begin = clock();
					sort(C3, C3 + n3);
					clock_t end = clock();
					double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
					seconds2 = seconds2 + time_spent;
				}
				for (int i = 0;i < 10;i++)
				{
					clock_t begin = clock();
					sort(C3, C3 + n3);
					clock_t end = clock();
					double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
					seconds3 = seconds3 + time_spent;
				}
				for (int i = 0;i < 10;i++)
				{
					clock_t begin = clock();
					sort(C4, C4 + n4);
					clock_t end = clock();
					double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
					seconds4 = seconds4 + time_spent;
				}
				for (int i = 0;i < 1;i++)
				{
					ofstream cfile("134.txt");
					clock_t begin = clock();
					//qsort(C5, n5, sizeof(int), comp);
					sort(C5, C5 + n5);
					clock_t end = clock();
					double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
					seconds5 = seconds5 + time_spent;
					ofstream dfile("144.txt");
				}
		
		
				file << seconds/10.0  << "\t" << seconds2/10.0 << "\t" << seconds3/10.0 << "\t" << seconds4/10.0 << "\t" << seconds5/10.0  << "\t" << "Библиотечная"<< "\n";
				seconds = 0.0, seconds2 = 0.0, seconds3 = 0.0, seconds4 = 0.0, seconds5 = 0.0;
		///------------shell------------------

		
		//for (int i = 0; i < n; i++) //ввод массива
		//{
		//	B[i] = rand() % 100000 + 1;
		//}
		//for (int i = 0; i < n2; i++) //ввод массива
		//{
		//	B2[i] = rand() % 100000 + 1;
		//}
		//for (int i = 0; i < n3; i++) //ввод массива
		//{
		//	B3[i] = rand() % 100000 + 1;
		//}
		//for (int i = 0; i < n4; i++) //ввод массива
		//{
		//	B4[i] = rand() % 100000 + 1;
		//}
		//for (int i = 0; i < n5; i++) //ввод массива
		//{
		//	B5[i] = rand() % 100000 + 1;
		//}

		for (int i = 0;i < 10;i++)
		{
			clock_t begin = clock();
			Shell(B, n);
			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds = seconds + time_spent;
		}
		for (int i = 0;i < 10;i++)
		{
			clock_t begin = clock();
			Shell(B2, n2);
			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds2 = seconds2 + time_spent;
		}
		for (int i = 0;i < 10;i++)
		{
			clock_t begin = clock();
			Shell(B3, n3);
			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds3 = seconds3 + time_spent;
		}
		for (int i = 0;i < 10;i++)
		{
			clock_t begin = clock();
			Shell(B4, n4);
			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds4 = seconds4 + time_spent;
		}
		for (int i = 0;i < 1;i++)
		{
			ofstream efile("224.txt");
			clock_t begin = clock();
			Shell(B5, n5);
			clock_t end = clock();
			double time_spent = (double)((double)end - (double)begin) / CLOCKS_PER_SEC;
			seconds5 = seconds5 + time_spent;
			ofstream gfile("324.txt");
		}

		file << seconds/10.0 << "\t" << seconds2/10.0 << "\t" << seconds3/10.0 << "\t" << seconds4/10.0 << "\t" << seconds5 /10.0<< "\t" << "Шелл" << "\n";
		//seconds = 0, seconds2 = 0, seconds3 = 0, seconds4 = 0, seconds5 = 0;




		file << n << "\t" << n2 << "\t" << n3 << "\t" << n4 << "\t" << n5 << "\n";

		for (int i = 0;i < n3;i++)
		{
			cout << A3[i] << " ";
		}

		delete[] A, A2, A3, A4, A5;
		delete[] B, B2, B3, B4, B5;
		delete[] C, C2, C3, C4, C5;
		system("PAUSE");
		return 0;
	
}