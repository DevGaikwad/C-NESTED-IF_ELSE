
//code no :1
#include<stdio.h>

int main()
{
	 int num1, num2, num3;
	 printf("Enter three numbers:\n");
	 scanf("%d%d%d",&num1, &num2, &num3);
	 if(num1>num2)
	 {
		
		  if(num1>num3)
		  {
		   	printf("Largest = %d", num1);
		  }
		  else
		  {
		   	printf("Largest = %d", num3);
		  }
	 }
	 else
	 {
		
		  if(num2>num3)
		  {
		   	printf("Largest = %d", num2);
		  }
		  else
		  {
		   	printf("Largest = %d", num3);
		  }
	 }
	 return(0);
}

// code no :2
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        int choice1;
        printf("Enter second choice:");
        scanf("%d",&choice1);

        if(choice1==1)
        {
            printf("you have own prize redeem it");
        }
        else
        {
            printf("better luck next time");
        }
    }
    else{
        if(choice==2)
        {

            printf("you have enter wrong number");
        }
    }
    return 0;
}
