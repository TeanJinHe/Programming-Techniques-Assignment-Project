//number 1
#include <stdio.h>
int main()
{
    int respond;
    float electric, rate, price, charge, totalprice;
    char subID[10], address[50], month[15], residency;

    do
    {
        printf(" Subscriber ID : ");
        gets(subID);
        fflush(stdin);

        printf(" Address : ");
        gets(address);
        fflush(stdin);

        printf(" Residency (R-Resident | N-Non Resident) : ");
        scanf(" %c", &residency);

        printf("Electricity Comsumption (kWh) : ");
        scanf(" %f", &electric);

        {
        if(residency== 'R'&& 'r' )
            {
            if (electric<=300)
                {
                rate=0.218;
                price= electric *rate;
                }

            else if (electric<=600)
                {
                rate=0.334;
                price= electric *rate;
                }

            else if (electric<=1000)
                {
                rate=0.516;
                price= electric *rate;
                }

            else
                {
                rate=0.546;
                price= electric *rate;
                }
            }

        else
            {
            if (electric<=300)
                {
                rate=0.318;
                price= electric *rate;
                }

            else if (electric<=600)
                {
                rate=0.434;
                price= electric *rate;
                }

            else if (electric<=1000)
                {
                rate=0.616;
                price= electric *rate;
                }

            else
                {
                rate=0.646;
                price= electric *rate;
                }
            }
        }
        {
         if(price>=50)
            charge = price*0.1;
        else
            charge = 0;
        }
        totalprice = price + charge;
        printf("\n------------------------Electricity Bill---------------------");
        printf("\nSubscriber ID : %s", subID);
        printf("\nAddress : %s", address);
        printf("\nMonth : %s", month);
        printf("\nElectricity Consumption : %.f kWh", electric);
        printf("\nGET Rate : %.3f sen/kWh", rate);
        printf("\nElectricity Charge : RM%.2f", price);
        printf("\nService Charge (10%) : RM%.2f", charge);
        printf("\nTOTAL AMOUNT PAID : RM%.2f", totalprice);

        printf("Continue? 1-Next Subcriber | 0-Exit : ");
        scanf("%d", &respond);
    }
    while (respond != 0);
    return 0;
}
