//#include <iostream>
//
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;
//int main(int argc, char** argv) {
//	int last,arrayCount,i=1;
//	int cnicArray[13]={};
//
//	long long cnic=1234567891123; 
//	
//	arrayCount=sizeof(cnicArray)/4;
//	
//	
//	while(cnic>0){
//		last=cnic%10;
//		
//	cnicArray[arrayCount-1]=last;
//	
//		arrayCount--;
//		cnic=cnic/10;
//		
//		cout<<cnicArray[i];
//		i++;
//	}
//
//	
//	return 0;
//}
#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

// Online C++ compiler to run C++ program online

    for(int i= 1; i<=10;i++) {
        cout<<"i: "<<i<<"\t";
        cout<<"Hi bro \t";
        for(int j=1;j<=4;j++) {
            cout<<j<<endl;
        }
        cout<<"Exiting i bro"<<endl;
    }

    return 0;






    int rows = 5; // student
    int columns = 3; // subjects
    
    int studentsArray[rows][columns];
    // taking inputs
    for(int i= 0; i<rows;i++) {
        for(int j=0;j< columns;j++) {
          cout<<"I: "<<i<<" J:"<<j<<endl;
          cin>>studentsArray[i][j];
        }
    }
    
  
    
    int sum = 0;
    // sum all the numbers 2d array
    for(int i= 0; i<rows;i++) {
        for(int j=0;j< columns;j++) {
          sum = sum + studentsArray[i][j];
        }
    }
    
    cout<<"Sum: "<<sum;
    
    return 0;
}


//int j,i,a;
//int dArray[7][2]={};
//
//for(i=1;i<=7;i++){
//	cout<<endl;
//		
//	for(j=1;j<=10;j++){
//	dArray[i-1][j-1]=i*j;
//	cout<<dArray[i-1][j-1]<<"\t";
//	
//	
//}
//	
//}
//
//	
	return 0;
}
