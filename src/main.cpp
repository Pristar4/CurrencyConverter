#include <iostream>
#include "Display.h"
#include "Convert.h"
#include <Windows.h>

void CurrencyConverter() {
    int cur1 = 1;
    int cur2 = 0;
    double amount = 0;




    //region Lexicon
    std::string list = "1 : Euro\n"
                       "2 : Dollar\n"
                       "3 : Pounds\n"
                       "4 : Yen\n"
                       "5 : Bitcoin\n";
    //endregion


   // std::cout << list + "Enter initial currency: \n", std::cin >> cur1;


    std::cout << "Enter amount in Euro: \n", std::cin >> amount;


    std::cout << list + "Enter final currency: \n", std::cin >> cur2;


    double value;
    value = Convert(cur1, cur2, amount);


    Display(value, cur1, cur2);
}

int main() {
    std::string versiontag = "V.1";


    using namespace std;

    bool exit = false;

    cout << "Welcome to the Currency Converter!  " + versiontag << endl;
    cout << "Press CTRL + C TO exit any time!\n";


    while (exit == false) {

        if (GetAsyncKeyState(VK_ESCAPE)) {
            exit = true;
        } else { CurrencyConverter();
        
        }
    }


}

