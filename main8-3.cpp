#include <iostream>
#include <cmath>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	string s="Hello World!";
	cout<<"Length:"<<s.length()<<endl;
	int pos = s.find("World");
	cout<<"Find World:"<<pos<<endl;
	s.replace(pos,5,"Universe");

string Password;
cout<<"Enter Password"<<endl;
cin>>Password;
if(Password.length()>=8 && Password.length()<=20)
{
	cout<<"Password is Valid";
}
else
{
	cout<<"Password Must be in Between 8 to 20 Characters";
}
	
	
	
	
	
	
	return 0;
}
