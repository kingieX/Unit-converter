#include <stdio.h>
/**
 * main - program that convert temperature, currency and mass
 * 
 * 
 */
int main()
{
    char Category;
    int tempChoice;
    int currencyChoice;
    int massChoice;
    int inputF; //user inputted fahreinheit
    int inputC; //user inputted celsius
    int inputUSDtoNaira; //user input for USD to Naira
    int inputNairatoUSD; //user input for Naira to USD
    int inputOunce; //user input for Ounce
    int inputGram; //user input for Gram
    int ftoc; //variable that stores coverted F -> C
    int ctof; //variable that stores converted C -> F
    float USDtoNaira; //variable that stores converted USD to Naira
    float NairatoUSD; //variable that stores converted Naira to USD
    float ouncetoPounds; //variable that stores Ounce to Pounds
    float gramstoPounds; //variable that stores Grams to pounds

    printf("Welcome to Temperature, Currency and Mass Converter... \n");
    printf("To select Temperature Converter, press T \n");
    printf("To select Currency Converter, press C \n");
    printf("To Select Mass Converter, press M \n");
    scanf("%c", &Category);

    if (Category == 'T')
    {
        printf("TEMPERATURE CONVERTER \n");
        printf("To convert Fahrenheit to Celsius, press 1 \n");
        printf("To convert Celsius to Fehrenheit, press 2 \n");
        scanf("%d", &tempChoice);

        if (tempChoice == 1)
        {
            printf("Value of Temperature in degree Fahrenheit: \n");
            scanf("%d", &inputF);
            ftoc = ((inputF - 32) * (5.0 / 9.0));
            printf("Celsius: %d", ftoc);
        }
        else if (tempChoice == 2)
        {
            printf("Value of Temperature in degree Celsius: \n");
            scanf("%d", &inputC);
            ctof = ((9.0 / 5.0) * inputC + 32);
            printf("Temperature in Fahrenheit: %d", ctof);
        }
        else
        printf("Wrong Input!!! \n");
    }
    else if (Category == 'C')
    {
        printf("CURRENCY CONVERTER \n");
        printf("To convert USD to Naira, press 1 \n");
        printf("To convert Naira to USD, press 2 \n");
        scanf("%d", &currencyChoice);

        if (currencyChoice == 1)
        {
            printf("Enter Amount In USD: \n");
            scanf("%d", &inputUSDtoNaira);
            USDtoNaira = inputUSDtoNaira * 720;
            printf("Naira: %.2f", USDtoNaira);
            printf("valued at 720/dollar");
        }
        else if (currencyChoice == 2)
        {
            printf("Enter Amount In Naira: \n");
            scanf("%d", &inputNairatoUSD);
            NairatoUSD = inputNairatoUSD / 720;
            printf("USD: %.2f", NairatoUSD);
            printf("valued at 720/dollar");
        }
        else
        printf("Wrong input!!! \n");
    }
    else if (massChoice == 'M')
    {
        printf("MASS CONVERTER \n");
        printf("To convert Ounce to Pounds, press 1 \n");
        printf("To Gram to pounds, press 2 \n");
        scanf("%d", &massChoice);
        if (massChoice == 1)
        {
            printf("Enter tha Mass in Ounce: \n");
            scanf("%d", &inputOunce);
            ouncetoPounds = inputOunce * 0.0625;
            printf("Pounds: %.2f", ouncetoPounds);
        }
        else if (massChoice == 2)
        {
            printf("Enter tha Mass in Gram: \n");
            scanf("%d", &inputGram);
            gramstoPounds = inputGram * 28.3495;
            printf("Pounds: %.2f", gramstoPounds);
        }
    else
    printf("Wrong Input!!!");
    }
    
    return 0;
}