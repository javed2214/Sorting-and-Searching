// Selection Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={4,2,8,6,9,1,5,3};
	int n=sizeof(a)/sizeof(int);

	int index;

	for(int i=0;i<n-1;i++){
		index=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[index])
				index=j;
		}
		swap(a[i],a[index]);
	}
	for(auto it:a)
		cout<<it<<" ";	

	return 0;
}