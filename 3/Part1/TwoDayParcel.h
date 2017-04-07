//
// Created by localuser on 25/01/17.
//

#ifndef LAB2_TWODAYPARCEL_H
#define LAB2_TWODAYPARCEL_H


#include <netinet/in.h>
#include "StandardParcel.h"

class TwoDayParcel : public StandardParcel {
public:
	TwoDayParcel(double &, Customer &, Customer &);

	double calculateDelivery() const;
};


#endif //LAB2_TWODAYPARCEL_H
