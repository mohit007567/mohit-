#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    do {
    printf("\n==== arithmetic calculator ====\n");
    printf("1. addition \n");
    printf("2. subtraction \n");
    printf("3. multiplication \n");
    printf("4. division \n");
    printf("5. exit\n");
    printf("enter your choice (1-5): ");
    scanf("%d", &choice);
    switch (choice){
    	case 1:
    		printf("enter two number: ");
    		scanf("%lf %lf", &num1, &num2);
    		result = num1 + num2;
    		printf("result: %.21f = %.21f\n",num1, num2,result);
    		break;
          case 2:
    		printf("enter two number: ");
    		scanf("%1f %1f", &num1, &num2);
    		result = num1 + num2;
    		printf("result: %.21f = %.21f\n",num1, num2,result);
    		break;
          case 3:
    		printf("enter two number: ");
    		scanf("%1f %1f", &num1, &num2);
    		result = num1 + num2;
    		printf("result: %.2lf = %.2lf\n",num1, num2,result);
    		break;
    	case 4:
    		printf("enter two numbers: ");
    		scanf("%1f %1f", &num1, &num2);
    		if (num2 == 0){
    		printf("error:division by zero is not allowed.\n");
    		} else{
    		  result = num1 / num2;
    		  printf("result: %.21f / %21f =.21f\n", num1, num2, result);
                    }
                    break; 
	case 5:
                    printf("exiting the program ");
                    break;
                    default:
                    	printf("invalid choice! please enter a number between 1 and 5");
                    }
                    
    } while (choice !=5);
    return 0;
    }
