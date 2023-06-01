#include <iostream>
#include "Calculator.h"


void armstrongCheck();

int main() {
    armstrongCheck();
    return 0;
}


void armstrongCheck() {
    std::cout << "Armstrong Kontrolü\nSayı giriniz : ";

    //  Creating object to make things more clean and readable
    Calculator armstrong;
    int num {};

    //  Checking if the number entered is negative
    std::cin >> num;
    if(num < 0) {
        return;
    }

    //  Sending the given number to object and calculating if the number is armstrong
    armstrong.setNum(num);
    armstrong.calculate();

    if(armstrong.isArmstrong()) {
        std::cout << "Girilen sayı Armstrongdur";
    } else {
        std::cout << "Girilen sayı Armstrong değildir";
    }

}
