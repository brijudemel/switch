#include<stdio.h>
int main()
{
	int c;
	printf("Enter a random number from 1 to 5: \n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\n Food Item - Noodles \n Price - Rs 189 \n");
			break;
		case 2:
			printf("\n Food Item - Pani Puri \n Price - Rs 59 \n");
			break;
		case 3:
			printf("\n Food Item - Shawarma \n Price - Rs 99 \n");
			break;
		case 4:
			printf("\n Food Item - Bread Omelette \n Price - Rs 49 \n");
			break;
		case 5:
			printf("\n Food Item - Tandoori \n Price - Rs 349 \n");
			break;
		default:
			printf("INVALID NUMBER. You are asked to enter a number from 1 to 5.");
	}
	return 0;
}
