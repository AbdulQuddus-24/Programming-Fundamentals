#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	ofstream myfile("C:/Users/clr/Downloads/newabc.txt");
//	if(myfile.is_open()){
//		myfile<<"hello,file handling \n";
//		myfile<<"this is another line \n";
//		myfile.close();
//	}
//	else{
//		cout<<"Unable to Open";
//	}
	
	
	
	string line;
	ifstream filex("C:/Users/clr/Downloads/abc.txt");
		ofstream myfile("C:/Users/clr/Downloads/newfile.txt");
	if(filex.is_open()){
		
		while(getline(filex,line)){
			
	if(myfile.is_open()){
		myfile<<line<<endl;
	
		
	}
		}
		myfile.close();
		filex.close();
		
	}
	
	else{
		cout<<"Unable to Open file";
	}
	
	
	
	
	
	return 0;
}
