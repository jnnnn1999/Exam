#include<iostream>
#include<fstream>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	ifstream source("score1.txt");
	string line;
	
	float num[20] = {4.5,2,3,4,5.5,7,8.2,9,6.9,7,0,2.4,4.6,3,2.4,5.5,6.9,6.9,2.3,1.7};
	sort(num,20);
	ofstream dest("rank.txt");
	for(int i = 0; i < 20;i++){
		dest << num[i] <<"="<<i+1<< "\n";
	}
	
	return 0;
}


