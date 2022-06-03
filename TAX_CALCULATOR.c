#include <stdio.h>
void calculate()
{
    int age;
    float income;
    int y;
    float tax, tax1, tax2, tax3, tax4, tax5, tax6;
    printf("---------------------------------------------------------\n");
    printf("**TAX CALCULATOR FOR ASSESSMENT YEAR 2021-2022**\n");
    printf("---------------------------------------------------------\n");
    do
    {
        printf("Enter total taxable income:\n");
        scanf("%f", &income);

        printf("Enter your age\n");
        scanf("%d", &age);

        if (age >= 80)
        {
            if (income <= 500000)
            {
                printf("NO TAX LIABILITY");
            }
            else
            {
                if (income > 500000 && income <= 1000000)
                {
                    tax = 0.2 * (income - 500000);
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 1000000 && income <= 5000000)
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * (income - 1000000);
                    tax = tax1 + tax2;
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 5000000 && income < 5200000)
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * 4000000;
                    tax3 = tax1 + tax2;
                    tax4 = tax3 + income - 5000000; // Health and education CESS
                    tax = 1.04 * tax4;
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income >= 5200000 && income <= 10000000)
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * (income - 1000000);
                    tax3 = tax1 + tax2;
                    tax = 1.1 * tax3; // Surcharge
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }

                else if (income >= 10000000 && income < 10300000)
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * 9000000;
                    tax3 = tax1 + tax2;
                    tax4 = 1.10 * tax3; // Surcharge
                    tax5 = tax4 + (income - 10000000);
                    tax = 1.04 * tax5; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }

                else if (income >= 10300000 && income <= 20000000)
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * (income - 1000000);
                    tax3 = tax1 + tax2;
                    tax = 1.15 * tax3; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 20000000 && income <= 50000000)
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * (income - 1000000);
                    tax3 = tax1 + tax2;
                    tax = 1.25 * tax3; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else
                {
                    tax1 = 0.2 * 500000;
                    tax2 = 0.3 * (income - 1000000);
                    tax3 = tax1 + tax2;
                    tax = 1.37 * tax3; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
            }
        }

        else if (age >= 60 && age < 80)
        {
            if (income <= 300000)
            {
                printf("NO TAX LIABILITY");
            }
            else
            {
                if (income > 300000 && income <= 500000)
                {
                    tax = 0.05 * (income - 300000);
                    printf("TOTAL TAX IS %.2f.\n", tax);
                    printf("TAX LIABILITY IS 0 DUE TO REBATE u/s 87A.");
                }
                else if (income > 500000 && income <= 1000000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * (income - 500000);
                    tax = tax1 + tax2;
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 1000000 && income <= 5000000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax = tax1 + tax2 + tax3;
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 5000000 && income < 5200000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * 4000000;
                    tax4 = tax1 + tax2 + tax3;
                    tax5 = tax4 + income - 5000000; // Health and education CESS
                    tax = 1.04 * tax5;
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }

                else if (income > 5200000 && income <= 10000000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.1 * tax4; // Surcharge
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }

                else if (income >= 10000000 && income < 10300000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * 9000000;
                    tax4 = tax1 + tax2 + tax3;
                    tax5 = 1.10 * tax4; // Surcharge
                    tax6 = tax5 + (income - 10000000);
                    tax = 1.04 * tax6; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }

                else if (income >= 10300000 && income <= 20000000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.15 * tax4; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 20000000 && income <= 50000000)
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.25 * tax4; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else
                {
                    tax1 = 0.05 * 200000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.37 * tax4; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
            }
        }

        else if (age > 0 && age < 60)
        {
            if (income <= 250000)
            {
                printf("NO TAX LIABILITY");
            }
            else
            {
                if (income > 250000 && income <= 500000)
                {
                    tax = 0.05 * (income - 250000);
                    printf("TOTAL TAX IS %.2f.\n", tax);
                    printf("TAX LIABILITY IS 0 DUE TO REBATE u/s 87A.");
                }
                else if (income > 500000 && income <= 1000000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * (income - 500000);
                    tax = tax1 + tax2;
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 1000000 && income <= 5000000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax = tax1 + tax2 + tax3;
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 5000000 && income < 5200000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * 4000000;
                    tax4 = tax1 + tax2 + tax3;
                    tax5 = tax4 + income - 5000000; // Health and education CESS
                    tax = 1.04 * tax5;
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 5200000 && income <= 10000000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.1 * tax4; // Surcharge
                    tax = 1.04 * tax; // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income >= 10000000 && income < 10300000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * 9000000;
                    tax4 = tax1 + tax2 + tax3;
                    tax5 = 1.10 * tax4; // Surcharge
                    tax6 = tax5 + (income - 10000000);
                    tax = 1.04 * tax6; // Health and education CESS

                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 10300000 && income <= 20000000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.15 * tax4; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else if (income > 20000000 && income <= 50000000)
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.25 * tax4; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
                else
                {
                    tax1 = 0.05 * 250000;
                    tax2 = 0.2 * 500000;
                    tax3 = 0.3 * (income - 1000000);
                    tax4 = tax1 + tax2 + tax3;
                    tax = 1.37 * tax4; // Surcharge
                    tax = 1.04 * tax;  // Health and education CESS
                    printf("TAX LIABILITY IS %.2f\n", tax);
                }
            }
        }

        else
        {
            printf("INVALID AGE.");
        }

        printf("\n***If you want to calculate again,Press 0.\n");
        scanf("%d", &y);
    } while (y == 0);
    return;
}
int main()
{
    calculate();
    return 0;
}
