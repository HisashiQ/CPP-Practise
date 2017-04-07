//
// Created by localuser on 25/01/17.
//

#include "NextDayParcel.h"

NextDayParcel::NextDayParcel(double &weight, Customer &receiver, Customer &sender) : StandardParcel(
		weight,receiver,sender){
}

double NextDayParcel::calculateDelivery() const {
	return StandardParcel::calculateDelivery() + (getWeight()* 3.5);
}
