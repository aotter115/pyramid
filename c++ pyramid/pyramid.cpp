// test.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
#include <iomanip>
		#define N 10
		using namespace std;
void printTriangle(int n);
void printEmptyTriangle(int n,int m);
int main(){
	
	printEmptyTriangle(20,12);
	system("pause");
    return 0;
}

void printTriangle(int n){
	for (int i=0;i<n;i++){
		cout<<setw((n-i)*2)<<"*";
		for (int j=0;j<i*2;j++)
			cout<<" *";
		cout<<endl;
	}
	cout<<endl;
}

void printEmptyTriangle(int n, int m){
	for (int i=0;i<n-m;i++){
		cout<<setw((n-i)*2)<<"*";
		if (i>1)
		for (int j=0;j<m-1&&j<i;j++)
			cout<<" *";
		if (i>0){
		cout<<setw((2*i-m+2-m)*2)<<" *";
		for (int j=0;j<m-1&&j<i;j++)
			cout<<" *";
		}
		cout<<endl;
	}
	for (int i=n-m;i<n;i++){
		cout<<setw((n-i)*2)<<"*";
		for (int j=0;j<i*2;j++)
			cout<<" *";
		cout<<endl;
	}
}