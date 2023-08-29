//number 3
#include <stdio.h>
int main()
{
    int numvillage, numbervolunteer[30], i, j, h, gift, totalvolunteer =0;
    float price, totalprice[30], charge, totalcharge, totaldonation =0, quantity[30], totalquantity =0;
    char name[10][40], type[30][10];

    printf("Enter number of village : ");
    scanf("%d", &numvillage);

    for(i=0; i<numvillage; i++)
    {
        printf("Enter name of village #%d : ", i+1);
        scanf(" %s", &name[i]);
        printf("Enter number of volunteers for %s : ",name[i]);
        scanf("%d", numbervolunteer[i]);
        printf("Enter number of gift hampers type for %s : ", name[i]);
        scanf("%d", &gift);
        for(j=0; j<gift; j++)
        {
            printf("Enter gift hamper type #%d (C, R, B, A or N): ",j+1);
            scanf(" %c", &type[j]);
            printf("Enter quantity for gift hamper type %c : ", type[j]);
            scanf(" %f", &quantity[j]);
            {
            if (type== 'C')
                {
                    price= 55;
                    totalprice= 55 * quantity;
                }
            else if (type== 'R')
                {
                    price= 72.5;
                    totalprice= 72.5 * quantity;
                }
            else if (type== 'B')
                {
                    price= 100;
                    totalprice= 100 * quantity;
                }
            else if (type== 'A')
                {
                    price= 125;
                    totalprice= 125 * quantity;
                }
            else
                {
                    price= 75;
                    totalprice= 75 * quantity;
                }
            }
            totalvolunteer = totalvolunteer + numbervolunteer[j];
            totaldonation = totaldonation + totalprice[j];
            totalquantity = totalquantity + quantity[j];
        }
        charge[i]= numbervolunteer*10.5;
        totalcharge = totalcharge + charge[i];
        printf("\n----------------------------------------------------------");
    }
    for(h=0;h<i;h++)
    {
        printf("\n-----------------------------------------------------------------------------");
        printf("\nVillage\tGift Hamper Type\tHampers Quantity\tTotal Donation(RM)");
        printf("\n-----------------------------------------------------------------------------");
        printf("\n%s\t\t%c\t\t%d\t\t%.2f", name[h],type[h],quantity[h], totalprice[h]);
        printf("\nExpenses for Volunteers (RM): %.2f", charge[h]);
    }
    printf("\nTotal number of village : %d", numvillage);
    printf("\nTotal quantity of hampers : %d", totalquantity);
    printf("\nTotal donation (RM) : %.2f", totaldonation);
    printf("\nTotal number of volunteers : %d", totalvolunteer);
    printf("\nTotal expenses for volunteer (RM): %.2f", totalcharge);
    printf("\n-----------------------------------------------------------------------------");
    return 0;
}
