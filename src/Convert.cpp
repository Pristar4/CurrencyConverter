//
// Created by felix on 01.11.2021.
//

#include "Convert.h"


double Convert(int cur1, int cur2, double amount) {
    double x = 1;
    double y;

    //Not working
   /* switch (cur1) {

        case 1:
            x = 1;
            break;
        case 2:
            x = 1.16;
            break;
        case 3:
            x = .85;
            break;
        case 4:
            x = 132.20;
            break;
        case 5:
            x = 41047.92;
            break;

    }*/
    switch (cur2) {

        case 1:
            y = 1;
            break;
        case 2:
            y = 1.16;
            break;
        case 3:
            y = .85;
            break;
        case 4:
            y = 132.20;
            break;
        case 5:
            y = .000024;
            break;

    }


    return x * y * amount;


}


