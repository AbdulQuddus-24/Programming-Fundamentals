#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
//	
//	int Num,i=0,sum=0;
//	cout<<"Enter number ";
//	cin>>Num;
//	while(Num>0){
//		i++;
//		sum=sum + Num%10;  
//	
//		Num=Num/10;
//		
//	} 
//	cout<<i<<endl<<sum;
	
	int dig, Num,i=0,rev=0,count=0;
	cout<<"Enter Number  ";
	cin>>Num;
	dig=Num;
	while(Num>0){
		count++;
		i=Num%10;
		Num=Num/10;
		rev=(rev*10)+i;
		
		
	}
	
	cout<<"Total Digits are: "<<count<<endl<<rev;
	if(dig==rev){
		cout<<" is Palendrom";
	}
	else
	cout<<" is not Palendrom";
	
	return 0;
}
