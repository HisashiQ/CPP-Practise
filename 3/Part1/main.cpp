#include <iostream>
#include <array>
#include "Customer.h"
#include "StandardParcel.h"
#include "TwoDayParcel.h"
#include "NextDayParcel.h"
#include <vector>

void setDeliveryType(Customer &receiver, Customer &sender, std::vector<StandardParcel*> &parclesVector);


int main() {
    std::string fn;
    std::string ln;
    std::array<std::string, 5> address;
	  std::string fn1;
    std::string ln1;
    std::array<std::string, 5> address1;
    std::string input = "";
    std::vector<StandardParcel*> parclesVec;
    char choice;
    bool cont = true;
  while (cont) {
  	std::cout << "Sender Details:" << std::endl;
  	std::cout << "    | First Name?: " << std::flush;
  	std::getline(std::cin, fn);
  	std::cout << "    | Last Name?: " << std::flush;
      std::getline(std::cin, ln);
  	std::cout << "    | Return Address Line 1: " << std::flush;
      std::getline(std::cin, address[0]);
  	std::cout << "    | Return Address Line 2: " << std::flush;
      std::getline(std::cin, address[1]);
  	std::cout << "    | Return Address City: " << std::flush;
      std::getline(std::cin, address[2]);
  	std::cout << "    | Return Address County: " << std::flush;
      std::getline(std::cin, address[3]);
  	std::cout << "    | Return Address Postcode: " << std::flush;
      std::getline(std::cin, address[4]);
  	Customer sender(fn, ln, address);

      std::cout << "\n Receiver Details:" << std::endl;
      std::cout << "    | First Name?: " << std::flush;
      std::getline(std::cin, fn1);
      std::cout << "    | Last Name?: " << std::flush;
      std::getline(std::cin, ln1);
      std::cout << "    | Return Address Line 1: " << std::flush;
      std::getline(std::cin, address1[0]);
      std::cout << "    | Return Address Line 2: " << std::flush;
      std::getline(std::cin, address1[1]);
      std::cout << "    | Return Address City: " << std::flush;
      std::getline(std::cin, address1[2]);
      std::cout << "    | Return Address County: " << std::flush;
      std::getline(std::cin, address1[3]);
      std::cout << "    | Return Address Postcode: " << std::flush;
      std::getline(std::cin, address1[4]);
  	Customer receiver(fn1, ln1, address1);
    setDeliveryType(receiver, sender, parclesVec);
      while (true) {
          std::cout << "Would you like to send another parcle?(y/n)" << std::endl;
          std::cout << ">> " << std::flush;
          getline(std::cin, input);

          if (input.length() == 1 && (input == "y" || input == "n")) {
              choice = input[0];
              break;
          }

          std::cout << "Invalid character, please try again" << std::endl;
      }
      if(choice == 'y'){
          cont = true;
      } else {
          cont = false;
      }
    }
    for (int i = 0; i < parclesVec.size(); i++){
      parclesVec[i] -> printSender();
      parclesVec[i] -> printReceiver();
    }
}

void setDeliveryType(Customer &receiver, Customer &sender, std::vector<StandardParcel*> &parclesVector){
	int deliveryMethod = 0;
	double weight = 0.0;
	bool cont = false;
	do {
        std::cin.clear();
		std::cout << "Method of Delivery: " << std::endl;
		std::cout << "    | 1 = Standard Delivery:" << std::endl;
		std::cout << "    | 2 = Two Day Delivery:" << std::endl;
		std::cout << "    | 3 = Next Day Delivery:" << std::endl;
		std::cin >> deliveryMethod;
		if (deliveryMethod > 0 && deliveryMethod < 4) {
			cont = true;
		}
	} while (!cont);

	do {
		cont = false;
		std::cout << "Weight of Parcel(kg): " << std::endl;
		std::cin.clear();
		std::cin >> weight;
		if (weight <= 0) {
			std::cout << "This parcel is too light!";
		} else if (weight > 80){
			std::cout << "This is too heavy to deliver!";
		} else {
			cont = true;
		}
	} while (!cont);


	if (deliveryMethod == 1) {
		StandardParcel* delivery = new StandardParcel(weight, receiver, sender);
    std::cout << "Price: £" << delivery -> calculateDelivery() << std::endl;
        parclesVector.push_back(delivery);
    } else if (deliveryMethod == 2) {
    TwoDayParcel* delivery = new TwoDayParcel(weight, receiver, sender);
    std::cout << "Price: £" << delivery -> calculateDelivery() << std::endl;
        parclesVector.push_back(delivery);
    } else if (deliveryMethod == 3) {
      NextDayParcel* delivery = new NextDayParcel(weight, receiver, sender);
      std::cout << "Price: £" << delivery -> calculateDelivery() << std::endl;
        parclesVector.push_back(delivery);
	     } else {
		throw std::invalid_argument("Error setting delivery type");
	   }

}
