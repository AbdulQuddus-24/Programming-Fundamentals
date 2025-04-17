#include <iostream>
#include <string>
using namespace std;
void transaction(string accountHolder1,int balance1,int depositAmount1,int withdrawAmount1){
	  balance1 += depositAmount1;
    cout << accountHolder1 << " deposited " << depositAmount1 << ". New balance: " << balance1 << endl;
    
    if (balance1 >= withdrawAmount1) {
        balance1 -= withdrawAmount1;
        cout << accountHolder1 << " withdrew " << withdrawAmount1 << ". New balance: " << balance1 << endl<<endl;
    } else {
        cout << accountHolder1 << " has insufficient funds!" << endl<<endl;
    }
}
int main() {
	transaction("Alice",1000,500,300);
	transaction("Bob",1500,700,1200);
	transaction("Charlie",2000,1000,1500);
    

   

    return 0;
}


