#include <iostream>
#include <typeinfo>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//bool indexValidation(int Index);



int main(int argc, char** argv) 
//	float a;
//float array[5]={1.2,20.2,25.2,30.2,4.2};
//int userInput;
//cin>>a;
//
//cout<<"Enter Array Index: ";
//cin>>userInput;
//cout<<sizeof(array)<<endl;
// if (indexValidation(userInput)){
// 	cout<<array[userInput];	
// }
// else
// {
// 	cout<<"Invalid Index: "; }
//
//	
//	
//	
//	
//	return 0;
//}
//bool indexValidation(int index){
//	if(index>=0&&index<=4){
//	return true;
//		
//	}
//	else
//	return false;
//	
//	
//	
//}
 {
    int sizeOfArray = 3;
    int myFriendsAge[sizeOfArray];
    string nameOfMyFriend[sizeOfArray];
    for(int i=0;i<sizeOfArray;i++) {
        cin>>myFriendsAge[i];
        cin>>nameOfMyFriend[i];
    }
    
    for(int i=0;i<sizeOfArray;i++) {
        cout<<myFriendsAge[i]<<endl<<nameOfMyFriend[i];
    }
    	return 0;
}



