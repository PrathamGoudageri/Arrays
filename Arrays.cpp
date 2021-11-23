#include<stdio.h>
 
int main()
{
 	int  rows, columns, a[10][10], Sum = 0;

 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < 3; rows++)
  	{
   		for(columns = 0;columns < 3;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < 3; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
