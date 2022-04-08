#include "Quick_Sort.h"
#include "Merge_Sort.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;
using Quick::quick_sort;
using Merge::mergeSort;

void tset_quick_sort();
void tset_merge_sort();
void tset_heap_sort();

const int MAX_RAND = 32767;

const int RandomNum(int min_num = 0, int max_num = MAX_RAND){
	if(min_num > max_num)
		swap(min_num, max_num);
	int interval_num = max_num - min_num;
	if(interval_num <= 0) 
		return 0;
	else if(interval_num < MAX_RAND)
		return min_num + (rand() % interval_num);
	else
		return min_num + int(((rand() % MAX_RAND) * 1.0 / MAX_RAND) * interval_num);
}

int main() {

	int a;
	cout<< "1.quick 2.merge 3.heap : " << endl;
	cin >> a;
	
	//tset_quick_sort();
	if(a == 1){
		cout<< "QuickSort" << endl;
		tset_quick_sort();
	}

	//tset_merge_sort();
	if(a == 2){
		cout<< "MergeSort" << endl;
		cout << "----" << endl;
		tset_merge_sort();
	}

	if(a == 3){
		cout<< "HeapSort" << endl;
		cout << "----" << endl;
		tset_heap_sort();
	}
    return 0;
}

void tset_quick_sort() {
	int a[10];
	int b[100];
	int c[1000];
	int d[10000];
	int e[100000];

	for(int i = 0; i < 10; i++)
	{
		a[i] = RandomNum(1, 50000);
	}
	for(int i = 0; i < 100; i++)
	{
		b[i] = RandomNum(1, 50000);
	}
	for(int i = 0; i < 1000; i++)
	{
		c[i] = RandomNum(1, 50000);
	}
	for(int i = 0; i < 10000; i++)
	{
		d[i] = RandomNum(1, 50000);
	}
	for(int i = 0; i < 100000; i++)
	{
		e[i] = RandomNum(1, 50000);
	}

	quick_sort(a, 0, 9, [](int x, int y) {
		return x < y;
	});
	quick_sort(b, 0, 99, [](int x, int y) {
		return x < y;
	});
	quick_sort(c, 0, 999, [](int x, int y) {
		return x < y;
	});
	quick_sort(d, 0, 9999, [](int x, int y) {
		return x < y;
	});
	quick_sort(e, 0, 99999, [](int x, int y) {
		return x < y;
	});

	for(auto n : a) {
		cout << n << ' ';
	}
	cout << endl;
	for(auto n : b) {
		cout << n << ' ';
	}
	cout << endl;
	for(auto n : c) {
		cout << n << ' ';
	}
	cout << endl;
	for(auto n : d) {
		cout << n << ' ';
	}
	cout << endl;
	for(auto n : e) {
		cout << n << ' ';
	}
	cout << endl;
}

void tset_merge_sort() {

	srand( time(NULL) );
	int n;
  	int min = 1;
  	int max = 50000;

	int p[10];
	for(int i = 0; i < 10; i++)
	{	
		
		p[i] = rand() % (max - min + 1) + min;
		//cout << p[i] << ' ';
	}
	cout << endl;
	 n = sizeof(p)/sizeof(p[0]);
	mergeSort(p, 0, n-1);
	
	for(auto n : p) {
		cout << n << ' ';
	}
	cout << endl;

	int a[100];
	for(int i = 0; i < 100; i++)
	{	
		
		a[i] = rand() % (max - min + 1) + min;
		//cout << a[i] << ' ';
	}
	cout << endl;
	n = sizeof(a)/sizeof(a[0]);
	mergeSort(a, 0, n-1);
	
	for(auto n : a) {
		cout << n << ' ';
	}
	cout << endl;

	int b[1000];
	for(int i = 0; i < 1000; i++)
	{	
		
		b[i] = rand() % (max - min + 1) + min;
		//cout << b[i] << ' ';
	}
	cout << endl;
	n = sizeof(b)/sizeof(b[0]);
	mergeSort(b, 0, n-1);
	
	for(auto n : b) {
		cout << n << ' ';
	}
	cout << endl;

	int c[10000];
	for(int i = 0; i < 10000; i++)
	{	
		
		c[i] = rand() % (max - min + 1) + min;
		//cout << c[i] << ' ';
	}
	cout << endl;
	n = sizeof(c)/sizeof(c[0]);
	mergeSort(c, 0, n-1);
	
	for(auto n : c) {
		cout << n << ' ';
	}
	cout << endl;

	int d[100000];
	for(int i = 0; i < 100000; i++)
	{	
		
		d[i] = rand() % (max - min + 1) + min;
		//cout << d[i] << ' ';
	}
	cout << endl;
	n = sizeof(d)/sizeof(d[0]);
	mergeSort(d, 0, n-1);
	
	for(auto n : d) {
		cout << n << ' ';
	}
	cout << endl;

}

void tset_heap_sort() {

	srand( time(NULL) );
	/* 指定亂數範圍 */
  	int min = 1;
  	int max = 50000;
	int n = 0;
	
	vector<int> ivec;

	for(int i = 0; i < 10; ++i)
	{
		n =  rand() % (max - min + 1) + min;
		ivec.push_back(n);
	}

	//heapSort();
	make_heap(ivec.begin(), ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}
	cout << endl;

	for(int i = 0; i < ivec.size(); i++)
	{
		pop_heap(ivec.begin(), ivec.end() - i);
	}
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}

	cout << endl;

	//**************

	for(int i = 0; i < 100; ++i)
	{
		n =  rand() % (max - min + 1) + min;
		ivec.push_back(n);
	}

	//heapSort();
	make_heap(ivec.begin(), ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}
	cout << endl;

	for(int i = 0; i < ivec.size(); i++)
	{
		pop_heap(ivec.begin(), ivec.end() - i);
	}
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}

	cout << endl;

	//**************

	for(int i = 0; i < 1000; ++i)
	{
		n =  rand() % (max - min + 1) + min;
		ivec.push_back(n);
	}

	//heapSort();
	make_heap(ivec.begin(), ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}
	cout << endl;

	for(int i = 0; i < ivec.size(); i++)
	{
		pop_heap(ivec.begin(), ivec.end() - i);
	}
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}

	cout << endl;

	//**************

	for(int i = 0; i < 10000; ++i)
	{
		n =  rand() % (max - min + 1) + min;
		ivec.push_back(n);
	}

	//heapSort();
	make_heap(ivec.begin(), ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}
	cout << endl;

	for(int i = 0; i < ivec.size(); i++)
	{
		pop_heap(ivec.begin(), ivec.end() - i);
	}
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}

	cout << endl;
	//**************

	for(int i = 0; i < 100000; ++i)
	{
		n =  rand() % (max - min + 1) + min;
		ivec.push_back(n);
	}

	//heapSort();
	make_heap(ivec.begin(), ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}
	cout << endl;

	for(int i = 0; i < ivec.size(); i++)
	{
		pop_heap(ivec.begin(), ivec.end() - i);
	}
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
		cout << *iter << ' '; 
	}

	cout << endl;

}

