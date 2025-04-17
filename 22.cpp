#include <iostream>
using namespace std;

// Function to calculate discount (Has a bug)
float calculateDiscount(float amount) {
    if (amount >= 1000) {
        return amount * 10 / 100; // Bug: Should be 10% instead of 5%
    }
    return 0;
}

// Function to calculate final price (Has a bug)
float calculateFinalPrice(float amount) {
	
	if(amount<0){
		cout<<"Error in amount";
	}
	else{
	
	
    float discount = calculateDiscount(amount);
    return amount - discount; // Bug: No check for negative purchase amount
}
}
int main() {
    float amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Final Price: " << calculateFinalPrice(amount) << endl; // Bug: Accepts negative purchase amount
    return 0;
}

