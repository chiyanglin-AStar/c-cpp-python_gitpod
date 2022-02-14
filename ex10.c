#include<stdio.h>
typedef int bool;

#define true 1
#define false 0

int main(void){
	int x,y; 
	int bool_value;
	bool bValue;
	
	x = 3 ; y= 4; 
	printf(" x = %d , y = %d \n",x,y);
	bool_value = ( x > y );
	bValue = ( x > y );
	printf(" x > y ==> %d \n",bool_value);
	printf(" x > y bool = %d \n",bValue);
	bool_value = ( x < y );
	bValue = ( x < y );
	printf(" x < y ==> %d \n",bool_value);	
	printf(" x < y bool = %d \n",bValue);
	bool_value = (x < 5 && x < 10);	
	bValue = (x < 5 && x < 10);
	printf(" x < 5 &&  x < 10 ==> %d \n",bool_value);	
	printf(" x < 5 &&  x < 10 bool =  %d \n",bValue);		
}
