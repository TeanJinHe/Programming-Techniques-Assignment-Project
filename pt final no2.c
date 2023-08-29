//number 2
#include <stdio.h>
float calculatepayment(float);
void displaypayment(float totalprice);
float input_payment();
float calculatebalance(float totalprice, float payment);
float displaynote(float balance);

int main()
{
    int quantity[10], i, respond;
    float price, totalprice, payment, balance;
    printf("\tWelcome to Cash Machine System");
    printf("\n-----------------------------------------\n");
    printf("\nEnter your payment in each note quantity\n");
    do
    {
        totalprice= calculatepayment(totalprice);
        displaypayment(totalprice);
        payment = input_payment();
        printf("Your balance is : %.2f", calculatebalance(totalprice, payment));
        balance = calculatebalance(totalprice, payment);
        displaynote(balance);
        printf("Do you want to continue? 1=Yes, 0=No : ");
    }
    while(respond != 0);
    printf("\nThank you for using Cash Machine System");
    return 0;

}

float calculatepayment(float totalprice)
{
    int quantity[9], i;
    float price[9], total_price=0;
    printf("RM100 : ");
    scanf("%d", &quantity[0]);
    printf("RM50 : ");
    scanf("%d", &quantity[1]);
    printf("RM20 : ");
    scanf("%d", &quantity[2]);
    printf("RM10 : ");
    scanf("%d", &quantity[3]);
    printf("RM5 : ");
    scanf("%d", &quantity[4]);
    printf("RM1 : ");
    scanf("%d", &quantity[5]);
    printf("RM0.50 : ");
    scanf("%d", &quantity[6]);
    printf("RM0.20 : ");
    scanf("%d", &quantity[7]);
    printf("RM0.10 : ");
    scanf("%d", &quantity[8]);

    price[0] = 100 * quantity[0];
    price[1] = 50 * quantity[1];
    price[2] = 20 * quantity[2];
    price[3] = 10 * quantity[3];
    price[4] = 5 * quantity[4];
    price[5] = 1 * quantity[5];
    price[6] = 0.5 * quantity[6];
    price[7] = 0.2 * quantity[7];
    price[8] = 0.1 * quantity[8];

    for(i=0; i<9; i++)
    {
      total_price= total_price + price[i];
    }
    return total_price;
}

void displaypayment(float x)
{
    printf("Your total payment is : %.2f", x);
}

float input_payment()
{
    float payment;
    printf("Enter your total purchase. Purchase MUST BE < payment : ");
    scanf("%.2f", &payment);
    return payment;
}

float calculatebalance(float totalprice, float payment)
{
    float balance;
    balance = totalprice - payment;
    return balance;
}

float displaynote(float x)
{
    int note;
    float balance;
    note = balance/100;
	printf("RM100: %d", note);
	balance = balance-(note*100);

	note = balance/50;
	printf("RM50: %d", note);
	balance = balance-(note*50);

	note = balance/20;
	printf("RM20: %d", note);
	balance = balance-(note*20);

	note = balance/10;
	printf("RM10: %d", note);
	balance = balance-(note*10);

	note = balance/5;
	printf("RM5: %d", note);
	balance = balance-(note*5);

	note = balance/2;
	printf("RM2: %d", note);
	balance = balance-(note*2);

	note = balance/1;
	printf("RM1: %d", note);
	balance = balance-(note*1);

	note = balance/0.5;
	printf("RM2: %d", note);
	balance = balance-(note*0.5);

	note = balance/0.2;
	printf("RM1: %d", note);
	balance = balance-(note*0.2);

	note = balance/0.1;
	printf("RM2: %d", note);
	balance = balance-(note*0.1);
}
