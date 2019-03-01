using namespace std;
#include<iostream>
#include<fstream>
#include<cstdlib>


void sort(double x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){ //swap
				double temp = x[j-1];
				x[j-1] = x[j];
				x[j] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	//Write your code here
	double score[20];
	int i=0;
	ifstream source("score1.txt");
	ofstream dest("result.txt");

	string line;
	while(getline(source,line)){
			score[i]=atof(line.c_str());
			//cout << score[i] << '\n';
			i++;
	}
	

	sort(score,20);

	for(int i=0;i<20;i++){
		
		dest << i+1 << ':' << score[i] << '\n';
	}
	dest.close();

	return 0;
}

