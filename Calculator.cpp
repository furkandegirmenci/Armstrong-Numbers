#include "Calculator.h"
#include <cmath>


bool Calculator::isArmstrong() const {
    return armstrong;
}

void Calculator::setNum(int givenNum) {
    this->givenNum = givenNum;
}

void Calculator::calculate() {
    int temp {}, numOfDigits{};

    //  Checks how many digits are there in the given number
    for (int i = givenNum; i != 0 ; i/=10) {
        numOfDigits++;
    }

    //  Multiply every digit with how many digits there are and adds them to temp
    for (int i = givenNum; i != 0 ; i/=10) {
        temp += static_cast<int>(pow(i % 10, numOfDigits));
    }

    if(temp == givenNum) {
        armstrong = true;
    }

}

Calculator::Calculator() : givenNum{0}, armstrong{false} {}
Calculator::~Calculator() {};