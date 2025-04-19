#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void funArray(int sizeArray){
	int array[sizeArray];
	for(int i=0;i<sizeArray;i++){
		cout<<"Enter Array value at index "<<i<<" =";
		cin>>array[i];
	}
	for(int i=0;i<sizeArray;i++){
		cout<<array[i];
}
}
int main(int argc, char** argv) {
	int sizeArray;
	cout<<"Enter size of array: ";
	cin>>sizeArray;
	
	funArray(sizeArray);
	
	
	
	
	
	
	return 0;
}
