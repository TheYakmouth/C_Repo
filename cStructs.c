
#include <stdio.h>
#include <stdlib.h>

struct employee{
	char *name;
	float wage;
	float hours;
};

int main(int argc, char **argv){
	const int NUMEMPLOYEE = 3;
	
	struct employee *curr_employee;
	struct employee *employees = (struct employee *) malloc(NUMEMPLOYEE * sizeof(struct employee));	
	float totalPay = 0;
	
	curr_employee = employees + 0;
	curr_employee->name = "Bob Smith";
	curr_employee->wage = 20.94;
	curr_employee->hours = 20.4;
	totalPay += (curr_employee->wage*curr_employee->hours);
	
	printf("Employee: %s, Wage: %.2f, Hours: %.1f\n",curr_employee->name, curr_employee->wage, curr_employee->hours);
	
	curr_employee = employees + 1;
	curr_employee->name = "Sue Jones";
	curr_employee->wage = 22.33;
	curr_employee->hours = 12.3;
	totalPay += (curr_employee->wage*curr_employee->hours);
	
	printf("Employee: %s, Wage: %.2f, Hours: %.1f\n",curr_employee->name, curr_employee->wage, curr_employee->hours);
	
	curr_employee = employees + 2;
	curr_employee->name = "Carlos Suarez";
	curr_employee->wage = 21.44;
	curr_employee->hours = 15.0;
	totalPay += (curr_employee->wage*curr_employee->hours);
	
	printf("Employee: %s, Wage: %.2f, Hours: %.1f\n",curr_employee->name, curr_employee->wage, curr_employee->hours);
	
	float avgPay = totalPay/NUMEMPLOYEE;
	printf("Average Paycheck: %.2f\n",avgPay);
}
