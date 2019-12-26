//#include<iostream>
//#include<fstream>
//#include<conio.h>
//
//using namespace std;
//
//int main(){
//	ifstream in("array.txt");
//	if(!in.is_open()){
//		cout<<"Error!"<<endl;
//		return -1;
//	}
//	const int n = 10;
//	int array[n];
//	int count=0;
//
//	for(int i=0; i<n; i++){
//		in>>array[i];
//		cout<<array[i]<<" ";
//	}
//	for(int i=0; i < n-1; i+=2){
//		for(int j=0; j<n-i; j+=2)
//			if(array[j]>array[j+2]){
//				int temp=array[j];
//				array[j] = array[j+2];
//				array[j+2]=temp;
//				count++;
//			}
//	}
//	cout<<endl;
//	for(int i=0; i<n; i++)
//		cout<<array[i]<<" ";
//	cout<<endl<<count;
//	_getch();
//	return 0;
//}