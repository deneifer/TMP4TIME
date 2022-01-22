//#include <cstdio> 
//#include <iostream>
//#include <vector>     
//#include <algorithm> 
//#include <iomanip>
//#include <fstream>
//#include <conio.h>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//
//    ofstream file("file.xls", ios::app);
//    if (!file)
//        exit(1);
//    
//    int n=100,n2=1000,n3=2000,n4=5000,n5=10000; vector <int> vec,vec2,vec3,vec4,vec5;
//
//    cout << "¬ведите количество элементов последовательности: "; 
//    n=100;
//
//    int a;
//    for (int i = 0; i < n; i++) {
//        a=rand()%10+1;
//        vec.push_back(a);
//    }
//    for (int i = 0; i < n2; i++) {
//        a = rand() % 10 + 1;
//        vec2.push_back(a);
//    }
//    for (int i = 0; i < n3; i++) {
//        a = rand() % 10 + 1;
//        vec3.push_back(a);
//    }
//    for (int i = 0; i < n4; i++) {
//        a = rand() % 10 + 1;
//        vec4.push_back(a);
//    }
//    for (int i = 0; i < n5; i++) {
//        a = rand() % 10 + 1;
//        vec5.push_back(a);
//    }
//
//   /* cout << "¬от как выгл€дит последовательность до: ";
//
//    for (int i = 0; i < n; i++) {
//        cout << vec[i] << " ";
//    }*/
//
//    double seconds=0, seconds2=0, seconds3=0,seconds4=0,seconds5=0;
//    for (int i = 0;i < 10;i++)
//    {
//        clock_t start = clock();
//        sort(vec.begin(), vec.end());  // сортировка
//        clock_t end = clock();
//        seconds += (double)(end - start) / CLOCKS_PER_SEC;
//    }
//    for (int i = 0;i < 10;i++)
//    {
//        clock_t start = clock();
//        sort(vec2.begin(), vec2.end());  // сортировка
//        clock_t end = clock();
//        seconds2 += (double)(end - start) / CLOCKS_PER_SEC;
//    }
//    for (int i = 0;i < 10;i++)
//    {
//        clock_t start = clock();
//        sort(vec3.begin(), vec3.end());  // сортировка
//        clock_t end = clock();
//        seconds3 += (double)(end - start) / CLOCKS_PER_SEC;
//    }
//    for (int i = 0;i < 10;i++)
//    {
//        clock_t start = clock();
//        sort(vec4.begin(), vec4.end());  // сортировка
//        clock_t end = clock();
//        seconds4 += (double)(end - start) / CLOCKS_PER_SEC;
//    }
//    for (int i = 0;i < 10;i++)
//    {
//        clock_t start = clock();
//        sort(vec5.begin(), vec5.end());  // сортировка
//        clock_t end = clock();
//        seconds5 += (double)(end - start) / CLOCKS_PER_SEC;
//    }
//    /*cout << endl << "ѕосле сортировки: ";
//
//    for (int i = 0; i < n; i++) {
//        cout << vec[i] << " ";
//    }*/
//
//    
//    file << seconds/10 <<"\t" <<seconds2 / 10 << "\t" << seconds3 / 10<<"\t"  << seconds4 / 10<<"\t"  << seconds5 / 10<<"\n";
//    file << n << "\t" << n2<< "\t" << n3<< "\t" << n4 << "\t" << n5 << "\n";
//   // printf("The time: %f seconds\n", seconds);
//
//    system("pause");
//    return 0;
//}