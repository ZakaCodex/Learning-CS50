#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pin = 0;
    char operation = 0;
    printf("\033[34mWelcome to Zakaria ATM\033[0m\n");

    string name = get_string("enter your name please : ");

    printf("Welcome Mr.%s\n", name);

    int balance;
    do
    {
        balance = get_int("please enter your balance : ");
        if (balance < 0)
        {
            printf("\033[31mplease enter positive number\033[0m\n");
        }
    } while (balance < 0);

    do
    {
        pin = get_int("please create pin : ");

        if (pin < 1000 || pin > 9999)
        {

            printf("\033[31mThe number must be only 4 digits long\033[0m\n");
        }

    } while (pin < 1000 || pin > 9999);

    printf("\033[32mSuccessful creation\033[0m.\033[31mDon't share it with anyone\033[0m \n");

    char confirmation = 0;
    do
    {
        confirmation = get_char("To confirm\n\r your name:%s\n\r your PIN:%i\n\rEnter y if yes or n if no: ", name, pin);

        if (confirmation == 'n' || confirmation == 'N')
        {

            printf("I'm sorry for the mistake.\n");

            name = get_string("enter your name please : ");
            do
            {

                pin = get_int("please create pin : ");

                if (pin < 1000 || pin > 9999)
                {

                    printf("\033[31mThe number must be only 4 digits long\033[0m\n");
                }

            } while (pin < 1000 || pin > 9999);
        }
        else if (confirmation == 'y' || confirmation == 'Y')
        {

            printf("\033[34mThank you for confirmation\033[0m\n");
        }
        else if (confirmation != 'n' && confirmation != 'N' && confirmation != 'y' && confirmation != 'Y')
        {
            printf("Enter one of these letters, n or N, if the information is incorrect, and enter y or Y if the information is correct\n");
        }
    } while (confirmation != 'n' && confirmation != 'N' && confirmation != 'y' && confirmation != 'Y');

    int login_pin;
    int attempts = 3;
    do
    {
        login_pin = get_int("Enter your PIN code to log in : ");

        if (login_pin != pin)
        {
            printf("remaining attempts: %i\n", attempts - 1);
            attempts--;
        }

        if (attempts <= 0)
        {

            printf("\033[31mAccount Locked\033[0m\n");

            return 0;
        }
    } while (login_pin != pin);

    if (login_pin == pin)
    {
        printf("Welcome to your account Mr.%s\n", name);

        do
        {

            operation = get_char("Choose the number of operation you want to perform\n\r 1 = Check Balance\n\r 2 = Deposit\n\r 3 = Withdraw\n\r 4 = Exit\n\roperation: ");

            if (operation == '2')
            {
                int Deposit_amount = get_int("Deposit amount : ");
                if (Deposit_amount <= 0)
                {
                    printf("\033[31mA negative amount cannot be deposited\033[0m\n");
                }
                else
                {
                    balance = Deposit_amount + balance;
                    printf("Deposit successful\n");
                }
            }

            else if (operation == '3')
            {
                int Withdrawal_amount = get_int("Withdrawal amount : ");

                if (Withdrawal_amount > balance)
                {
                    printf("Insufficient balance\n\rYour balance =%i\n", balance);
                }
                else if (Withdrawal_amount < 0)
                {

                    printf("\033[31mA negative amount cannot be withdrawn\033[0m\n");
                }
                else
                {
                    balance = balance - Withdrawal_amount;
                    printf("Withdraw successful\n");
                }
            }

            else if (operation == '1')
            {
                printf("welcome Mr.%s\n", name);

                printf("Your balance is : \033[0;32m%i \033[0m\n", balance);
            }
            else if (operation == '4')
            {
                printf("Thank you for using Zakaria ATM\n");

                return 0;
            }

            else
            {
                printf("Incorrect operation\n");
            }

        } while (operation != '4');
    }
}
