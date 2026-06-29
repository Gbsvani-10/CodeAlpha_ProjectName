#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int choice;
	float a, b;

	while(1)
	{
		printf("\n Enter two numbers: ");
		scanf("%f %f", &a, &b);
	
		printf("\n Choose operation: \n");
		printf("1. Addition\n2.Subtraction\n3. Multiplication\n4. Division\n5.Modulus\n6.Power\n7.Exit");
		scanf("%d", &choice);
	
		switch(choice)
		{
			case 1:
				printf("\n Result = %.4f\n", a + b);
				break;
			case 2:
				printf("\n Result = %.4f\n", a - b);
				break;
			case 3:
				printf("\n Result = %.4f\n", a * b);
				break;
			case 4:
				if(b != 0)
        			printf("\n Result = %.4f\n", a / b);
    			else
        			printf("\n Division by zero error\n");
    			break;
			case 5:
				 if(b != 0)
        			printf("\n Result = %.4f\n", fmod(a, b));
    			 else
        			printf("\n Modulus by zero error\n");
    			 break;
			case 6:
    			printf("\n Result = %.4f\n", pow(a,b));
    			break;
			case 7:
				exit(0);
			default:
				printf("\n Invalid choice\n");
				break;
		}
	}
	
	return 0;
}
