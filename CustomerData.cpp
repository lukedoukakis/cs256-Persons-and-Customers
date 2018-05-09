using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
#include "PersonData.cpp";

class CustomerData : public PersonData{

private:
	int customerNumber;
	bool mailingList;

public:
	int setCustomerNumber(int n){
		customerNumber = n;
	}
	int setMailingList(bool n){
		mailingList = n;
	}

	void getCustomerNumber(){
		return customerNumber;
	}
	void getMailingList(){
		return mailingList;
	}

};




