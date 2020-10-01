#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);	
#endif
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		int sum=0;
		int p=n;
		int min = INT_MAX;

		for(int i=0;i<n;i++){
			cin>>arr[i];
			 sum+=arr[i];
			if(arr[i]<min){
				min = arr[i];
			}

		}
		
		sum-=min;
		
		int moves=0;

		while(1) {
			sum+=min;
		if(sum > k*(p-1) ){			
				break;
			}
			else{
			moves++;
			}
		}
		
		
		cout<<moves<<endl;

	
	}

	return 0;
}

