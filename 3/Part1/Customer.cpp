//
// Created by localuser on 25/01/17.
//
#include <iostream>
#include <string>
#include <array>
#include "Customer.h"

Customer::Customer(std::string &firstName, std::string &lastName, std::array<std::string, 5> &ad) {
  setFirstName(firstName);
  setLastName(lastName);
  setAddress(ad);
}

std::string Customer::getFirstName() {
	return firstName;
}

std::string Customer::getLastName() {
	return lastName;
}

std::string Customer::getFullName() {
	return firstName + " " + lastName;
}

void Customer::setFirstName(std::string &firstName) {
	this->firstName = firstName;
}

void Customer::setLastName(std::string &lastName) {
	this->lastName = lastName;

}

void Customer::setFullName(std::string &firstName, std::string &lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}

std::array<std::string, 5> Customer::getAddress() const {
	//Position[0]=FirstLine, [1]=SecondLine, [2]=City, [3]=County, [4]=Postcode
	return address;
}

void Customer::setAddress(std::array<std::string, 5> &address) {
	this->address[0] = address[0];
	this->address[1] = address[1];
	this->address[2] = address[2];
	this->address[3] = address[3];
	this->address[4] = address[4];
}
