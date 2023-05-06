#include<stdio.h>
#include <string.h>
  struct student 
  {
      char name[50],address[60];
      int age, cell_number;

  }s[10];
  int main()
  {
   
      FILE*p=NULL;
      int n;
      scanf("%d",&n);
      p=fopen("student.txt","w");
      for(int i=0;i<n;i++)
{
    printf("enter the name of student:\n ");
    scanf("%s",&s[i].name);
    printf("enter the address of student: \n");
    scanf("%s",&s[i].address);
    printf("enter the age of student:\n ");
    scanf("%d",&s[i].age);
    printf("enter the cell_number of student:\n ");
    scanf("%d",&s[i].cell_number);
}
 for(int i=0;i<n;i++)
{
char str1[] = "pokhara";
   if(strcmp(str1,s[i].address)==0){
   printf("name of student=%s\n",s[i].name);
    printf("address of student=%s\n",s[i].address);
    printf("age of student=%d\n",s[i].age);
    printf("cell_number of student=%d\n",s[i].cell_number);
   }
   else{
    printf("You have not input pokhara\n");
   }
  
}
fclose(p);
return 0;
  }