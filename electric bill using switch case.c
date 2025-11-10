#include<stdio.h>
int main(){
	int units;
	float totalBill=0.0;
	printf("Enter the number of units consumed:");
	scanf("%d",&units);
	switch(units/100){
		case0://units from 0 to 100
		totalBill= units*5;
		break;
		case1://units from 101 to 200
		totalBill= units*7;
		break;
		default://units 201 and above
		totalBill= units*10;
		break;
	}
	printf("Total electricity bill: Rs.%.2f\n",totalBill);
	return 0;
}