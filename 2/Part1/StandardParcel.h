//
// Created by localuser on 25/01/17.
//

#ifndef LAB2_STANDARDPARCEL_H
#define LAB2_STANDARDPARCEL_H

#include <iostream>
#include "Customer.h"

class StandardParcel {
public:
	StandardParcel(double &, Customer &, Customer &);

	virtual ~StandardParcel();
	void setWeight(double &);
	double getWeight() const;
	virtual double calculateDelivery() const;

private:
	double weight;
	Customer sender;
	Customer receiver;
};


#endif //LAB2_STANDARDPARCEL_H
