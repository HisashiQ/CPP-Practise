//
// Created by Quinn Koike on 25/01/17.
//

#ifndef LAB2_CUSTOMER_H
#define LAB2_CUSTOMER_H

#include <iostream>
#include <array>

class Customer {
public:
	Customer(std::string &, std::string &, std::array<std::string, 5> &);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getFullName() const;
	void setFirstName(std::string &);
	void setLastName(std::string &);
	void setFullName(std::string &, std::string &);
	std::array<std::string, 5> getAddress() const;
	void setAddress(std::array<std::string, 5> &);

private:
	std::string firstName;
	std::string lastName;
	//Position[0]=FirstLine, [1]=SecondLine, [2]=City, [3]=County, [4]=Postcode
	std::array<std::string, 5> address;
};


#endif //LAB2_CUSTOMER_H
