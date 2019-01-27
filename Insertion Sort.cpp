// Insertion Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={4,7,1,3,9,8,2};
	int n=sizeof(a)/sizeof(int);

	int hole,val;

	for(int i=1;i<n;i++){
		val=a[i];
		hole=i;
		while(hole>0 and a[hole-1]>val){
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=val;
	}
	for(auto it:a)
		cout<<it<<" ";

	return 0;
}
