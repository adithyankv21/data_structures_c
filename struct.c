#include<stdio.h>
struct Student
{
  int rollno;
  char name[20];
  float mark;
};
int main()
 {
   struct Student s;
   
   printf("enter the roll number:");
   scanf("%d",&s.rollno);
   
   printf("enter name:");
   scanf("%19s",s.name);
   
   printf("enter mark:");
   scanf("%f",&s.mark);
   printf("\nStudent Details\n");
   printf("Roll number: %d\n",s.rollno );
   printf("Name:%s\n",s.name);
   printf("Mark:%.2f\n",s.mark);
   
   return 0;
}
