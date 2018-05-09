using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "PersonData.cpp";
#include "CustomerData.cpp";
#include "PreferredCustomer.cpp";

class Driver{
	int main(){

		PreferredCustomer bob;

		double amount;

		int loop;
		do {
			do {
				cout<<"Bob purchased an item. How much did it cost (must be positive)?\n";
				cin>>amount;
			} while (amount > 0);

			bob.setPurchaseAmount(bob.getPurchaseAmount() + (amount - amount*bob.getDiscountLevel()));
			bob.updateDiscountLevel();

			cout<<"\nBob's total purchase amount: "<<bob.getPurchaseAmount()<<"\n";
			cout<<"Bob's discount level: "<<bob.getDiscountLevel<<"\n\n";

			cout<<"Enter 1 to enter a new item purchased. Enter any other key to quit.";
		} while (loop == 1);

		return(0);
	}
};




