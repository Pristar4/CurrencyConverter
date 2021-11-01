//
// Created by felix on 01.11.2021.
//

#include <iostream>
#include "Display.h"

double Display(double value, int cur1, int cur2) {

    std::string currency;


    switch (cur2) {

        case 1:
            currency = "Euro";
            break;
        case 2:
            currency = "Dollar";
            break;
        case 3:
            currency = "Pounds";
            break;
        case 4:
            currency = "Yen";
            break;
        case 5:
            currency = "Bitcoin";
            break;

    }


    std::cout << "converted amount is " + std::to_string(value) + " " + currency +  "\n";
    return value;
}
 

 