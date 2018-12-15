/*how to code a multiplication table*/
#include<stdio.h>//tihs is a library which decides the keywords you use or make the sysytem understand there are many declare types as in the c libraries.
void main()//this is the main function from whic your system will learn what to do. 
{
	int num,count,i,product;//this is the declaratiob type which decides whic numbers are you using (intergers,rational numbers etc.)all have different declarations.
	printf("Enter an integer:\n");//the printf statement helps you to convey the message about some inputs or warnings that have alredy been coded.
	scanf("%d",&num);//the scanf statement uses  to scan or read the data that you user gives to the system for input.
    printf("Now enter the count :\n");
    scanf("%d",&count);
    for(i=1;i<=count;i++)//these are loops whic have imits to work on with it you can set up some numbe of lines of code to just 3 lines with the help of loops you can find all types of loops online...
    	{
    		product=num*i;
    		printf("%d*%d=%d",num,i,product);
    		printf("\n");
    	}	
}
/*the brackets indicates that the functions or the part of body is terminated they play an important role
these\*,\\,*///are generally used by the coders to convey some messages to the users !!!THESE ARE NOT A PART OF CODE!!!These are just statements written by the coders in their languages.
//!!!HAVE FUN!!! 