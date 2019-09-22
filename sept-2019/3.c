//Program to create a Student structure array, pass it to function, print that array in that function//
#include<stdio.h>
#include<string.h>

struct Student {
 char name[20];
 int rollNo;
};
void printstruct(struct Student studentArray[5]);
void main()
{
     struct Student studentArray[5];
     strcpy(studentArray[0].name,"DEEPAK");
     studentArray[0].rollNo=14;
     strcpy(studentArray[1].name,"DINESH");
     studentArray[1].rollNo=12;
     strcpy(studentArray[2].name,"RAMA");
     studentArray[2].rollNo=35;
     strcpy(studentArray[3].name,"SUDHAKAR");
     studentArray[3].rollNo=34;
     strcpy(studentArray[4].name,"DIVI");
     studentArray[4].rollNo=31;
     printstruct(studentArray);     
}

void printstruct(struct Student studentArray[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Name : %s\trollNo : %d\n",studentArray[i].name,studentArray[i].rollNo);
    }
}