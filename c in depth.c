#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int i,j,k;
	label:
	system("cls");
	printf("\t \t \t \t ||--------------------------------------------------||");
	printf("\n\t\t \t \t ||--------------------------------------------------||");
	printf("\n\t\t \t \t ||         WELCOME TO THE SMART C TUTORIAL          ||");
    printf("\n\t \t\t \t ||--------------------------------------------------||");
   	printf("\n\t \t\t \t ||--------------------------------------------------||");
    printf("\n\n\n \t OPTIONS \t OFFERED COURSE ");
    printf("\n\t -------\t-------------------------");
    printf("\n \t   1\t\t Definitions & Basics");
    printf("\n \t   2\t\t Explanations");
    printf("\n \t   3\t\t Programs");
    printf("\n \t   4\t\t Test");
    printf("\n \t   5\t\t Exit");
    printf("\n\nEnter your option:-");
    scanf("%d",&i);
    system("cls");
    switch(i)
    {
      case 1 :
      	 read:
      	 system("cls");
		 printf("\n\n\n \t CHOICE \t TOPICS PROVIDED ");
         printf("\n\t -------\t-------------------------");
         printf("\n\t    1.  \t Basics");
	     printf("\n\t    2.  \t Operators");
		 printf("\n\t    3.  \t Control Statements");
		 printf("\n\t    4.  \t Loops");
		 printf("\n\t    5.  \t Function");
		 printf("\n\t    6.  \t Arrays");
		 printf("\n\t    7.  \t Pointers");
		 printf("\n\t    8.  \t Dynamic Memory Allocations");
		 printf("\n\t    9.  \t Strings");
		 printf("\n\t    10.  \t Structure");
		 printf("\n\t    11.  \t Union");
		 printf("\n\t    12.  \t Typedef");
		 printf("\n\t    13.  \t File Handling");
		 printf("\n\t    14.  \t Preprocessors");
		 printf("\n\t    15.  \t Enumerations");
		 printf("\n\t    16.  \t Storage Class");
		 printf("\n\nENTER YOUR CHOICE:-");
		 scanf("%d",&j);
		 system("cls");
		 if(j==1)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/basic.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==2)
		 {
		    int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/operator.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);	
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==3)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/controlstatements.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
		   printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	          goto label;
	       else if(a==2)
	            goto read;
	       else if(a==3)
	            return 0;
	       else printf("\ninvalid option");	
		 }
		 else if(j==4)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/looping.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==5)
		 {
		  int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/function.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
		   printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");	
		 }
		 else if(j==6)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/Arrays.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
		   printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");	
		 }
		 else if(j==7)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/pointer.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	          goto label;
	       else if(a==2)
	          goto read;
	       else if(a==3)
	          return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==8)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/dynamicmemoryallocation.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==9)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/string.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
		   printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");	
		 }
		 else if(j==10)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/structure.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
		   printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");	
		 }
		 else if(j==11)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/union.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==12)
		 {
		  int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/typedef.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	           goto label;
	       else if(a==2)
	           goto read;
	       else if(a==3)
	           return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==13)
		 {
		  int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/filehandling.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	          goto label;
	       else if(a==2)
	          goto read;
	       else if(a==3)
	          return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==14)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/preprocessor.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	          goto label;
	       else if(a==2)
	          goto read;
	       else if(a==3)
	          return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==15)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/enumeration.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
	       printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	          goto label;
	       else if(a==2)
	          goto read;
	       else if(a==3)
	            return 0;
	       else printf("\ninvalid option");
		 }
		 else if(j==16)
		 {
		   int a;
		   FILE *f;
	       char str[100];
           f=fopen("D:/sujit/storageclass.txt","r");
           while(fgets(str,100,f)!=NULL)
	         puts(str);
	       fclose(f);
		   printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	       scanf("%d",&a);
	       if(a==1)
	          goto label;
	       else if(a==2)
	          goto read;
	       else if(a==3)
	          return 0;
	       else printf("\ninvalid option");	
		 }
		 else
		   {
		   printf("****ENTER VALID OPTIONS:-****");
		   goto read;
	       }   
	    break;
   	 case 2:
   	 	read1:
   	 	system("cls");
		printf("\n\n\n \t CHOICE \t TOPICS PROVIDED ");
        printf("\n\t -------\t-------------------------");
        printf("\n\t    1.  \t Basics");
	    printf("\n\t    2.  \t Operators");
		printf("\n\t    3.  \t Control Statements");
		printf("\n\t    4.  \t Loops");
	    printf("\n\t    5.  \t Function");
		printf("\n\t    6.  \t Arrays");
		printf("\n\t    7.  \t Pointers");
		printf("\n\t    8.  \t Dynamic Memory Allocations");
		printf("\n\t    9.  \t Strings");
		printf("\n\t    10.  \t Structure");
		printf("\n\t    11.  \t Union");
		printf("\n\t    12.  \t File Handling");
		printf("\n\t    13.  \t Preprocessors");
		printf("\n\t    14.  \t Storage Class");
		printf("\n\nENTER YOUR CHOICE:-");
		scanf("%d",&j);
		system("cls");
		if(j==1)
		{
		  	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exbasic.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		}
		else if(j==2)
		{
		   	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exoperator.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");	
	        system("cls");
		}
		 else if(j==3)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/excontrolstatement.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==4)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exloops.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==5)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exfunction.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==6)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exarray.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==7)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/expointer.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==8)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exdynamicmemoryallocation.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==9)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exstring.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==10)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exstructure.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==11)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exunion.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
	        system("cls");
		 }
		 else if(j==12)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exfilehandling.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==13)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/expreprocessors.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==14)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/exstorageclass.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read1;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else
		   {
		   printf("****ENTER VALID OPTIONS:-****");
		   goto read1;
	       } 
		break;   
	  case 3:
	  	read2:
	  	printf("\n\n\n \t CHOICE \t TOPICS PROVIDED ");
        printf("\n\t -------\t-------------------------");
        printf("\n\t    1.  \t Basics");
	    printf("\n\t    2.  \t Operators");
		printf("\n\t    3.  \t Control Statements");
		printf("\n\t    4.  \t Loops");
	    printf("\n\t    5.  \t Function");
		printf("\n\t    6.  \t Arrays");
		printf("\n\t    7.  \t Pointers");
		printf("\n\t    8.  \t Dynamic Memory Allocations");
		printf("\n\t    9.  \t Strings");
		printf("\n\t    10.  \t Structure & union");
		printf("\n\nENTER YOUR CHOICE:-");
		scanf("%d",&j);
		system("cls");
		if(j==1)
		{
		    int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prbasic.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		}
		else if(j==2)
		{
		    int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/properator.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");	
		}
		 else if(j==3)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prcontrolstatements.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==4)
		 {
		    int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prloop.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==5)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prfunction.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");	
		 }
		 else if(j==6)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prarray.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==7)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prpointer.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==8)
		 {
		    int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prdynamicmemoryallocation.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");	
		 }
		 else if(j==9)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prstring.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else if(j==10)
		 {
		 	int a;
			FILE *f;
	        char str[100];
         	f=fopen("D:/sujit/prstructure.txt","r");
        	while(fgets(str,100,f)!=NULL)
	         puts(str);
	        fclose(f);
	        printf("\nEnter 1 for going to main menu,2 for going to topics,3 to exit");
	        scanf("%d",&a);
	        if(a==1)
	            goto label;
	        else if(a==2)
	            goto read2;
	        else if(a==3)
	            return 0;
	        else printf("\ninvalid option");
		 }
		 else
		   {
		   printf("****ENTER VALID OPTIONS:-****");
		   goto read2;
	       } 
		break;   
	case 4:
		read3:
		printf("\n \n \n\t \t \t \t \t \t*** WELCOME TO THE TEST*** ");
		printf("\n\n RULES:-");
		printf("\n 1. There will be 10 mcq questions on each topic:-");
		printf("\n 2. Select a topic :-");
		printf("\n 3. For each question there will be 4 options.");
		printf("\n 4. For each correct answer you will get 4 marks.");
		printf("\n 5. For each wrong answer 1 mark will be deducted. ");
		printf("\n \n \n \t \t \t \t \t ----- ALL THE BEST------");
	 	printf("\n\n\n \t CHOICE \t TOPICS PROVIDED ");
        printf("\n\t -------\t-------------------------");
        printf("\n\t    1.  \t Basics");
	    printf("\n\t    2.  \t Operators");
		printf("\n\t    3.  \t loops & Control Statements");
	    printf("\n\t    4.  \t Function");
		printf("\n\t    5.  \t Arrays");
		printf("\n\t    6.  \t Pointers");
		printf("\n\t    7.  \t Dynamic Memory Allocations");
		printf("\n\t    8.  \t Strings");
		printf("\n\t    9.  \t Structure & union");
		printf("\n\t    10.  \t File Handling");
		printf("\n\nENTER YOUR CHOICE:-");
		scanf("%d",&j);
		system("cls");
		if(j==1)
		{
		  int a,right=0,wrong=0;
	      FILE *f;
	   	  char check[10]={'c','a','d','b','a','d','b','c','c','b'};
	      char input[10],str[100];
          f=fopen("D:/sujit/quebasic.txt","r");
          while(fgets(str,100,f)!=NULL)
	           puts(str);
		  printf("Enter answer(options) of the questions and after each input press space or enter:\n");
		  for(int i=0;i<10;i++)
	           scanf(" %c", &input[i]);
		  for(int i=0;i<10;i++)
	      {
		    if(check[i] == input[i])
		     {
		  	  printf("\n You have given correct answer for question no %d",i+1);
		  	  right++;
		     }
		    else
		      wrong++;  
	      }  
		    
	      printf("\nThe score is :%d",(4*right)-wrong);
	      fclose(f);
	      getch();
	      
        }
		else if(j==2)
		{
		 	int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'b','d','b','a','d','a','b','d','c','b'};
			char input[10],str[100];
    		f=fopen("D:/sujit/queoperator.txt","r");
    		while(fgets(str,100,f)!=NULL)
	  		    puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
			scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		  		{
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		}
				else
		  			 wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		}
		 else if(j==3)
		 {
		 	int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'b','a','c','b','b','c','b','c','b','c'};
			char input[10],str[100];
    		f=fopen("D:/sujit/quecontrolstatements.txt","r");
    		while(fgets(str,100,f)!=NULL)
	  		   puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		 		 {
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		 }
				else
		  		    wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		 else if(j==4)
		 {
		 	int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'d','a','b','a','c','a','b','b','c','b'};
			char input[10],str[100];
    		f=fopen("D:/sujit/quefunction.txt","r");
    		while(fgets(str,100,f)!=NULL)
	 			 puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		 		 {
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		 }
				else
		   			wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		 else if(j==5)
		 {
		 	
			int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'d','a','c','c','c','a','b','b','c','b'};
			char input[10],str[100];
    		f=fopen("D:/sujit/quearray.txt","r");
    		while(fgets(str,100,f)!=NULL)
	  			puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		 		 {
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		 }
				else
		   			wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		 else if(j==6)
		 {
		 	int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'b','b','a','d','a','a','a','d','b','d'};
			char input[10],str[100];
    		f=fopen("D:/sujit/quepointer.txt","r");
    		while(fgets(str,100,f)!=NULL)
	 			 puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		  		{
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		 	    }
				else
		  			 wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		else if(j==7)
		 { 
		    int a,right=0,wrong=0;
	        FILE *f;
			char check[8]={'d','c','a','e','a','b','b','c'};
			char input[8],str[100];
    		f=fopen("D:/sujit/quepointer.txt","r");
    		while(fgets(str,100,f)!=NULL)
	  			puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<8;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<8;i++)
			{
				if(check[i] == input[i])
		  		{
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		}
				else
		  		  wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		 else if(j==8)
		 {
		 	int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'a','b','b','c','d','b','c','d','c','c'};
			char input[10],str[100];
   		    f=fopen("D:/sujit/questring.txt","r");
    		while(fgets(str,100,f)!=NULL)
	 			 puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		  		{
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		}
				else
		   			wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		 else if(j==9)
		 {
		    int a,right=0,wrong=0;
			FILE *f;
			char check[10]={'d','c','a','c','a','b','c','a','c','b'};
			char input[10],str[100];
    		f=fopen("D:/sujit/questructureunion.txt","r");
    		while(fgets(str,100,f)!=NULL)
	  			puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<10;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<10;i++)
			{
				if(check[i] == input[i])
		  		{
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		}
				else
		   			wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();	
		 }
		 else if(j==10)
		 {
		 	int a,right=0,wrong=0;
			FILE *f;
			char check[5]={'b','b','c','b','c'};
			char input[5],str[100];
    		f=fopen("D:/sujit/quefilehandling.txt","r");
    		while(fgets(str,100,f)!=NULL)
	  			puts(str);
			printf("Enter answer(options) of the questions and after each input press space or enter:\n");
			for(int i=0;i<5;i++)
				scanf(" %c", &input[i]);
			for(int i=0;i<5;i++)
			{
				if(check[i] == input[i])
		  		{
		  			printf("\n You have given correct answer for question no %d",i+1);
		  			right++;
		  		}
				else
		  		    wrong++;  
			}  
			printf("\nThe score is :%d",(4*right)-wrong);
			fclose(f);
			getch();
		 }
		 else
		   {
		   printf("****ENTER VALID OPTIONS:-****");
		   goto read3;
	       } 
		break;   
	 case 5: printf(" THANKS FOR VISITING ");
	     return 0;
	 default: printf("invalid");
   }
goto label;
return 0;
}
