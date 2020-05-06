#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;int m;
	cin>>n>>m;
	vector<char> v1;
	vector<char> v2;
	bool found = false;
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	for(int i=0;i<m;i++){
		cin>>v2[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v1[i]==v2[j]){
				found=true;
				cout<<found<<endl;
				break;
			}
		}
	}
	if(!found){
		cout<<found<<endl;
	}
	return 0;
}
