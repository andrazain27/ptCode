#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void fileFunction(FILE *thatFile);
void fromFile(int a);
float justCalculate(float b, float c);

FILE *myFile, *oFile;
int i;
char name[5][15];
int age[5];
float amount[5],expenses[5],balance[5];

int main()
{
    myFile=fopen("file01.txt","r");
    oFile=fopen("output.txt","a");
    fileFunction(myFile);
    fileFunction(oFile);
    
    for (i=0;i<5;i++)
    {
        printf("[%d]",i+1);
        fromFile(i);
        balance[i]=justCalculate(amount[i],expenses[i]);
        //balance[i]=amount[i]-expenses[i];
        fprintf(oFile, "%s %d %.2f\n",name[i], age[i], balance[i]);

    }

    fclose(myFile);
    fclose(oFile);

    return 0;
}


void fileFunction(FILE *fileName)
{
    if(fileName==NULL)
    {
        printf("Internal Database Error\n");
        printf("Please report any issues at https://github.com\n");
    }
}
void fromFile(int a)
{
    fscanf(myFile,"%s", &name[a]);
    printf("%s ", name[a]);
    fscanf(myFile,"%i", &age[a]);
    printf("%i ", age[a]);
    fscanf(myFile,"%f", &amount[a]);
    printf("%.2f ", amount[a]);
    fscanf(myFile,"%f ", &expenses[a]);
    printf("%.2f \n", expenses[a]);
}
float justCalculate(float b, float c)
{
    float d;
    return b-c;
}
