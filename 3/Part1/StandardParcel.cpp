//
// Created by localuser on 25/01/17.
//

#include "StandardParcel.h"

StandardParcel::StandardParcel(double &weight, Customer &receiver,
							   Customer &sender) : receiver(receiver), sender(sender), weight(weight) {
}

StandardParcel::~StandardParcel() {}

void StandardParcel::setWeight(double &weight) {
		this->weight = weight;
}

double StandardParcel::getWeight() const {
	return weight;
}

double StandardParcel::calculateDelivery() const {
	return getWeight() * 2.6;
}

void StandardParcel::printSender() {
  std::array<std::string, 5> seAddress = sender.getAddress();
  std::cout << "FROM: " << sender.getFullName() << std::endl;
  std::cout << "  | Address" << std::endl;
  std::cout << "     | Line 1: " << seAddress[0] << std::endl;;
  std::cout << "     | Line 2: " << seAddress[1] << std::endl;;
  std::cout << "     | City: " << seAddress[2] << std::endl;;
  std::cout << "     | County: " << seAddress[3] << std::endl;;
  std::cout << "     | Postcode: " << seAddress[4] << std::endl;;
}

void StandardParcel::printReceiver() {
  std::array<std::string, 5> rAddress = receiver.getAddress();
  std::cout << "TO: " << receiver.getFullName() << std::endl;;
  std::cout << "  | Address" << std::endl;
  std::cout << "     | Line 1: " << rAddress[0] << std::endl;;
  std::cout << "     | Line 2: " << rAddress[1] << std::endl;;
  std::cout << "     | City: " << rAddress[2] << std::endl;;
  std::cout << "     | County: " << rAddress[3] << std::endl;;
  std::cout << "     | Postcode: " << rAddress[4] << std::endl;;
}
