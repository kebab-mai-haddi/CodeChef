#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,u,d,chute; chute = 0; int success = 1;
		cin>>n>>u>>d;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			//check if higher
			if(arr[i] > arr[i+1] && success != n){
				if(arr[i]-arr[i+1] <= d){
					success++;
					continue;
				}
				//check if chute can be used
				else{
					if(chute==0){
						chute=1;
						success++;
						continue;
					}
					else
						break;
				}
			}
			//check if same level
			if(arr[i] == arr[i+1] && success != n){
				success++;
				continue;
			}
			//check if lower
			if(arr[i] < arr[i+1] && success != n){
				if(arr[i+1]-arr[i] <= u){
					success++;
					continue;
				}
				else
					break;
			}
		}
		cout<<success<<endl;
	}
}