#include<iostream>
using namespace std;

template <typename T>
int countIf(T arr[],int length,T target){
	//Write your code here
	int a[12],b[6];
	for(int i=0;i<12;i++){
		if(a[i]==0){
		return 1;
		}
	}
	for(int j=0;j<12;j++){
		if(a[j]==8){
		return 1;
		}
	}
	for(int k=0;k<6;k++){
		if(b[k]=='C'){
		return 1;
		}
	}
	for(int d=0;d<6;d++){
		if(b[d]=='E'){
		return 1;
		}
	}
	

}


int main(){
	int a[] = {1,0,2,3,4,0,1,0,0,5,1,9};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[] = "CPECMU";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
