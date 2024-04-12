# Paying-Dept-Off-In-A-Year

This C program starts with an initial monthly payment of 10 FCFA and uses a loop to increment the payment amount by 10 FCFA in each iteration. Inside the loop, it simulates 12 months of payments and interest by updating the temporary balance based on the monthly payment and interest rate.

The program checks if the balance is paid off within 12 months by comparing the temporary balance to an error tolerance (`epsilon`). If the balance is paid off, the program breaks out of the loop and prints the lowest payment amount found.

Note that the monthly payment is constrained to be a multiple of 10 FCFA, as mentioned in the problem statement.