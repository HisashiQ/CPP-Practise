//
// Created by localuser on 25/01/17.
//

#ifndef LAB2_NEXTDAYPARCEL_H
#define LAB2_NEXTDAYPARCEL_H


#include "StandardParcel.h"

class NextDayParcel : public StandardParcel{
public:
	NextDayParcel(double &, Customer &, Customer &);
	virtual double calculateDelivery() const override;
};


#endif //LAB2_NEXTDAYPARCEL_H
