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

