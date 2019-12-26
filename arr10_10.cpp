//#include<iostream>
//#include<fstream>
//#include<conio.h>
//
//using namespace std;
//
//int main(){
//	ifstream in("arr10_10.txt");
//	if(!in.is_open()){
//		cout<<"Error!"<<endl;
//		return -1;
//	}
//	const int n=10;
//	int arr[10][10];
//	int sum=0;
//	for(int i=0; i<n; i++)
//		for(int j=0; j<n; j++)
//			in>>arr[i][j];
//	for(int i=0; i<n; i+=2){
//		int max=arr[i][0];
//		for(int j=0; j<n; j++){
//			if(arr[i][j]>max){
//				max=arr[i][j];
//			}
//		}
//		sum+=max;
//	}
//	cout<<endl<<sum;
//	_getch();
//	return 0;
//}