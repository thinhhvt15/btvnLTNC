#include <iostream>
#include <math.h>

using namespace std;

int a(int hourWork)
{
    return (hourWork <= 50 ? 16000 * hourWork : 16000 * 50 + (hourWork <= 100 ? (100 - hourWork) * 20000 
            : 100 * 20000 + (hourWork - 100) * 25000 ));
}

double B(double insurance, int income) 
{
    double insuranceFee = income * insurance / 100;
    double taxFromIncome = income - insuranceFee;
    double tax = (taxFromIncome <= 1000000 ? 0 : 0 + (taxFromIncome <= 1500000 ? (1500000 - taxFromIncome) * 0.1 
            : 500000 * 0.1) + (taxFromIncome <= 2000000 ? (2000000 - taxFromIncome) * 0.15 : 500000 * 0.15 + (taxFromIncome - 2000000) * 0.2));

    return insuranceFee + tax;
}

double C(int income)
{
    return (income + pow(1 + 0.02, 12));
}

int D(int moneyFromParent, int hourWork)
{
    int income = 0;
    double borrowFee = 10000000;
    int res = 0;
    while (borrowFee >= 0)
    {
        res++;
        income += moneyFromParent + a(hourWork);
        double Tax = B(9, income);
        income -= Tax + 2000000;

        borrowFee -= income;
        borrowFee = borrowFee * (100 + 2) / 100;
    }
    
    return res;
}
int main()
{
    cout << D(1500000, 155);
}