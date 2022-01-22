//#include <iostream>
//#include <fstream>
//#include <conio.h>
//#include <cstdio> 
//#include <ctime>
//using namespace std;
//
//void Shell(int a[], int n) //сортировка Шелла
//{
//	int d = n, count = 0;
//	d = d / 2;
//	while (d > 0)
//	{
//		for (int i = 0; i < n - d; i++)
//		{
//			int j = i;
//			while (j >= 0 && a[j] > a[j + d])
//			{
//				count = a[j];
//				a[j] = a[j + d];
//				a[j + d] = count;
//				j--;
//			}
//		}
//		d = d / 2;
//	}
//	//for (int i = 0; i < n; i++) cout << a[i] << " "; //вывод массива
//}
//int main()
//{
//	int n=100,n2=1000,n3=2000,n4=5000,n5=10000;
//	setlocale(LC_ALL, "Rus");
//	ofstream shell("shell.xls", ios::app);
//	if (!shell)
//		exit(1);
//	int* A = new int[n]; //объявление динамического массива
//	int* A2 = new int[n2];
//	int* A3= new int[n3];
//	int* A4 = new int[n4];
//	int* A5 = new int[n5];
//	for (int i = 0; i < n; i++) //ввод массива
//	{
//		A[i] = rand() % 9 + 1;
//	}
//	for (int i = 0; i < n2; i++) //ввод массива
//	{
//		A2[i] = rand() % 9 + 1;
//	}
//	for (int i = 0; i < n3; i++) //ввод массива
//	{
//		A3[i] = rand() % 9 + 1;
//	}
//	for (int i = 0; i < n4; i++) //ввод массива
//	{
//		A4[i] = rand() % 9 + 1;
//	}
//	for (int i = 0; i < n5; i++) //ввод массива
//	{
//		A5[i] = rand() % 9 + 1;
//	}
//
//	double seconds = 0, seconds2 = 0, seconds3 = 0, seconds4 = 0, seconds5 = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		Shell(A, n);
//		clock_t end = clock();
//		seconds += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		Shell(A2, n2);
//		clock_t end = clock();
//		seconds2 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		Shell(A3, n3);
//		clock_t end = clock();
//		seconds3 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		Shell(A4, n4);
//		clock_t end = clock();
//		seconds4 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		clock_t start = clock();
//		Shell(A5, n5);
//		clock_t end = clock();
//		seconds5 += (double)(end - start) / CLOCKS_PER_SEC;
//	}
//	
//	shell << seconds / 10 << "\t" << seconds2 / 10 << "\t" << seconds3 / 10 << "\t" << seconds4 / 10 << "\t" << seconds5 / 10 << "\n";
//	shell << n << "\t" << n2 << "\t" << n3 << "\t" << n4 << "\t" << n5 << "\n";
//
//	//Shell(A, n);
//	delete[] A,A2,A3,A4,A5; //освобождение памяти
//
//	system("PAUSE");
//	return 0;
//}