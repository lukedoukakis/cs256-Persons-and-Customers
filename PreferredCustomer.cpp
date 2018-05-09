using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "PersonData.cpp";
#include "CustomerData.cpp";

class PreferredCustomer : public CustomerData{

private:
	double purchaseAmount, discountLevel;

public:

	void setPurchaseAmount(double n){
		purchaseAmount = n;
	}
	double getPurchaseAmount(){
		return purchaseAmount;
	}
	double getdiscountLevel(){
		return discountLevel;
	}

	void updateDiscountLevel(){
		switch (purchaseAmount){
		if(purchaseAmount >= 2000.00){
			discountLevel = .1;
		}else{
			if(purchaseAmount >= 1500){
				discountLevel = .07;
			}else{
				if(purchaseAmount >= 1000){
					discountLevel = .06;
				}else{
					if(purchaseAmount >= 500){
						discountLevel = .05;
					}
				}
			}
		}
		}
	}
};



