#ifndef ARMSTRONGCHECK_CALCULATOR_H
#define ARMSTRONGCHECK_CALCULATOR_H


class Calculator {
private:
    int givenNum;
    bool armstrong;
public:
    void setNum(int num);

    bool isArmstrong() const;

    void calculate();

    Calculator();
    ~Calculator();

};


#endif //ARMSTRONGCHECK_CALCULATOR_H
