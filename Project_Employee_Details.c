#include<stdio.h>
#include<string.h>
#include<time.h>
struct emp
{
	int emp_id;
    long int emp_salary;
    long long int emp_contact;
	char emp_name[30],emp_email[30];
}e[10];
int count = 0;
void add();
void display();
void search();
void e_delete();
void update();
void count_emp();
void order();
void max();
void between();
int main ()
{
	int choice,z;
	do
	{   
        system("CLS");
		printf("\n Enter 1 for Add employee Details ");
		printf("\n Enter 2 for Display All Employee Details ");
		printf("\n Enter 3 for Search Employee Details ");
		printf("\n Enter 4 for Delete Employee Details ");
		printf("\n Enter 5 for Update Employee Details ");
		printf("\n Enter 6 for Display Count of the of the employee in company");
		printf("\n Enter 7 for Details the Employee in Ascending Order ");
        printf("\n Enter 8 for Details of highest Salary Employee ");
        printf("\n Enter 9 for Details of Salary 10000 to 60000 in between ");
		printf("\n\n ************ ENTER YOUR CHOICE *************\n");
		scanf("%d",&choice);
		system("CLS");
		switch (choice)
		{
		    case 1: add();
					break;
		    case 2: display();
			 		break;
		    case 3:	search();
			 		break;
			case 4: e_delete();
			 		break;
			case 5: update();
			 		break;
			case 6: count_emp ();
					break;
			case 7: order();
			 		break;
            case 8: max();
                    break;        
            case 9: between();
                    break;  
            case 10: 
                    break;             
			default: printf("\n Invalid Choice ");			
		}
		printf("\n Enter 1 for continue ");
        scanf("%d",&z);
	}
    while(z==1);
    printf("\n *****THANKS YOU****");
}
// Add Employee Details
void add()
{
    system("CLS");
    if(count==10)
    {
        printf("\n Data Full.....Cant Add ");

    }
    else
    {
        printf("\n<<<<<<<<<<< Add Employee Details >>>>>>>>>>>>");
        printf("\n enter ID :- ");
        scanf("%d",&e[count].emp_id);
        _flushall();
        printf("\n Enter Name:-");
        gets(e[count].emp_name);
        _flushall();
        printf("\nEnter Salary :- ");
        scanf("%ld",&e[count].emp_salary);
        _flushall();
        printf("\nEnter Contact :- ");
        scanf("%lld",&e[count].emp_contact);
        _flushall();
        printf("\nEnter Email:-");
        gets(e[count].emp_email);
        count++;
    }
}
//    to display details of employee
void display()
{   
    system("CLS");
    int i;
    printf("\n<<<<<<< Employee Records >>>>>>>>>>>>");
    printf("\nID\tNAME\tSalary\tContact\tEmail ");
    for(i=0; i<count; i++)
    {
        _flushall();
        printf("\n%d\t%s\t%ld\t%lld\t%s\n",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
    }
}
//  search employee 
void search()
{
    system("CLS");
   int i,ch1,y,sid,sal,k=0;
   long long int s_contact;
   char sname[10],s_email[15];
   do 
    {
        printf("\n ************* Search Employee *************");
        printf("\n press 1 by search ID ");
        printf("\n press 2 by search Name ");
        printf("\n press 3 by search email ");
        printf("\n press 4 by search salary ");
        printf("\n press 5 by search contact ");
        printf("\n <<<<< press 6 for Exit >>>>> ");
        printf("\n **********Your Choice************");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1: 
                {
                    system("CLS");
                    printf("\n enter ID thats employee wanted to search ");
                    _flushall();
                    scanf("%d",&sid);
                    _flushall();
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        _flushall();
                        if(e[i].emp_id==sid)
                        {
                            printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                            k++;
                        }               
                    }   
                    if(k==0)
                    {
                        printf("\n Enter ID not match....!!");
                    }                
                }
                break;
            case 2: 
                {
                    system("CLS");
                    printf("\n Enter Name that wanted to search ");
                    _flushall();
                    gets(sname);
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {   
                        _flushall();
                        if(strcmp(e[i].emp_name,sname)==0)
                        {
                            printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                            k++;
                        }                       
                    }
                    if(k==0)
                    {
                        printf("\n Enter Name not match....!!");
                    }
                }
                    break;
            case 3: 
                {   
                    system("CLS");
                    printf("\n Enter Email that wanted to be search ");
                    _flushall();
                    gets(s_email);
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        _flushall();
                        if(strcmp(e[i].emp_email,s_email)==0)
                        {
                            printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n Enter Email not match....!!");
                    }
                }
                    break;
            case 4:
                {
                    system("CLS");
                    printf("\n Enter Salary thats wanted to be search ");
                    scanf("%d",&sal);
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        if(e[i].emp_salary==sal)
                        {
                            printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n Enter Name not match....!!");
                    }
                }
                    break;
            case 5:
                {
                    system("CLS");
                    printf("\nEnter Contact thats wanted to be search ");
                    scanf("%ld",&s_contact);
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        if(e[i].emp_contact==s_contact)
                        {
                            printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n Enter Name not match....!!");
                    }
                }
                    break;
            
            case 6:
                    break;
            default: printf("\n Not valid choice ");
            
        }
        
    }
    while(ch1!=6);
}
//delete the employee data
 void e_delete()

{

    int i,j,id,ch2,x,sal1;
    long long int s_contact;
    char name[10],s_email[15];
    int k=0;
    do
    {
        printf("\n************Delete Employee Details************");
        printf("\n Enter 1 by ID ");
        printf("\n Enter 2 by Name ");
        printf("\n Enter 3 by email ");
        printf("\n Enter 4 by salary ");
        printf("\n Enter 5 by contact ");
        printf("\n <<<<<< Enter 6 for Exit >>>>>> ");
        printf("\n *********** ENTER YOUR CHOICE ********* ");
        scanf("%d",&ch2);
        switch(ch2)
        {
         case 1: 
            {
                printf("\n Enter ID that wanted to be deleted ");
                scanf("%d",&id);
                for(i=0; i<count-k; i++)
                {
                    if(id==e[i].emp_id)
                    {
                        for(j=i; j<count; j++)
                        {
                            e[j]=e[j+1];
                        }
                        k++;
                    }
                }
                if(k==0)
                {
                    printf("\n ID not found so not deleted ");
                }
                printf("\nID\tNAME\tSalary\tContact\tEmail ");
                for(i=0; i<count-k; i++)   
                {
                    printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                }
            }
                break;
        case 2:
            {
                printf("\n enter Name thats wanted to be delete the employee ");
                _flushall();
                gets(name);
                for(i=0; i<count-k; i++)
                {
                    if (strcmp(name,e[i].emp_name)==0)
                    {
                        for(j=i; j<count; j++)
                        {
                            e[j]=e[j+1];
                        }
                        k++;
                        i--;
                    }
                }
                if(k==0)
                {
                    printf("\n Enter name not match with employee ");
                }
                printf("\nID\tNAME\tSalary\tContact\tEmail ");
                for(i=0; i<count-k; i++)
                {
                    printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                }
            }
                break;
        case 3:
            {
                printf("\nEnter Email thats wanted to be delete employee ");
                _flushall();
                gets(s_email);
                for(i=0; i<count-k; i++)
                {
                    if(strcmp(e[i].emp_email,s_email)==0)
                    {
                        for(j=i; i<count; j++)
                        {
                            e[j]=e[j+1];
                        }
                        k++;
                        i--;
                    }
                }
                if(k==0)
                {
                    printf("\nEnter Email not match ");
                }
                printf("\nID\tNAME\tSalary\tContact\tEmail ");
                for(i=0; i<count-k; i++)
                {
                    printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                }

            }
                break;
        case 4:
            {
                printf("\n Enter Salary that wanted to be delete employee ");
                scanf("%d",&sal1);
                for(i=0; i<count; i++)
                {
                    if(e[i].emp_salary==sal1)
                    {
                        for(j=i; j<count-k; j++)
                        {
                            e[j]=e[j+1];
                        }
                        k++;
                    }
                }
                if(k==0)
                {
                    printf("\n Salary not match ");
                }
                printf("\nID\tNAME\tSalary\tContact\tEmail ");
                for(i=0; i<count-k; i++)
                {
                    printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                }
            }
                break;
        case 5:
            {
                printf("\n Enter Contact thats wanted to be delete employee ");
                scanf("%lld",s_contact);
                for(i=0; i<count-k; i++)
                {
                    if(e[i].emp_contact==s_contact)
                    {
                        for(j=i; j<count; j++)
                        {
                            e[j]=e[j+1];
                        }
                        k++;
                        i--;
                    }
                }
                if(k==0)
                {
                    printf("\n Enter contact not match ");
                }
                printf("\nID\tNAME\tSalary\tContact\tEmail ");
                for(i=0; i<count-k; i++)
                {
                    printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                }
            }
                break;
        default: printf("\n Not valid choice ");
      }
        
    }    
    while(ch2!=6);
}
   //Update employee Details 
void update()
{
    int i,ch3,nid,sid,k=0,s_sal,n_sal;
    char n_name[10],s_name[10],n_email[15],s_email[15];
    long long int s_contact,n_contact;
    do
    {       
        printf("\n**********UPDATE EMPLOYEE DETAILS*************");
        printf("\n Enter 1 by ID ");
        printf("\n Enter 2 by Name ");
        printf("\n Enter 3 by email ");
        printf("\n Enter 4 by salary ");
        printf("\n Enter 5 by contact ");
        printf("\n <<<<< Enter 6 for Exit >>>>>");
        printf("\n********** YOUR CHOICE ********* ");
        scanf("%d",&ch3);
        switch(ch3)
        {
            case 1:   //update employee ID 
                {
                    printf("\n Enter the NEW ID ");
                    scanf("%d",&nid);
                    _flushall();
                    printf("\n Enter the ID thats wanted to be Update");
                    scanf("%d",&sid);
                    for(i=0; i<count; i++)
                    {
                        if(e[i].emp_id==sid)
                        {
                            e[i].emp_id=nid;
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n ID not match ");
                    }
                    printf("\n New ID update successful\n ");
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                    }
                }
                    break;
            case 2:    //update employee name 
                {
                    printf("\n Enter the New Name ");
                    _flushall();
                    gets(n_name);
                    printf("\n Enter that Name wanted to update ");
                    _flushall();
                    gets(s_name);
                    for(i=0; i<count; i++)
                    {
                        if(strcmp(e[i].emp_name,s_name)==0)
                        {
                            strcpy(e[i].emp_name,n_name);
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n name not match ");
                    }
                    printf("\n New Name Update successfully ");
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                    }

                }
                    break;
            case 3:   //update employee Email
                {
                    printf("\n Enter New Email ");
                    _flushall();
                    gets(n_email);
                    printf("\n Enter that Email wanted to be update ");
                    _flushall();
                    gets(s_email);
                    for(i=0; i<count; i++)
                    {
                        if(strcmp(e[i].emp_email,s_email)==0)
                        {
                            strcpy(e[i].emp_email,n_email);
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n Enter Email not match ");
                    }
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                    }
                }
                    break;
            case 4:   //update employee salary 
                {
                    printf("\n Enter New Salary ");
                    scanf("%d",&n_sal);
                    printf("\n Enter The Salary wanted to Update ");
                    scanf("%d",&s_sal);
                    for(i=0; i<count; i++)
                    {
                        if(e[i].emp_salary==s_sal)
                        {
                            e[i].emp_salary=n_sal;
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n Salary not match ");
                    }
                    printf("\n Salary Update successfully ");
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                    }
                }
                    break;
            case 5:   //update employee contact 
                {
                    printf("\n Enter New Contact ");
                    scanf("%lld",&n_contact);
                    printf("\n Enter Contact thats wanted to be updates ");
                    scanf("%lld",&s_contact);
                    for(i=0; i<count; i++)
                    {
                        if(e[i].emp_contact==s_contact)
                        {
                            e[i].emp_contact=n_contact;
                            k++;
                        }
                    }
                    if(k==0)
                    {
                        printf("\n Enter Contact not match ");
                    }
                    printf("\nID\tNAME\tSalary\tContact\tEmail ");
                    for(i=0; i<count; i++)
                    {
                        printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);
                    }
                }
                    break;
            case 6: 
                    break;        
           default: printf("\n not valid choice ");
        }
    }
    while(ch3!=6);
}
// number of Employee in company 
void count_emp()
{
    int i,k=0;
    for(i=0; i<count; i++)
    {
        k++;
    }
    printf("\n The Number of Employee in Company is....%d",k);       
}
//shorted the employees in ascending order by salary 
void order()
{   
    struct emp temp;
    int i,j;
    
    printf("\n Employee in ascending order by salary ");
    for(i=0; i<count; i++)
    {       
        for(j=i+1; j<count; j++)
        {
            if(e[i].emp_salary>e[j].emp_salary)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    printf("\nID\tNAME\tSalary\tContact\tEmail ");
    for(i=0; i<count; i++)
    {
        printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email);       
    }
}
  //Display Details having highest salary 
void max()
{
    int i,max,index;
    max=e[0].emp_salary;
    i=0;
    for(i=1; i<count; i++)
    {
        if(e[i].emp_salary>max)
        {
            max=e[i].emp_salary;
            index=i;
        }
    }
    printf("\nID\tNAME\tSalary\tContact\tEmail ");
    printf("\n%d\t%s\t%ld\t%lld\t%s",e[index].emp_id,e[index].emp_name,e[index].emp_salary,e[index].emp_contact,e[index].emp_email);
}
   //Display Employee Details in minimum 10000 and maximum 600000
void between()
{
    int i;
    printf("\nID\tNAME\tSalary\tContact\tEmail ");
    for(i=0; i<count; i++)
    {
        if(e[i].emp_salary>10000 && e[i].emp_salary<60000)
        {
            printf("\n%d\t%s\t%ld\t%lld\t%s",e[i].emp_id,e[i].emp_name,e[i].emp_salary,e[i].emp_contact,e[i].emp_email); 
        }
    }
}

    

