/*
Write a program that prompts the user for the gender,
height and weight, and then analyzes the ratio of height and weight, giving recommendations for further action (lose weight, get fat,
norm)
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
float BMI=0., height=0., weight=0.;
bool gender;
printf("Enter your height in centimeters:\n");
scanf("%f",&height);
printf("Enter your weight in kilograms:\n");
scanf("%f",&weight);
BMI=weight/pow(height/100.0,2);
system("cls");
printf("Your BMI: %f", BMI);
printf(" kg/m^2\n");
getch();
	if (BMI < 16.0)
	{
		printf("The critical shortage of weight\nRecommendation: Gain weight");
	}
	if (16.0<BMI && BMI<18.5)
	{
		printf("Weight deficit\nRecommendation: Dial a little weight");
	}
	if (18.5<BMI && BMI<24.99)
	{
		printf("Norm\nRecommendation: All right");
	}
	if (25.0<BMI && BMI<30.0)
	{
		printf("Pre-Obese\nRecommendation:Little to lose weight");
	}
	if (30.0<BMI && BMI<35.0)
	{
		printf("Obesity is the first degree\nRecomendation: Lose weight");
	}
	if (35.0<BMI && BMI<40.0)
	{
		printf("Obesity is the second degree\nRecomendation: Very lose weight");
	}
	if (40.0<BMI)
	{
		printf("Obesity third degree\nRecomendation: Very much to lose weight");
	}
	
	getch();
	
	return 0;
}