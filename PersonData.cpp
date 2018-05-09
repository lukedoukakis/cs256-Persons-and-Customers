using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>


class PersonData{

	private:
	string lastName, firstName, address, city, state, zip, phone;

	public:
	string setLastName(string n){
		lastName = n;
	}
	string setFirstName(string n){
		firstName = n;
	}
	string setAddress(string n){
		addressName = n;
	}
	string setCity(string n){
		city = n;
	}
	string setState(string n){
		state = n;
	}
	string setZip(string n){
		zip = n;
	}
	string setPhone(string n){
		phone = n;
	}

	void getLastName(){
		return lastName;
	}
	void getfirstName(){
		return firstName;
	}
	void getAddress(){
		return address;
	}
	void getCity(){
		return city;
	}
	void getState(){
		return state;
	}
	void getZip(){
		return zip;
	}
	void getPhone(){
		return phone;
	}


};




