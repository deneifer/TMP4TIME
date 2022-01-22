//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <conio.h>
//#include <cstdio> 
//#include <ctime>
//using namespace std;
//
//void count(int* a, int n, int k) //сортировка подсчетом 
//{
//	int* F = new int[k + 1];
//	for (int i = 0; i < k + 1; i++) //ввод массива
//	{
//		F[i] = 0;
//	}
//	for (int i = 0;i < n;i++)
//	{
//
//		F[a[i]] += 1;
//	}
//
//	int y = 0;
//
//	for (int x = 0; x < k + 1;x++)
//	{
//		for (int i = 0;i < F[x];i++)
//		{
//			a[y] = x;
//			y += 1;
//		}
//
//	}
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	cout << "Введите рамзер массива: ";
//	ofstream countt("countt.xls", ios::app);
//	if (!countt)
//		exit(1);
//	int n = 100, n2 = 1000, n3 = 2000, n4 = 5000, n5 = 10000;
//	//cout << "Введите максимальное значение массива: ";
//	int k; cin >> k;
//	int* A = new int[n]; //объявление динамического массива
//	int* A2 = new int[n2];
//	int* A3= new int[n3];
//	int* A4 = new int[n4];
//	int* A5 = new int[n5];
//	for (int i = 0; i < n; i++) //ввод массива
//	{
//		A[i] = rand() % k + 1;
//	}
//	for (int i = 0; i < n2; i++) //ввод массива
//	{
//		A2[i] = rand() % k + 1;
//	}
//	for (int i = 0; i < n3; i++) //ввод массива
//	{
//		A3[i] = rand() % k + 1;
//	}
//	for (int i = 0; i < n4; i++) //ввод массива
//	{
//		A4[i] = rand() % k + 1;
//	}
//	for (int i = 0; i < n5; i++) //ввод массива
//	{
//		A5[i] = rand() % k + 1;
//	}
//	//for (int i = 0; i < n; i++) //ввод массива
//	//{
//	//	cout << A[i] << " ";
//	//}
//	//cout << endl;
//	double seconds = 0, seconds2 = 0, seconds3 = 0, seconds4 = 0, seconds5 = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		count(A, n,k);
//		clock_t end = clock();
//		seconds += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		count(A2, n2, k);
//		clock_t end = clock();
//		seconds2 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		count(A3, n3,k);
//		clock_t end = clock();
//		seconds3 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		count(A4, n4,k);
//		clock_t end = clock();
//		seconds4 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		count(A5, n5,k);
//		clock_t end = clock();
//		seconds5 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//
//	countt << seconds / 10 << "\t" << seconds2 / 10 << "\t" << seconds3 / 10 << "\t" << seconds4 / 10 << "\t" << seconds5 / 10 << "\n";
//	countt << n << "\t" << n2 << "\t" << n3 << "\t" << n4 << "\t" << n5 << "\n";
//
//	//Shell(A, n);
//	delete[] A, A2, A3, A4, A5;
//	
//
//	//for (int i = 0; i < n; i++) //ввод массива
//	//{
//	//	cout << A[i] << " ";
//	//}
//
//	//cout << endl;
//	//освобождение памяти
//	system("PAUSE");
//	return 0;
//}