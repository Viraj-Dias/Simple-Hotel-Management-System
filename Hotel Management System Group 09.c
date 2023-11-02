#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <string.h>
#include<ctype.h>
#include<time.h>

void feedback();
void reception();
void packeges();
void bookings();
void food();
void roomsandspa();
void barandalc();
void thanks();
int main()

{
	time_t t;
	time(&t);
	printf(" 	\t\t\t																	  \n");
	printf("   	\t\t\t																	  \n");
	printf(" 	\t\t\t																	  \n");
	printf("     \t\t\t                                                                     \n");
	printf("      \t\t\t                                                                    \n");
	printf("      \t\t\t                                                                   \n");
	printf("       \t\t\t                                                                  \n");
	printf(" \t\t\t-------------------------------------------------------------------------\n");
	Sleep(100);
	printf("\t\t\t|                                                                         |\n");
	  Sleep(100);    
	printf("\t\t\t|                                                                         |\n");
	Sleep(100);
	printf("\t\t\t| ##        ## ####### ##       #####    ####    ###    ###  #######      |\n");
	Sleep(100);
	printf("\t\t\t| ##   ##   ## ##      ##      ##       ##   ##  ####  ####  ##           |\n");
	Sleep(100);
	printf("\t\t\t|  ## #### ##  #####   ##      ##       ##   ##  ## #### ##  #####        |\n");
	Sleep(100);
	printf("\t\t\t|  #########   ##      ##      ##       ##   ##  ##  ##  ##  ##           |\n");
	Sleep(100);
	printf("\t\t\t|   ##    ##   ####### #######  #####    #####   ##      ##  #######      |\n");
	Sleep(100);
	printf("\t\t\t|   _________________________________________________________________     |\n");                       
	Sleep(100);
	printf(" \t\t\t-------------------------------------------------------------------------|\n");
	Sleep(100);
 	printf("\t\t\t*************************************************\n");
 	Sleep(100);
	printf("\t\t\t*                                               *\n");
	Sleep(100);
	printf("\t\t\t*       -----------------------------           *\n");
	Sleep(100);
	printf("\t\t\t*     WELCOME TO THE HOTEL MANAGEMENT SYSTEM    *\n");
	Sleep(100);
	printf("\t\t\t*       -----------------------------           *\n");
	Sleep(100);
	printf("\t\t\t*                                               *\n");
	Sleep(100);
	printf("\t\t\t*                                               *\n");
	Sleep(100);
	printf("\t\t\t*                                               *\n");
	Sleep(100);
	printf("\t\t\t*         Developed By Group 09                 *\n");
	Sleep(100);
	printf("\t\t\t*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*\n");
	Sleep(100);
	printf("\t\t\t*     CONTACT US:077 91 93 268, 077 57 24 842   *\n");
	Sleep(100);
	printf("\t\t\t*************************************************\n\n\n");
	
	Sleep(100);
	
	printf("\t\t\t*************************************************\n");
	Sleep(500);
	printf("\t\t\t*                   1)Receptions                *\n");
	Sleep(100);
	printf("\t\t\t*                   2)Packages                  *\n");
	Sleep(100);
	printf("\t\t\t*                   3)Bookings                  *\n");
	Sleep(100);
	printf("\t\t\t*                   4)Foods                     *\n");
	Sleep(100);
	printf("\t\t\t*                   5)Rooms & Spa               *\n");
	Sleep(100);
	printf("\t\t\t*                   6)Bar and Alcohol           *\n");
	Sleep(100);
	printf("\t\t\t*                   7)Feedbacks and Complains   *\n");
	Sleep(100);
	printf("\t\t\t*                   8)Exit                      *\n");
	Sleep(100);
	printf("\t\t\t*###############################################*\n");
	Sleep(100);
	printf("\t\t\t*###############################################*\n\n\n");
	Sleep(100);
	printf("\t\t\t Date and Time : %s                \n ",ctime(&t));
	Sleep(100);
	int choice;
	printf("Enter Your Choice :--");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			system("cls");
			reception();
			break;
		
		case 2:
			system("cls");
			packeges();
			break;
			
		case 3:
			system("cls");
			bookings();
			break;
		case 4:	
			system("cls");
			food();
			break;
		
		case 5:
			system("cls");
			roomsandspa();
			break;
		case 6:
			system("cls");
			barandalc();
			break;
			
		case 7:
			system("cls");
			feedback();
			break;
		case 8:
			system("cls");
			thanks();
			exit(1);
			break;
			
		default:{
			system("cls");
			printf("Error Input \n");
			for(int r54=0;r54<80;r54++)
			printf(":-(  ");
			main();}
	}
	main();	

}


	
	//Feedback function

void feedback(){
	int choicefeed;
 printf("\t\t\t--------------------------------------------------------------------------------------------\t\t\t\n");
 printf("\t\t\t********************************************************************************************\t\t\t\n");
 printf("\t\t\t**********************************|FEEDBACKS|************************************************ \t\t\t\n");
 printf("\t\t\t********************************************************************************************\t\t\t\n");
 printf("\t\t\t--------------------------------------------------------------------------------------------\t\t\t\n");
 
	printf("\t\t\t\t\t 1)Enter your Feedback \n");
	printf("\t\t\t\t\t 2)View Our Feedbacks \n");
	printf("\t\t\t\t\t 3)Delete a Feedback \n");
	

	
	printf("\t\t\t\t\t 4)Suggestions \n");
	printf("\t\t\t\t\t 5)View Suggestions \n");
	printf("\t\t\t\t\t 6)Delete Suggestions \n");
	
	
	
	printf("\t\t\t\t\t 7)Send a Complain \n");
	printf("\t\t\t\t\t 8)Delete Complaints\n");
	printf("\t\t\t\t\t 9)Read Complaints\n");
	printf("\t\t\t\t\t 10)Main Menu\n");
	
	
	
	printf("\t\t\t\t\t Enter your choice \n");
	scanf("%d" ,&choicefeed);
	/*choice 1 enter your feedback*/
	
	if (choicefeed==1)
	{
 char n[200];
 char feedb[300];
 char eml[100];
 char pnb1[10];
 FILE *feed; 
 feed=fopen("our_feedbacks.txt","a");

 


 printf("\n\n\t\t\t\t\t\t\tEnter Your Name :- ");
 scanf("%s",n);


 printf("\n\t\t\t\t\t\t\tEnter your Feedback :- ");
 scanf("%s",feedb);

 printf("\n\t\t\t\t\t\t\tEnter your email address :- ");
 scanf("%s",eml);
 
 printf("\n\t\t\t\t\t\t\tEnter your Phone Number:- ");
 scanf("%s",pnb1);

 fprintf(feed,"%s \t\t\t %s \t\t\t %s \t\t\t %s \n",n,feedb,eml,pnb1);
 
 
	fclose (feed);
	printf("\n\n\n\t\t\t\tThank You Very Much! %s Your Feedback is recorded!\n\n\t\t\t",n);
	
	feedback();
	}
	/*end of the choice 1*/
	/*begining of the choice Reading Feddbacks2*/
	 if(choicefeed==2) {
		
		int passcodefeeb;
		printf("\t\t\tEnter Your System Security Code to View Feedbacks");
		scanf("%d",&passcodefeeb);
		
		if (passcodefeeb = 98325)
		{
		FILE *Fb1=fopen ("our_feedbacks.txt","r");
		char content[500];
		while(fgets(content, 500, Fb1) != NULL)
		{
		
			printf("%s",content);
		}
	}

	else {
		
		printf("\t\t\tEntered Security Code is Wrong! Please Try Again");
			
		}
	feedback();
		}
	
	/*end of choice 2*/
	/*begining of choice 3 deleting feedbacks*/
	else if (choicefeed==3)
	{
		int passcodefeebd;
		printf("\t\t\tEnter Your System Security Code to View Feedbacks");
		scanf("%d",&passcodefeebd);
		
		if (passcodefeebd==98325){
		remove("our_feedbacks.txt");
		printf("\n\n\n\t\t\tThank You Very Much! Your Feedbacks are Deleted!\n\n\t\t\t");
		
		}
		feedback();
	}
	
	/*Enter suggestions*/
if (choicefeed==4)
	{
 char ns[200];
 char sug1[300];
 char emls[100];
 char pnb1s[10];
 FILE *feeds; 
 feeds=fopen("suggestions.txt","w");

 

 printf("\n\n\t\t\t\t\t\t\tEnter Your Name :-");
 
scanf("%s",ns);	

 printf("\n\t\t\t\t\t\t\tEnter your Suggestion :-");
 
scanf("%s",sug1);
 printf("\n\t\t\t\t\t\t\tEnter your email address :-");
 scanf("%s",emls);
 
 printf("\n\t\t\t\t\t\t\tEnter your Phone Number:-");
 scanf("%s",pnb1s);

 fprintf(feeds,"%s \t\t\t %s \t\t\t %s \t\t\t %s \n",ns,sug1,emls,pnb1s);
 
 
	fclose (feeds);
	printf("\n\n\n\t\t\t\tThank You Very Much For Adding Suggestions! %s Your Suggestion is recorded! \n\n\t\t\t",ns);
	
	}
 	
 /*view suggestion*/
 
	else 
	if(choicefeed==5){
		int passcodesug;
		printf("\t\t\tEnter Your System Security Code to View Suggestions:-");
		scanf("%d",&passcodesug);
		
		if (passcodesug==98325){
		
		
		FILE *Fb1=fopen ("suggestions.txt","r");
		char content[500];
		while(fgets(content, 500, Fb1) != NULL)
		{
		
			printf("%s",content);
			
			
		}
	}
			else{
	
			printf("\t\t\tEntered Security Code is Wrong! Please Try Again");
			
	
	
		}
		feedback();
	}

/*delete suggestions*/
 if (choicefeed==6)
	{
		int passcodeds;
		printf("\t\t\tEnter Your System Security Code to Delete Suggestions :-");
		scanf("%d",&passcodeds);
		
		if (passcodeds==98325){
		remove("suggestions.txt");
		printf("\n\n\n\t\t\tThank You Very Much! Suggestions are Deleted!\n\n\t\t\t");
		
		feedback();
		}
	
	else{
	
	printf("\t\t\tEntered Security Code is Wrong! Please Try Again");
	
	feedback();
	}
	
	}

/*send a complains*/
  if (choicefeed==7)
	{
 	char ncom[200];
 	char comp1[300];
 	char emlcom[100];
 	char pnbcom[10];
 
 	char datecom[10];
 	int roomnocom;
 	FILE *feedcom; 
 	feedcom=fopen("complain.txt","a");

 


 	printf("\n\n\t\t\t\t\t\t\tEnter Your Name :");
 	
 	scanf("%s",ncom);

 	printf("\n\t\t\t\t\t\t\tEnter your Complain :");
 	
 	scanf("%s",comp1);

 	printf("\n\t\t\t\t\t\t\tEnter your email address :");
 	scanf("%s",emlcom);

 
 	printf("\n\t\t\t\t\t\t\tEnter your Phone Number:");
 	scanf("%s",pnbcom);
 
 	printf("\t\t\t\t\t\t\t Enter your Room Number or Invoice Number ");
	 scanf("%d",&roomnocom);
 
 	printf("\n\t\t\t\t\t\t\tEnter the Date dd/mm/year :");
 	scanf("%s",datecom);

 	fprintf(feedcom,"%s \t\t\t %s \t\t\t %s \t\t\t %s \t\t\t %d \t\t\t %s \n",ncom,comp1,emlcom,pnbcom,roomnocom,datecom);
 
 
	fclose (feedcom);
	printf("\n\n\n\t\t\t\tThank You Very Much! %s Your Complain is recorded! and Referred to rlevent Departments\n\n\t\t\t",ncom);
	
	feedback();
	}
	
	/*delete complains*/
	
	
	if (choicefeed==8)
	{
		int passcodecom;
		printf("\t\t\tEnter Your System Security Code to Delete Compalins :-");
		scanf("%d",&passcodecom);
		
		if (passcodecom==98325){
		remove("complain.txt");
		printf("\n\n\n\t\t\tThank You Very Much! All Complains are Deleted!\n\n\t\t\t");
		
		feedback();
		}
	
	else{
	
	printf("\t\t\tEntered Security Code is Wrong! Please Try Again");
	
	feedback();
	}
	
	}
	
	/*Read Complains*/
	
	if(choicefeed==9){
		int passcodecom;
		printf("\t\t\tEnter Your System Security Code to View Complains:-");
		scanf("%d",&passcodecom);
		
		if (passcodecom==98325){
		
		
		FILE *feedcom = fopen ("complain.txt","r");
		char content[500];
		while(fgets(content, 500, feedcom) != NULL)
		{
		
			printf("%s",content);
			
			
		}
		}
			else{
	
			printf("\t\t\tEntered Security Code is Wrong! Please Try Again");
			
	
	
		}
		feedback();
	}
	if(choicefeed==10)
	main();
}

//Reception function*********




void reception();
void insert();
void disp();
int avlroomno();
void update();
void search();
void removedetails();
int empty();


struct receiption {

	int roomnumber;
	char name[20];
	char address[25];
	char phonenumber[15];
	char email[20];
	char period[10];
	char arrivaldate[10];

} stud;

char rep;


   
  //******receiption function******//
  
  void reception(){
  int c, emp;
   
   printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||RECEPTION||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("\n");
   
   printf("\n\t\t\t*******************************************************************************\n");
   printf("\n\t\t\t*******************************************************************************\n");
   printf("\n\t\t\t***            01.Customer Registration.                                    ***\n");
   printf("\n\t\t\t***            02.Display Customer Details.                                 ***\n");
   printf("\n\t\t\t***            03.Update Customer Details.                                  ***\n");
   printf("\n\t\t\t***            04.Search Customer Details.                                  ***\n");
   printf("\n\t\t\t***            05.Remove Customer details.                                  ***\n");
   printf("\n\t\t\t***            06.Exit                                                      ***\n");
   printf("\n\t\t\t*******************************************************************************\n");
   printf("\n\t\t\t*******************************************************************************\n");
   printf("\n");
   
   printf("\n\t\t\t select your choice:");
   scanf("%d" ,&c);
  
   
   switch(c){
   	case 1:
   	  insert();
   	  break;
   	  
   	case 2:
   	  emp = empty();
   	  if (emp == 0){
   	     printf("\n\t\t\t*** This file is empty. ***\n");
   	     printf("\n\t\t\t Register Another one\n");
   	     printf("\n\n\t\t\t\t\t\tDo you want to Register Another one..? \n\n\t\t\tYes--> Press Y \n\t\t\t\tNo--> Press N");
				printf("\n\n\t\t\t\t\t\tEnter Your choice :");
				scanf(" %c",&rep);

				switch(rep) {
					case 'Y':
					case 'y': {
						system("clear");
						insert();
						break;
					}
					case 'N':
					case 'n': {
						thanks();
						system("clear");
						reception();
						break;
					}
					default:
						printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
				}
			}

			else
				disp();
			break;

   	     
   	     
   	case 3:
   	   update();
   	   break;
   	   
   	case 4:
   	   search();
   	   break;
   	   
   	case 5:
   	  removedetails();
   	  break;
   	  
       case 6:
          printf("\n\t\t\t ~*~*~*~*~*~*~THANK YOU~*~*~*~*~*~*~\n");
          thanks();
          printf("\n\t\t\t*******************************************************************************\n");
  	  printf("\n\t\t\t*******************************************************************************\n");
  	  break;
  	 
       default:
  	  printf("\n\t\t\tplease try again, Your choice is not correct....\n");
  	  main();
  	  break;

       }
   }
   
   void insert() {
	FILE *fp;
	fp = fopen("Record", "a");

	printf("\n\t\t\t\t\t\t\t\t");
	printf("\n\t\t\t\t\t\t\t      **************************");

	printf("\n\n\n\t\t\t\t\t\tEnter Room number:");
	scanf("%d", &stud.roomnumber);

	printf("\n\t\t\t\t\t\tEnter Name:");
	scanf("%s", stud.name);

	printf("\n\t\t\t\t\t\tEnter Address:");
	scanf("%s", stud.address);

	printf("\n\t\t\t\t\t\tEnter Phone Number:");
	scanf("%s", stud.phonenumber);

	printf("\n\t\t\t\t\t\tEnter Email:");
	scanf("%s", stud.email);

	printf("\n\t\t\t\t\t\tEnter Period(\'x\'days):");
	scanf("%s", stud.period);

	printf("\n\t\t\t\t\t\tEnter Arrival date(dd\\mm\\yyyy):");
	scanf("%s", stud.arrivaldate);

	fwrite(&stud, sizeof(stud), 1, fp);

	fclose(fp);

	printf("\n\n\t\t\t\t\t\tDo you want to Register Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			insert();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			reception();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//    FUNCTION TO DISPLAY RECORDS
void disp() {
	FILE *fp1;
	fp1 = fopen("Record", "r");
	system("clear");
	printf("\n\t\t\t\t\t\t\t\tAll Customer Details:");
	printf("\n\t\t\t\t\t\t\t      **************************");

	printf("\nRoom number \tName \t\tAddress \tPhone Number \tNationality \tEmail \t\t\t\tPeriod \t\tArrival Date");
	while (fread(&stud, sizeof(stud), 1, fp1))
		printf("\n\n  %d\t\t%s\t\t%s\t%s\t\t%s\t\t%s\t\t%s\n", stud.roomnumber, stud.name, stud.address, stud.phonenumber,stud.email, stud.period, stud.arrivaldate);

	fclose(fp1);

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\t\t\t ~*~*~*~*~*~*~THANK YOU~*~*~*~*~*~*~\n");
         		printf("\n\t\t\t*******************************************************************************\n");
  	  		printf("\n\t\t\t*******************************************************************************\n");
  	  		thanks();
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			thanks();
			system("clear");
			reception();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

}

//    FUNCTION TO UPDATE THE RECORD
void update() {
	int avl;
	FILE *fpt;
	FILE *fpo;
	int s, r, ch;
	system("clear");
	printf("\n\n\t\t\t\t\t\tEnter room number to update:");
	scanf("%d", &r);
	avl = avlroomno(r);
	if (avl == 0) {
		printf("\n\n\t\t\t\t\t\tRoom number %d is not Available in the file", r);
	} else {
		fpo = fopen("Record", "r");
		fpt = fopen("TempFile", "w");
		while (fread(&stud, sizeof(stud), 1, fpo)) {
			s = stud.roomnumber;
			if (s != r)
				fwrite(&stud, sizeof(stud), 1, fpt);
			else {
				printf("\n\n\t\t\t\t\t\t01.Update Name of Room Number %d", r);
				printf("\n\n\t\t\t\t\t\t02.Update phone number of Room Number %d", r);
				printf("\n\n\t\t\t\t\t\t03.Update both Name and phone number of Room Number %d", r);
				printf("\n\n\t\t\t\t\t\tEnter your choice:");
				scanf("%d", &ch);
				switch (ch) {
					case 1:
						printf("\n\t\t\t\t\t\tEnter Name:");
						scanf("%s", stud.name);
						break;
					case 2:
						printf("\n\t\t\t\t\t\tEnter phone number : ");
						scanf("%s", stud.phonenumber);
						break;
					case 3:
						printf("\n\t\t\t\t\t\tEnter Name: ");
						scanf("%s", stud.name);
						printf("\n\t\t\t\t\t\tEnter Phone number: ");
						scanf("%s", stud.phonenumber);
						break;
					default:
						printf("\n\n\t\t\t\t\t\tInvalid Selection");
						break;
				}
				fwrite(&stud, sizeof(stud), 1, fpt);
			}
		}
		fclose(fpo);
		fclose(fpt);
		fpo = fopen("Record", "w");
		fpt = fopen("TempFile", "r");
		while (fread(&stud, sizeof(stud), 1, fpt)) {
			fwrite(&stud, sizeof(stud), 1, fpo);
		}
		fclose(fpo);
		fclose(fpt);
		printf("\n\n\t\t\t\t\t\tRECORD UPDATED");
	}

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\t\t\t ~*~*~*~*~*~*~THANK YOU~*~*~*~*~*~*~\n");
          		printf("\n\t\t\t*******************************************************************************\n");
  	  		printf("\n\t\t\t*******************************************************************************\n");
  	  		thanks();
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("cls");
			reception();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
			main();

	}
}


//    FUNCTION TO SEARCH THE GIVEN RECORD
void search() {
	FILE *fp2;
	int r, s, avl;
	system("clear");
	printf("\n\n\t\t\t\t\t\tEnter the Room no you want to search  :");
	scanf("%d", &r);
	avl = avlroomno(r);
	if (avl == 0)
		printf("\n\n\t\t\t\t\t\tRoom No %d is not available in the file\n",r);
	else {
		fp2 = fopen("Record", "r");
		while (fread(&stud, sizeof(stud), 1, fp2)) {
			s = stud.roomnumber;
			if (s == r) {
				printf("\n\n\t\t\t\t\t\tRoom no       = %d", stud.roomnumber);
				printf("\n\n\t\t\t\t\t\tName          = %s", stud.name);
				printf("\n\n\t\t\t\t\t\tAddress       = %s\n", stud.address);
				printf("\n\n\t\t\t\t\t\tPhone Number  = %s\n", stud.phonenumber);
				printf("\n\n\t\t\t\t\t\tEmail         = %s\n", stud.email);
				printf("\n\n\t\t\t\t\t\tPeriod        = %s\n", stud.period);
				printf("\n\n\t\t\t\t\t\tArrival Date  = %s\n", stud.arrivaldate);
			}
		}
		fclose(fp2);
	}

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\t\t\t ~*~*~*~*~*~*~THANK YOU~*~*~*~*~*~*~\n");
          		printf("\n\t\t\t*******************************************************************************\n");
  	  		printf("\n\t\t\t*******************************************************************************\n");
  	  		thanks();
			main();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			reception();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
			
			main();

	}
}

void removedetails() {
	FILE *fpo;
	FILE *fpt;
	int r, s;
	system("clear");
	printf("\n\n\t\t\t\t\t\tEnter the Room no you want to delete :");
	scanf("%d", &r);
	if (avlroomno(r) == 0)
		printf("\n\n\t\t\t\t\t\tRoom no %d is not available in the file\n", r);
	else {
		fpo = fopen("Record", "r");
		fpt = fopen("TempFile", "w");
		while (fread(&stud, sizeof(stud), 1, fpo)) {
			s = stud.roomnumber;
			if (s != r)
				fwrite(&stud, sizeof(stud), 1, fpt);
		}
		fclose(fpo);
		fclose(fpt);
		fpo = fopen("Record", "w");
		fpt = fopen("TempFile", "r");
		while (fread(&stud, sizeof(stud), 1, fpt))
			fwrite(&stud, sizeof(stud), 1, fpo);
		printf("\n\n\n\t\t\t\t\t\t\t*****RECORD DELETED*****\n");
		fclose(fpo);
		fclose(fpt);
	}

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\t\t\t ~*~*~*~*~*~*~THANK YOU~*~*~*~*~*~*~\n");
          		printf("\n\t\t\t*******************************************************************************\n");
  	  		printf("\n\t\t\t*******************************************************************************\n");
  	  		thanks();
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			reception();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//    FUNCTION TO CHECK GIVEN ROOM NO IS AVAILABLE //
int avlroomno(int rno) {
	FILE *fp;
	int c = 0;
	fp = fopen("Record", "r");
	while (!feof(fp)) {
		fread(&stud, sizeof(stud), 1, fp);

		if (rno == stud.roomnumber) {
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);

	return 0;
}
//FUNCTION TO CHECK THE FILE IS EMPTY OR NOT
int empty() {
	int c = 0;
	FILE *fp;
	fp = fopen("Record", "r");
	while (fread(&stud, sizeof(stud), 1, fp))
		c = 1;
	fclose(fp);
	return c;

}


//********************receiption function end********************


//packeges function starts

void packeges();
float wedding();
float birthday();
float other();




float total;
int price[] = {3500,2000,2500,500,300,200};
int howmanyplate, platetype, drinktype, howmanydrink;


	




void packeges(){
	
	printf("\t\t\t\t\t\n");
	printf("\t\t---------------------------------------------------------------\n");
	printf("\n");
	printf("\t\t*****\tJoin us to check out our latest packeges\t*****\n");
	printf("\n");
	printf("\t\t---------------------------------------------------------------\n");
	printf("\t\t\t\t\t\n");
	printf("\n\n");
	
	int choice;
	
	
	
	printf("\t\t\t***************************************");
	printf("\n\t\t\t*                                     *");
	printf("\n\t\t\t*                                     *");
	printf("\n\n\t\t\t\t\tBirthday [0]\t\t\t\n");
	printf("\n\t\t\t*                                     *");
	printf("\n\n\t\t\t\t\tWedding  [1]\t\t\t\n");
	printf("\n\t\t\t*                                     *");
	printf("\n\n\t\t\t\t\tOther    [2]\t\t\t\n");
	printf("\n\t\t\t*                                     *");
	printf("\n\n\t\t\t\t\tExit     [3]\t\t\t\n");
	printf("\n\t\t\t*                                     *");
	printf("\n\t\t\t*                                     *");
	printf("\n\t\t\t***************************************");
	printf("\n\n");
	
	printf("\t\t\t\tEnter choice: ");
	scanf("%d",&choice);

	if (choice >= 0 && 2>=choice) {

		printf("\n\n\t\t\t\tPlate Type:\n");
		printf("\n\t\t\t\t\tVegitable [1]");
		printf("\n\n\t\t\t\t\tFish [2]");
		printf("\n\n\t\t\t\t\tChicken [3]\n");
		printf("\n\t\t\t\tWellcome Drink Type:\n");
		printf("\n\t\t\t\t\tOrange [4]");
		printf("\n\n\t\t\t\t\tMango [5]");
		printf("\n\n\t\t\t\t\tMixfruit [6]\n\n");
		printf("\n\n");

		printf("\t\t\tEnter the plate type :");
		scanf("%d",&platetype);
		printf("\t\t\tNumber of plates you need? : ");
		scanf("%d",&howmanyplate);

		printf("\n\t\t\tEnter the welcome drink type: ");
		scanf("%d",&drinktype);
		printf("\t\t\tNumber of cups you need? : ");
		scanf("%d",&howmanydrink);

		switch(choice) {
			case 0:
				birthday();
				break;
			case 1:
				wedding();
				break;
			case 2:
				other();
				break;
		}

	} else if (choice == 3) {
		main();
	}

	else {
		if(choice != 3) {
			printf("\t\t\tInvalid choice\n");
		}
	}	
}

float wedding() {
	char rep;

	total = (price[platetype] * howmanyplate) + (price[drinktype] * howmanydrink);
	printf("\n\t\t\tTotal Cost: %.2f",total+150000);
	

	

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("cls");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t >>>>>THANK YOU<<<<<");
			thanks();
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("cls");
			main();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input Data..!");
			
			main();
	}
}

float birthday() {
	char rep;
	
	total = 100000 +((price[platetype] )* howmanyplate) + ((price[drinktype]) * howmanydrink);
	printf("\n\t\t\tTotal Cost: %.2f",total);

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t >>>>>THANK YOU<<<<<");
			thanks();
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			main();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input Data..!");
			
			main();
	}
}

float other() {
	char rep;
	
	total = 80000 + (price[platetype] * howmanyplate) + (price[drinktype] * howmanydrink);
	printf("\n\t\t\tTotal Cost: %0.2f",total);
	

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t >>>>>THANK YOU<<<<<");
			thanks();
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			main();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input Data..!");
			
			main();
	}
}

//end of the packeges function
//begining of the bookings function


void bookings()
{
printf("+===========================================================================================================================================================================================+");
printf("\n|                                                                                     HOTEL BOOKING SYSTEM                                                                                  |");
printf("\n+===========================================================================================================================================================================================+");
printf("\n+--------------------------------------------------------------------------------------------------------------------+");
printf("\n|                                                   1:Hotel Information                                              |");
printf("\n+--------------------------------------------------------------------------------------------------------------------+");
printf("\n|                                                       2:Available                                                  |");
printf("\n+--------------------------------------------------------------------------------------------------------------------+");
printf("\n|                                                      3:Reservation                                                 |");
printf("\n+--------------------------------------------------------------------------------------------------------------------+");
printf("\n|                                                        4:Exit                                                      |");
printf("\n+--------------------------------------------------------------------------------------------------------------------+");



int choiceb;
printf("\nwhat do you know about?   Please enter your choice:");
scanf("%d",&choiceb);
switch (choiceb)
{ 
  case 1: 
  
      printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++          Hotel informations           +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
      printf("\nIt is 15-story Hotel.which is completely air condition,spacious.\nThere are total 2 Restaurant,1 swimming pool, 1 Bar and total 80 rooms");
      printf("\nAmenities:");
      printf("WIFI, Telephone, 24 hour bar 8 Restaurant and room service\n Near By:\nRailway station @ 50 Mtr.\nSUMMATION Education office @ 100 Mtr ");
      printf("\nContact us:\nTele:041-5679632/077-3421784/070-9821672\nEmail:starhmtr@gmail.com");
      break;
      
  case 2: 
  
      printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++               Available               +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
      printf("                                                                                                                                                                                         ");
      printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+");
      printf("\n|      Room Type       |                                            Information                                          |                         Price                            |");
      printf("\n|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|");
      printf("\n|         SUIT         |                     2 Rooms , 120 sq-Mtr,Sofa and King bed                                      |                         Rs:10000                         |");
      printf("\n|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|");
      printf("\n|         KING         |                     160sq-Meter , Sofa ,Table and king bed                                      |                          Rs:5000                         |");
      printf("\n|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|");
      printf("\n|        Travel        |                      40sq-Meter , Table , queen bed                                             |                          Rs:2500                         |");
      printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+");
      break;
  int days,persons,rooms,id;
  char rtype,dd;
  
  case 3: 
      printf("Enter your id:");
      scanf("%d",&id);
      printf("\nEnter Date(dd/mm/yy):");
      scanf("%c",&dd);
      printf("\nEnter number of days:");
      scanf("%d",&days);
      printf("\nEnter Number of persons:");
      scanf("%d",&persons);
      printf("\nEnter number of rooms:");
      scanf("%d",&rooms);
      printf("\nEnter room type(S/K/T):");
      scanf("%c",&rtype);
      
      switch (rtype)
      {
      int damt;
      float bill;
          case 's': case 'S':
             damt=10000;
             bill=days*damt*rooms;
             scanf("%f",&bill);
             printf("your total bill is:%f",bill);
             break;
          case 'k': case 'K':
             damt=5000;
             bill=days*damt*rooms;
             scanf("%f",&bill);
             printf("your total bill is:%f",bill);
             break;
         case 't': case 'T':
             damt=2500;
             bill=days*damt*rooms;
             scanf("%f",&bill);
             printf("your total bill is:%f",bill);
             break;
         }
      case 4: 
  	  printf("Thank you!");
  	  thanks();
  	  system("cls");
  	  main();
  	  
  	  break;
  default:
     printf("invalied choice");
     
			main();
     
} 
{

printf("\n                                      Customer Details                                        \n");
FILE*file;
char ID[5];
char name[10];
char address[10];
char date[10];
char phno[10];

file=fopen("customer.txt","a");

printf("Enter customer ID:");
scanf("%s",ID);
printf("Enter customer Name:");
scanf("%s",name);
printf("Enter customer Address:");
scanf("%s",address);
printf("Enter the Date:");
scanf("%s",date);
printf("Enter customer Phone Number:");
scanf("%s",phno);

if(file==NULL)
    printf("Cannot create file\n");
else
    fprintf(file,"%s\t%s\t%s\t%s\t%s\t",ID,name,address,date,phno);
fclose(file);

printf("                                    Booking Details                                             \n");
FILE*text;
text=fopen("booking.txt","a");
char Name[10];
char Date[10];
char rmtype[10];
char nor[10];
char nop[10];

printf("Enter customer name:");
scanf("%s",Name);
printf("Enter the date:");
scanf("%s",date);
printf("Enter room type:");
scanf("%s",rmtype);
printf("Enter the number of rooms:");
scanf("%s",nor);
printf("Enter number of persons:");
scanf("%s",nop);

if(file==NULL)
    printf("Cannot create file\n");
else
    fprintf(file,"%s\t%s\t%s\t%s\t%s\t",Name,Date,rmtype,nor,nop);
fclose(text);
}
}

//End of the booking function
//begining of the food function


// Define a struct to represent a food item
typedef struct {
    char name[50];
    int price;
} FoodItem;

// Define a function to add a new food item to the list
void addFoodItem(FoodItem *list, int *count) {
    char name[50];
    int price;
    
    // Prompt user to enter the name and price of the new food item
    printf("Enter the name of the new food item: ");
    scanf("%s", name);
    printf("Enter the price of the new food item: ");
    scanf("%d", &price);
    
    // Create a new food item and add it to the list
    FoodItem newItem;
    strcpy(newItem.name, name);
    newItem.price = price;
    list[*count] = newItem;
    *count += 1;
    
    printf("New food item added successfully!\n");
    
        main();
}

// Define a function to search for a food item in the list
void searchFoodItem(FoodItem *list, int count) {
    char name[50];
    int i, found = 0;
    
    // Prompt user to enter the name of the food item to be searched
    printf("Enter the name of the food item to be searched: ");
    scanf("%s", name);
    
    // Find the food item with the given name and display its details
    for (i = 0; i < count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            found = 1;
            printf("Food item found!\n");
            printf("Name: %s\n", list[i].name);
            printf("Price: %d\n", list[i].price);
            break;
        }
    }
    
    if (!found) {
        printf("Food item not found!\n");
        
        main();
    }
}

// Define a function to edit a food item in the list
void editFoodItem(FoodItem *list, int count) {
    char name[50];
    int i, found = 0, newPrice;
    
    // Prompt user to enter the name of the food item to be edited
    printf("Enter the name of the food item to be edited: ");
    scanf("%s", name);
    
    // Find the index of the food item with the given name
    for (i = 0; i < count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            found = 1;
            break;
        }
    }
    
    // Edit the food item if it was found
    if (found) {
        printf("Enter the new price for %s: ", name);
        scanf("%d", &newPrice);
        list[i].price = newPrice;
        printf("Food item edited successfully!\n");
        
        main();
    } else {
        printf("Food item not found!\n");
        
        main();
    }
}

// Define a function to delete a food item from the list
void deleteFoodItem(FoodItem *list, int *count) {
    char name[50];
    int i, found = 0;
    
    // Prompt user to enter the name of the food item to be deleted
    printf("Enter the name of the food item to be deleted: ");
    scanf("%s", name);
    
    // Find the index of the food item with the given name
    for (i = 0; i < *count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            found = 1;
            break;
        }
    }
    
    // Delete the food item if it was found
    if (found) {
        for (i = i + 1; i < *count; i++) {
            list[i - 1] = list[i];
        }
        *count -= 1;
        printf("Food item deleted successfully!\n");
        
        main();
    } else {
        printf("Food item not found!\n");
        
        main();
    }
}

void food() {
    int choice, count = 0, i;
    FoodItem list[50];
    
    while (1) {
        // Display the menu and prompt the user for their choice
        printf("\t\t\tFood Management System\n");
        printf("\t\t\t----------------------\n");
        printf("\t\t\t1. Add a new food item\n");
        printf("\t\t\t2. Search a food item\n");
		printf("\t\t\t3. Edit a food item\n");
        printf("\t\t\t4. Delete a food item\n");
        printf("\t\t\t5. Quit\n");
        
        printf("\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addFoodItem(list, &count);
                break;
			case 2:
                searchFoodItem(list, count);
                break;
			case 3:
                editFoodItem(list, count);
                break;
            case 4:
                deleteFoodItem(list, &count);
                break;
            case 5:
                printf("Exiting...\n");
                thanks();
                exit(1);
                
            default:
                printf("Invalid choice!\n");
                
			main();
        }
        
        // Print the list of food items after each operation
        printf("List of food items:\n");
        for (i = 0; i < count; i++) {
            printf("%d. %s (%d)\n", i + 1, list[i].name, list[i].price);
        }
        printf("\n");
    }
    
    
}
  
//end of the food fuction
//begining of the rooms & spa


void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search1();


void login()
{

	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");

    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		

		}
		system("cls");
}

struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

void roomsandspa(){     // rooms and spa FUNCTION
	int i=0;

	time_t t;
	time(&t);
	char customername;
	char choice;

	system("cls");   // FOR CLEARING SCREEN
	
	printf(" -------------------------------------------------------------------------\n");
	printf("|                                                                         |\n");
	printf("|                                                                         |\n");
	printf("|  OOOOOO   OOOOOO OOOOOO OOOOOO OOOOOO OOOOOO O      O OOOOOOO  OOOOOO   |\n");
	printf("|  O        O    O O      O        O      O    O O    O O        O        |\n");
	printf("|  O  OOOOO OOOOOO OOOOO  OOOOO    O      O    O  O   O O  OOOOO OOOOOO   |\n");
	printf("|  O    O   O  O   O      O        O      O    O   O  O O    O        O   |\n");
	printf("|  OOOOOO   O   O  OOOOOO OOOOOO   O    OOOOOO O    O O OOOOOO   OOOOOO   |\n");
	printf("|                                                                         |\n");
	printf(" -------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       ------------------------------------    *\n");
	printf("\t\t*        Welcome To Rooms And Spa     *\n");
	printf("\t\t*       ------------------------------------    *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*     CONTACT US:071-12345678                   *\n");
	printf("\t\t*************************************************\n\n\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n Press any key to continue:");

	
    system("cls");
    login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Room & Spa");
		printf("\n------------------------");
		printf(" \n Enter 2 -> Rooms Details");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Room number of the hotel");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Room number of the customer");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 ->Customer Payments");
		printf("\n-----------------------");






		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");

		
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search1();break;
			case '5':
				edit();break;
			case '6':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
				
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				
				thanks();
        		main();
		}
	}
}

void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		
		if(test==27)
			break;

	}
	fclose(f);
}

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");

	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	
}

void search1()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			scanf("%s",s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",s.name);
			printf("\nEnter Address        :");
			scanf("%s",s.address);
			printf("\nEnter Phone number :");
			scanf("%c",s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",s.nationality);
			printf("\nEnter Email :");
			scanf("%s",s.email);
			printf("\nEnter Period :");
			scanf("%s",s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	
}
}
//end of the rooms ans spa function
//begining of the bar and alcohole

void bar_wineStore();

void barandalc()
{

  bar_wineStore(); 

}







void bar_wineStore(){
  
  FILE *item_table = fopen("baritem_table.txt","r" );
 
  char content[1000];  //string
 
  printf("\n\t\t$************WELCOME TO THE BAR AND WINE STORE*************$\n");
  printf("\t\t     ~|*********ALL OUR DRINKS AND BEVERAGES*********|~\n");
  while(fgets(content, 1000, item_table) != NULL)
  {
         printf("%s\n",content);
  }
  
  char z;
  
  char event;
  float price;
 
 
  
  struct Orderdrinks        //declaration of the structure
  {
  char category[20];
  char type[30];
  int quantity;
  char customer_name[50];
  char customer_address[50];
  }s;
  printf("\nDo you want to order some drinks(Y/N)?\n");
  scanf("\n%c",&event);
  if(event == 'Y' || event =='y'){
     printf("Enter the category(alcohol/non-alcohol):");
     scanf("%s",s.category);
     char cat1[20] = "alcohol";
     char cat2[20] = "non-alcohol";
     if(strcmp(cat1,s.category)==0 || strcmp(cat2,s.category)==0){
     printf("\nEnter the drink name(refer table/no spaces between):");
     scanf("%s",s.type);                                            //"%[^\n]","[^/n]s"
     printf("\nEnter the quantity(bottles):");
     scanf("%d",&s.quantity);
     printf("\nEnter your first name:");
     scanf("%s",s.customer_name);
     printf("\nEnter your address(use (_) between words):");
     scanf("%s",s.customer_address);
     char a[20];
     char b[20] = "redwines";
     char c[20] = "whitewines";
     char d[10] = "vodka";
     char e[15] = "tequila";
     char f[15] = "whiskey";
     char g[15] = "lemon";
     char h[20] = "icedtea";
     char i[20] = "Margarita";
     char j[20] = "Moscowmule";
     char k[20] = "comsopoliton";
     float qt = s.quantity;

     strcpy(a,s.type);
     if(strcmp(a,b)==0){
           price = qt*(1590);
      }
     else if(strcmp(a,c)==0){
           price = qt*(3100);
     }
     else if(strcmp(a,d)==0){
           price = qt*(3500);
     }
     else if(strcmp(a,e)==0){
           price = qt*(4700);
     }
     else if(strcmp(a,f)==0){
           price = qt*(5900);
     }
     else if(strcmp(a,g)==0){
           price = qt*(600);
     }
     else if(strcmp(a,h)==0){
           price = qt*(450);
     }
      else if(strcmp(a,i)==0){
           price = qt*(2550);
     }
      else if(strcmp(a,j)==0){
           price = qt*(4320);
     }
      else if(strcmp(a,k)==0){
           price = qt*(6850);
     }

     else{
          printf("please chooose an item from the list!\n");
      } 
       
  
     FILE *cust_orders = fopen("Customer_orders.txt","w");
     fprintf(cust_orders,"%s, %s, %d, %s, %s,",s.category,s.type,s.quantity,s.customer_name,s.customer_address);
     printf("\n\t>>>>>>>>>>Your Order has successfully received!<<<<<<<<<<<\n");
     
     fclose(cust_orders);
     
    
     char category[20];
     char type[30];
     int quantity;
     char customer_name[50];
     char customer_address[50];
     char content[300];

     FILE *cust_order = fopen("Customer_orders.txt","r");
     while(fgets(content, 300 ,cust_order) != NULL)
     {
        sscanf(content ,"%[^,], %[^,], %d, %[^,], %[^,]",category,type,&quantity,customer_name,customer_address);
           printf("\n#Your details as follows\n\n");
           printf("The category   :%s\n",category);
           printf("The type       :%s\n",type);
           printf("The quantity   :%d\n",quantity);
           printf("Your name      :%s\n",customer_name);
           printf("Your address   :%s\n",customer_address);
           printf("Your price     :Rs.%.2f\n",price);
           printf("\t~~~~~~~~THANK YOU~~~~~~~~~\n");
           
           main();
           break;
         } 
   
   }else{
           printf("!*******Please type alcohol/non-alcohol to continue********!\n");
   }
  
   }
   else if(event == 'N' || event == 'n'){
           printf("**********Have a nice day!***********\n");
          
           thanks();
           main();

   }
   else{
           printf("***********Wrong command!please enter (Y/N)************\n");
          
           main();
 
   }
  
  
   
  
} 
void thanks(){
	
	 
	printf("######## ##   ##  #####  ###   ## ##    ##    ##      ##  #####  ##    ## \n");
	printf("   ##    ##   ## ##   ## ####  ## ##   ##      ##    ##  ##   ## ##    ## \n");
	printf("   ##    ####### ####### ## ## ## ######        ##  ##   ##   ## ##    ## \n");
	printf("   ##    ##   ## ##   ## ##  #### ##   ##         ##     ##   ## ##    ## \n");
	printf("   ##    ##   ## ##   ## ##   ### ##    ##        ##      #####   ###### \n");

 for(int i=100;i>0;i--)
 printf("#");
 printf("\n");
	int n, s, i, j;

for(i = 20; i >= 1; i--)
{

for(s = i; s < 20; s++)
printf(" ");

for(j = 1; j <= i; j++)
{

printf("* ");}

printf("\n");
}
	
	

}
