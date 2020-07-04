/*
Author : Darwish Mat Zain
Update :
04072020 0520...complete task 15
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *myfileIn;
    FILE *myfileOut;
    int num[2];
    
    //check input file
    myfileIn=fopen("andrasystem.txt","w");//open myfileIn as write
    if(myfileIn==NULL)//No file, Infiltration Mission Failed Successfully
    {
        printf("\nError : File 400 Bad Request");
        exit(1);
    }
    //read value, write to file myfileIn
    for (int a = 0; a < 2; a++)//read input, output in myfileIn
    {
        printf("\nEnter number %i:",a+1);
        scanf("%d",&num[a]);
        fprintf(myfileIn,"%d\n",num[a]);
    }
    
    fclose(myfileIn);//close myfileIn
    myfileIn=fopen("andrasystem","r");//reopen myfileIn as read
    
    //read value in file myfileIn
    for(int b=0;b<2;b++)//read in myfileIn until newline
    {
        fscanf(myfileIn,"%d[^\n]",&num[b]);
    }
    
    myfileOut=fopen("andraoutput.txt","w");//open myfileOut as write
    if(myfileOut==NULL)//No file. Extraction Mission Failed Successfully
    {
        printf("\nError : File 404 Not Found");
        exit(1);
    }
    //check num, output in myfileOut
    if(num[0]>num[1])
    {
        fprintf(myfileOut,"\nThe biggest value is %d",num[0]);
        printf("Ha");
    }
    else
    {
        fprintf(myfileOut,"\nThe biggest value is %d",num[1]);
        printf("Hi");
    }
    fclose(myfileOut);
    fclose(myfileIn);

    return 0;
}
