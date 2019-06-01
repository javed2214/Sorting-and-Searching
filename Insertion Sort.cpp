// Insertion Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *a, int n){

	int key,i,j=1;

	for(int j=1;j<n;j++){

		key=a[j];
		i=j-1;

		while(i>=0 and a[i]>key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
}

int main(){

	int a[]={4,2,5,7,1,9,8};
	int n=sizeof(a)/sizeof(int);

	insertionSort(a,n);

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
