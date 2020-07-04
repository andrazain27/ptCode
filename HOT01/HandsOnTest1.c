#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char customerName[20];
    char tripPackage;
    char contactNumber[15];
    int numPerson,continueSession=1;
    float currentPrice,totalPrice=0;
    
    //NAME 
    printf("\nEnter Name :");
    fgets(customerName,20,stdin);
    //CONTACT NO
    printf("\nEnter Contact Number :");
    scanf("%s",&contactNumber);
    //WELCOME
    printf("\nWelcome %s to Berjaya Tioman Tourism.", customerName);
    while(continueSession==1)
    {
        numPerson=0;
        currentPrice=0;
        printf("\nTRIP A - Round Tioman Island (6 sites)");
        printf("\nTRIP B - Coral Island/Snorkeling Tour (4 sites)");
        printf("\nTRIP C - Fishing & Snorkeling");
        //PACKAGE
        printf("\nTRIP PACKAGE [A/B/C] :");
    
        scanf("%s",&tripPackage);
        int tripA=strcmp(&tripPackage,"A");
        int tripB=strcmp(&tripPackage,"B");
        int tripC=strcmp(&tripPackage,"C");

        if(tripA==0)
        {
            printf("\nTrip A - Round Tioman Island");
            printf("\nVisit six(6) sites starts from Mukut Waterfall, Juara Village, Deep Bay, Reef Shark, Marine Park and Renggis Island.");
            printf("\nNo of person (pax) :");
            scanf("%i",&numPerson);
            if (numPerson<=4)//4PAX
            {
                currentPrice=850;
            }
            else if (numPerson<=8)//5-8PAX
            {
                currentPrice=1300;
            }
            else if (numPerson<=12)//9-12PAX
            {
                currentPrice=2050;
            }
            printf("\nYour trip price for %i PAX : RM%.2f",numPerson,currentPrice);
            
            
        }else if (tripB==0)
        {
            printf("\nTrip B - Coral Island/Snorkeling Tour");
            printf("\nVisit four (4) sites starts from Coral Island, Malang Rock, Marine Park and Renggis Island");
            printf("\nNo of person (pax) :");
            scanf("%i",&numPerson);
            if (numPerson<=4)//4PAX
            {
                currentPrice=550;
            }
            else if (numPerson<=8)//5-8PAX
            {
                currentPrice=850;
            }
            else if (numPerson<=12)//9-12PAX
            {
                currentPrice=1350;
            }
            printf("\nYour trip price for %i PAX : RM%.2f",numPerson,currentPrice);
        }else if (tripC==0)
        {
            printf("\nTrip C - Fishing & Snorkeling");
            printf("\nEnjoy our fishing exploration at Malang Rock and Renggis Island.");
            printf("\nNo of person (pax) :");
            scanf("%i",&numPerson);
            if(numPerson>=4&&numPerson<=12)//4-12PAX
            {
                currentPrice=120*numPerson;
            }
            printf("\nYour trip price for %i PAX : RM%.2f",numPerson,currentPrice);

        }
        totalPrice=totalPrice+currentPrice;
        printf("\nEnd session?[0:End/1:Continue]");
        scanf("%i",&continueSession);
    }
    printf("\nEnjoy the trip!");
    printf("\nTotal to pay is : RM%.2f",totalPrice);
    

    return 0;
}

