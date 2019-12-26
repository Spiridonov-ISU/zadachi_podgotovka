#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
	ifstream in("arr10_10.txt");
	if(!in.is_open()){
		cout<<"Error!"<<endl;
		return -1;
	}
	const int n=10;
	float arr[10][10];
	float max=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			in>>arr[i][j];
	for(int j=0; j<n; j++){
		max=arr[j][j];
		for(int i=0; i<n; i++){
			arr[j][i]/=max;
			}
		}
	for(int j=0; j<n; j++){
		cout<<endl;
		for(int i=0; i<n; i++)
			cout<<arr[i][j]<<" ";
	}
	_getch();
	return 0;
}