#include<stdio.h>
#include<string.h>
struct students {
    int rollno;
    char class[100] ;
    float cgpa;
    char name[100];
};
struct teacher {
    char name[100];
    char subjecteacher[100];
    char post[100];

};
struct other{
     int salary;
     char name[200];
     char post[100];
};
typedef struct computerEngineer{
int salary;
char name[100];
char work[180];
}ce;


int main() {
    struct students s1;
    s1.rollno=100;
    strcpy(s1.class,"B.c.a");
    s1.cgpa=9.2;
    strcpy(s1.name,"Ankit");

    printf("student rollno= %d\n",s1.rollno);
     printf("student class= %s\n",s1.class);
      printf("student cgpa%f\n",s1.cgpa);
      printf("student name %s\n\n",s1.name);
    
    
    struct students s2;
    s2.rollno=101;
    strcpy(s2.class,"B.c.a");
    s2.cgpa=9.0;
    strcpy(s2.name,"Rahul");

    printf("student rollno= %d\n",s2.rollno);
     printf("student class= %s\n",s2.class);
      printf("student cgpa%f\n",s2.cgpa);
      printf("student name %s\n\n",s2.name);
    struct students s3;
    s3.rollno=102;
    strcpy(s3.class,"B.c.a");
    s3.cgpa=7.0;
    strcpy(s3.name,"Manish");

    printf("student rollno= %d\n",s3.rollno);
     printf("student class= %s\n",s3.class);
      printf("student cgpa%f\n",s3.cgpa);
      printf("student name %s\n\n",s3.name);
    
    struct students s4;
    s4.rollno=103;
    strcpy(s4.class,"B.s.c");
    s4.cgpa=6.0;
    strcpy(s4.name,"komal");

    printf("student rollno= %d\n",s4.rollno);
     printf("student class= %s\n",s4.class);
      printf("student cgpa%f\n",s4.cgpa);
      printf("student name %s\n\n",s4.name);
    
    struct teacher t1={"Rakesh", "Hindi","principal"};
    
    printf("teacher name =:%s\n",t1.name);
    printf("teacher subject =:%s\n",t1.subjecteacher); 
    printf("teacher post =:%s\n\n",t1.post);
    
   struct teacher t2={"Radha", "art","new_teacher"};
    
    printf("teacher name =:%s\n",t2.name);
    printf("teacher subject =:%s\n",t2.subjecteacher); 
    printf("teacher post =:%s\n\n",t2.post);
   
struct teacher t3={"Vijay", "English","professor"};
    
    printf("teacher name =:%s\n",t3.name);
    printf("teacher subject =:%s\n",t3.subjecteacher); 
    printf("teacher post =:%s\n\n",t3.post);
    
    struct computerEngineer c1;
       c1.salary=5000;
       strcpy(c1.name,"Danav");
       strcpy (c1.work,"camera check");
      printf("computerEngineer salary %d\n",c1.salary);
    printf("computerEngineer name %s\n",c1.name);
    printf("computerEngineer work %s\n\n",c1.work);
    
    struct other l1={1000,"ramu","warden"};
    printf("other salary=:%d\n",l1.salary);
     printf("other name=:%s\n",l1.name);
     printf("other post=:%s\n\n",l1.post);
    
    struct other l2={100,"ramlal","swapper"};
    printf("other salary=:%d\n",l2.salary);
     printf("other name=:%s\n",l2.name);
     printf("other post=:%s\n\n",l2.post);
   
   
    return 0;
        
}    
