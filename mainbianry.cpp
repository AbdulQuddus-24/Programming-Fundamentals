#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int binarysearch(int array[],int low,int high,int key)

{
	int mid;

if(low>high){
	return false;
}	
	else
	{
		mid=(low+high)/2;
	}
	if(key== array[mid])
	{
		
		return array[mid];
		
	}
	else if (key<mid){
		binarysearch(array,low,mid-1,key);
	}
	else(key>mid)
	{
		binarysearch(array,mid+1,high,key);
		
	}
	
	
}

int main(int argc, char** argv) {
	
	int array[5]={75,95,98,101,105};
	int low=0;
	int high=4;
	int key=75;
	binarysearch(array,low,high,key);
	
	
	return 0;
}
