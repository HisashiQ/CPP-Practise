//
// Created by localuser on 25/01/17.
//

#include "TwoDayParcel.h"
#include "Customer.h"
#include "StandardParcel.h"

double TwoDayParcel::calculateDelivery() const {
	return StandardParcel::calculateDelivery() + 4.0;
}

TwoDayParcel::TwoDayParcel(double &weight, Customer &receiver, Customer &sender) : StandardParcel(
weight,receiver,sender){
}

