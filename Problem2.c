#include <stdio.h>

int main() {
    double balance = 5000.00;
    double annualInterestRate = 0.18;
    double monthlyInterestRate = annualInterestRate / 12.0;
    double monthlyPayment;
    double epsilon = 0.01;


    for (monthlyPayment = 10.0; ; monthlyPayment += 10.0) {
        double tempBalance = balance;


        for (int month = 1; month <= 12; month++) {
            double monthlyUnpaidBalance = tempBalance - monthlyPayment;
            tempBalance = monthlyUnpaidBalance + (monthlyInterestRate * monthlyUnpaidBalance);
        }


        if (tempBalance <= epsilon) {
            break;
        }
    }

    printf("Lowest Payment: %.2f\n", monthlyPayment);

    return 0;
}
