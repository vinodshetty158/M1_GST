#include<stdio.h>
#include"cgst.h"
#include<stdlib.h>
#include"sgst.h"
#include<math.h>
#include<string.h>
int main()
{
char name;
printf("Enter the name of the product:\n");
scanf("%s",&name);
float price;
printf("Enter the base price of the product:\n");
scanf("%f",&price);
printf("Select the number that gst should be calculated:\n");
printf("1.5 percentage\n");
printf("2.12 percentage\n");
printf("3.18 percentage\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
case 1:
cgst1(price);
sgst1(price);
break;
case 2:
cgst2(price);
sgst2(price);
break;
case 3:
cgst3(price);
sgst3(price);
break;
default:
printf("Enter the valid input\n");
printf("exit");
break;
}
float sum;
printf("the total amount for the producct is %f\n");
printf("Enter the discount percentage for the product:\n");
float discount;
scanf("%f",&discount);
float total;
total=(discount/100);
printf("The total amount for the product to be paid is %f\n",total);
}

