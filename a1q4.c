// program to check whether the given character is alphabet ,digit , special character 

#include<stdio.h>
void main()
{
	char ch ;
	int temp;
	printf("enter the input: \n");
	scanf("%c",&ch);
	printf("\nascii value of given input=%d",ch);
	temp=ch;
	if(temp<=47)
	printf("\ninput is special charcter");
	else if((temp>=48)&&(temp<=57))
	printf("\n input is digit ");	
	else if((temp>=65)&&(temp<=90))
	printf("\n input is upper case letter ");
	else if((temp>=91)&&(temp<=96))
	printf("\n input special charactter");
	else if((temp>=97)&&(temp<=122))
	printf("\n input is lower case letter ");
	else 
	printf("\n input is special chracter ");


}
