
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
void box(int,int,int,int);
int main_choice;
void signin();
void signup();
void change();
void chp(char [],char []);
void chu(char []);
void chpp(char []);
void security(char []);
void box(int, int ,int,int );
void information(char[]);
void addition(char[]);
FILE *fp,*fi,*ch,*pr,*ur,*pp,*fp,*ch,*fi;
int strle;
int i;
char passnu[8],medical[50];
char gar1[20],upi[10];
int ans,ans2;
char data[20],question[10],ansquestion[10];
char passport1[8];
char passnu2[8];
char pass3[20];
char passnum[8];
char ui[20];
char user[20];
int a,an,ch2,ch1;
char temp[20],temp2;
char name[10],password[20],passnu[8];
char surname[10],mobile[10];
char passnumber[8],password[20],password1[20];
int ch2=0,a,ab,gender,ans,ans2;
char genderc[7];
int nationchoice;
char passportnumber[8],aadharnumber[12];
char passport[8],aadhar[12];
char credit[19],debit[19],cardmon[2],cardyear[4],cvv[3];
int yes,nation;

void main()
{
	clrscr();
	box(7,2,73,22);
	fp= fopen("id.xlsx","a");
	if(fp == NULL)
	{
		printf("file does not exist\n");
	}
	delay(200);
	gotoxy(30,8);
	printf("1.  signin\n");

	delay(250);
	gotoxy(30,10);
	printf("2.  signup");
	delay(300);
	gotoxy(30,12);
	printf("3.  change user info");
	delay(300);
	gotoxy(30,14);
	printf("4.  exit");
	box(7,23,73,25);
	delay(300);
	gotoxy(10,24);
	delay(300);
	printf("Enter Your Choice [1-7]         ");
	scanf("%d",&a);
       //	closegraph();
	if(a==1)
	{       clrscr();
		signin();
	}
	if(a==2)
	{       clrscr();
		signup();
	}
	if(a==3)
	{       clrscr();
		change();
	}
	getch();
}
void box(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		gotoxy(i,b);printf("\xcd");
		gotoxy(i,d);printf("\xcd");
	}
	for(j=b;j<d;j++)
	{
		gotoxy(a,j);printf("\xba");
		gotoxy(c,j);printf("\xba");
	}
		gotoxy(a,b);printf("\xc9");
		gotoxy(c,b);printf("\xbb");
		gotoxy(a,d);printf("\xc8");
		gotoxy(c,d);printf("\xbc");
}
void box1(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		gotoxy(i,b);printf("%c",196);
		gotoxy(i,d);printf("%c",196);
	}
	for(j=b;j<d;j++)
	{
		gotoxy(a,j);printf("%c",179);
		gotoxy(c,j);printf("%c",179);
	}
		gotoxy(a,b);printf("%c",218);
		gotoxy(c,b);printf("%c",191);
		gotoxy(a,d);printf("%c",192);
		gotoxy(c,d);printf("%c",217);
}
void signin()
{
			clrscr();
			box(7,2,73,22);
			gotoxy(10,6);
			printf("ENTER YOUR USER ID:\n");
			gotoxy(59,6);
			box1(48,5,70,7);
			gotoxy(50,6);
			scanf("%s",user);
		   //	fscanf(fi,"%s",data);
			fi=fopen(user,"r");
			if(fi==NULL)
			{
				gotoxy(10,10);
				printf("Enter right user id\n");
			}
			else
			{
		    //	fscanf(fi,"%s %s %d %s",temp,passnum,temp2,name);
			fscanf(fi,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
			gotoxy(10,9);                                                                                                                // \t1\t%s\t%s\t%s\t%s",credit,cardmon,cardyear,cvv)
			printf("ENTER YOUR PASSWORD:\n");
			box1(48,8,70,10);
			gotoxy(50,9);
   while(1)
   {
	temp2=getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		printf("*");
	}
   }

			//scanf("%s",temp2);
			ab=strcmp(password,password1);
			if(ab==0)
			{      //gotoxy(10,12);
			       //printf("you had successfully logedin\n");
			       //fscanf(fi,"%s  %s",gar1,passnum);
			       fscanf(fi,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
				gotoxy(10,12);
					printf("NAME               : %s",name);
				gotoxy(10,13);
					printf("PASSPORT NUMBER    : %s",passport);
					gotoxy(10,14);
					printf("MOBILE NUMBER      : %s ",mobile);
					gotoxy(10,15);
					printf("GENDER             : %s",genderc);
				if(nation==1)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Australia");
				}
				if(nation==2)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : China");
				}
				if(nation==3)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Dubai");
				}
				if(nation==4)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : England");
				}
				if(nation==5)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : France");
				}
				if(nation==6)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Germany");
				}
				if(nation==7)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : India");
				}
				if(nation==8)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Japan");
				}
				if(nation==9)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Malaysia");
				}
				if(nation==10)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Singapore");
				}
				if(nation==11)
					{
					gotoxy(10,16);
					printf("NATIONALITY        : United States of America");
				}

		     //		if(medical=='o')
		       //		{
			 //		gotoxy(10,17);
			   ///		printf("MEDICAL CONDITION  : NO ");
			     //	}


					gotoxy(10,17);
					printf("MEDICAL CONDITION  : %s ",medical);

				 if(ans==1)
				 {
					gotoxy(10,18);
					printf("CREDIT CARD NUMBER : %s",credit);
				 }
				 else if(ans==2)
				 {
					gotoxy(10,18);
					printf("DEBIT CARD NUMBER  : %s",credit);
				 }

				 else if(ans==3)
				 {
					gotoxy(10,18);
					printf("UPI                : %s",credit );
				 }
			      //	gotoxy(10,17);
			       //	printf("AADHAR CARD NUMBER : %s",aadhar);
			}
			else
			{
			gotoxy(10,12);
			printf("enter correct userid or password");
			}
}
}
void signup()
{

	clrscr();
	box(7,6,73,22);
	gotoxy(9,3);
	fp= fopen("id.xlsx","a");
	gotoxy(10,12);
	printf("ENTER USER ID");
	gotoxy(58,12);
	printf("=");
	gotoxy(60,12);
	scanf("%s",ui);
	clrscr();
	box(7,6,73,22);
	ch=fopen(ui,"r");
	fscanf(ch,"%d",&ch2);
	if(ch2==1)
	{
		gotoxy(10,15);
		printf("user id already exist plz enter another user id\n");
		delay(2000);
		ch2=0;
		main();
	}
	else
	{
	gotoxy(8,3);
	printf("*--------------------0--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
		fi=fopen(ui,"w+");
		gotoxy(10,18);
		printf("NOTE: you can't cahnge your name,last name, gender,");
		gotoxy(10,19);
		printf(" mobile number after signing up.so be careful while");
		gotoxy(10,20);
		printf(" entering your data:)");

		gotoxy(10,7);
		printf("ENTER YOUR FIRST NAME");
		gotoxy(58,7);
		printf("=");
		gotoxy(60,7);
		scanf("%s",name);
		gotoxy(10,9);
		printf("ENTER YOUR LAST NAME");
		gotoxy(58,9);
		printf("=");
		gotoxy(60,9);
		scanf("%s",surname[10]);
		gotoxy(10,11);
		printf("ENTER GENDER 1.MALE");
		gotoxy(24,12);
		printf("2.FEMALE");
		gotoxy(24,13);
		printf("3.OTHER");
		gotoxy(58,11);
		printf("=");
		gotoxy(60,11);
		scanf("%d",&gender);
		gotoxy(10,15);
  mobile:	printf("ENTER YOUR MOBILE NUMBER");
		gotoxy(58,15);
		printf("=");
		gotoxy(60,15);
		scanf("%s",mobile);
		ab=strlen(mobile);
		if(ab==10)
		{
			a=1;
			if(gender==1)
			{
				fprintf(fi,"%d %s %s MALE",a,name,mobile);
				fprintf(fp,"%s\t%s\t%s\tMALE",ui,name,mobile);

			}
			else if(gender==2)
			{
				fprintf(fi,"%d %s %s FEMALE",a,name,mobile);
				fprintf(fp,"%s\t%s\t%s\tFEMALE",ui,name,mobile);

			}
			else if(gender==3)
			{
				fprintf(fi,"%d %s %s OTHER ",a,name,mobile);
				fprintf(fp,"%s\t%s\t%s\tOTHER",ui,name,mobile);
			}

			information(ui);
		}
		else
		{
			gotoxy(10,17);
			printf("Enter correct mobile number:");
			goto mobile;
		}
	}



}
void change()
{
		clrscr();
		box(7,2,73,22);
		gotoxy(10,6);
		printf("enter your user id:\n");
		gotoxy(60,6);
		scanf("%s",user);
		fi=fopen(user,"r");
		if(fi==NULL)
		{               gotoxy(10,8);
				printf("Enter right user id\n");
		}
		else
		{
		       //	fscanf(fi,"%s %s",&temp,&passnum);
			fscanf(fi,"%d %s %s %s %d %s %s",&yes,name,mobile,genderc,&nation,passport1,temp);
			gotoxy(10,8);
			printf("enter your password:\n");
			gotoxy(60,8);
while(1)
   {
	temp2= getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		printf("*");
	}
   }
		       //	scanf("%s",password);
			ans=strcmp(temp,password);
			if(ans==0)
			{       gotoxy(30,12);
				delay(300);
				printf("What do you want to change");
				delay(300);
				gotoxy(30,13);
				delay(300);
				printf("1. change passowrd");
				gotoxy(30,14);
				delay(300);
				printf("2. change user id");
			      //	gotoxy(30,15);
			    //	delay(300);
			      //	printf("3. change passport number\n");
				box(7,23,73,25);
				delay(300);
				gotoxy(10,24);
				delay(300);
				printf("Enter Your Choice [1-3]         ");
				scanf("%d",&a);
				fclose(fi);
				if(a==1)
				{
				      clrscr();
				      chp(user,password);
				}
				if(a==2)
				{
				       clrscr();
				       chu(user);
				}
			     //	if(a==3)
			   //	{
			       //	       clrscr();
				 //      chpp(user);
			     //	}
				getch();
		}
		else
		{
			gotoxy(10,18);
			printf("incorrect password\n");
		}
	}
}
void chp(char user[],char temp2[])
{		clrscr();
		fi=fopen(user,"r");
		box(7,2,73,22);
	  //	fscanf(fi,"%s %s",gar1,passnu2);
		fscanf(fi,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
		gotoxy(10,6);
		printf("your current password is:%s",temp2);
		gotoxy(10,8);
		printf("set your new password\n");
		gotoxy(60,8);
		scanf("%s",&password);
		remove(user);
		pr=fopen(user,"a");
	//	fprintf(pr,"%s %s 1",pass3,passnu2);
			fprintf(pr,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",yes,name,mobile,genderc,nation,passport,password1,question,ansquestion,medical,ans,credit,cardmon,cardyear,cvv);
		gotoxy(10,12);
		fclose(pr);
}
void chu(char user[])
{
	clrscr();
	box(7,2,73,22);
	pr=fopen(user,"r");
	 //	fscanf(pr,"%s     %s",gar1,passnu2);
	   //	fscanf(pr,"%s %s 1",gar1,passnu2);
		 //   fscanf(fi,"%d %s %s %s %d %s %s %s",&yes,name,mobile,genderc,&nation,passport1,aadhar,password1);

	gotoxy(10,8);
	printf("your current user id is:%s",user);
	gotoxy(10,10);
	printf("set your new user id\n");
	gotoxy(60,10);
	scanf("%s",&pass3);
	ch=fopen(pass3,"r");
	fscanf(ch,"%d",&ch2);
	if(ch2==1)
	{
		gotoxy(10,15);
		printf("user id already exist plz enter another user id\n");
		delay(2000);
		ch2=0;
		chu(user);
	}
	else
	{
       //	fscanf(pr,"%d %s %s %s %d %s %s",&yes,name,mobile,genderc,&nation,passport1,password1);
		fscanf(pr,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
	remove(user);
	ur=fopen(pass3,"w");
      //	fprintf(ur,"%s %s 1",gar1,passnu2);
 //	fprintf(ur,"%d %s %s %s %d %s %s",yes,name,mobile,genderc,nation,passport1,password1);
		fprintf(ur,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",yes,name,mobile,genderc,nation,passport,password1,question,ansquestion,medical,ans,credit,cardmon,cardyear,cvv);
	gotoxy(10,12);
     //	printf("%s",passnu2);
	fclose(ur);
}
}
/*void chpp(char user [])
{
		clrscr();
		box(7,2,73,22);
		ur=fopen(user,"r");
	      //	fscanf(ur,"%s %s ",gar1,passnu2);
		fscanf(fi,"%d %s %s %s %d %s %s %s",&yes,name,mobile,genderc,&nation,passport1,aadhar,password1);
		gotoxy(10,4);
		printf("your current passport number is:%s",passport1);
		gotoxy(10,6);
		printf("set your new passport number\n");
		gotoxy(60,6);
		scanf("%s",&passport);
		strle = strlen(passport);
		if(strle==8)
		{
			remove(user);
			pp=fopen(user,"w");
		       //	fprintf(pp,"%s %s 1",user,pass3);
			yes=1;
			fprintf(pp,"%d %s %s %s %d %s %s %s",yes,name,mobile,genderc,nation,passport,aadhar,password1);
			gotoxy(10,8);
			printf("your new passportnumber is:%s",passport)	;
		}
		else
		{
		       gotoxy(10,8);
		       printf("Enter valid passport number\n");
		       getch();
		}
} */
void information(char ui[])
{
	clrscr();
	gotoxy(8,3);
	printf("0--------------------*--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");

   //	box(7,6,73,22);
	box(1,6,80,8);
	gotoxy(2,7);
	delay(50);printf(" No. Place                                                                Code");
	box(1,6,80,21);//first box
	gotoxy(2,9);
	delay(50);printf(" 1.  Australia.............................................................BNE");//done
	gotoxy(2,10);
	delay(50);printf(" 2.  China.................................................................BJS");//done
	gotoxy(2,11);
	delay(50);printf(" 3.  Dubai.................................................................DXB");//done
	gotoxy(2,12);
	delay(50);printf(" 4.  England...............................................................LHR");//done
	gotoxy(2,13);
	delay(50);printf(" 5.  France................................................................CDG");//done
	gotoxy(2,14);
	delay(50);printf(" 6.  Germany...............................................................FRA");//done
	gotoxy(2,15);
	delay(50);printf(" 7.  India.................................................................BOM");//done
	gotoxy(2,16);
	delay(50);printf(" 8.  Japan.................................................................KIX");
	gotoxy(2,17);
	delay(50);printf(" 9.  Malaysia..............................................................KUL");
	gotoxy(2,18);
	delay(50);printf(" 10. Singapore.............................................................SIN");
	gotoxy(2,19);
	delay(50);printf(" 11. United States of America..............................................JFK");
	gotoxy(2,20);
	delay(50);
	box(1,22,80,24);//second box
	gotoxy(5,23);
	printf("ENTER YOUR NATIONALITY: [0-11]: ");
	scanf("%d",&nationchoice);
	ch=fopen(ui,"a");
	fp=fopen("id.xlsx","a");
	fprintf(ch,"  %d",nationchoice);
	fprintf(fp,"\t%d",nationchoice);
pass:	clrscr();
		gotoxy(10,18);
		printf("NOTE: you can't cahnge your passport number");
		gotoxy(10,19);
		printf(" after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------*--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	gotoxy(10,8);
	printf("ENTER YOUR PASSPORT NUMBER:[8 char]\n");
	gotoxy(58,8);
	printf("=");
	ab=nationchoice;
	gotoxy(60,8);
	scanf("%s",passportnumber);
	strle=strlen(passportnumber);
	if(strle==8)
	{
		fprintf(ch,"\t%s",passportnumber);
		fprintf(fp,"\t%s",passportnumber);

		//if(ab==7)
		//{
		    //	gotoxy(10,10);
		  //	printf("ENTER YOUR AADHAR CARD NUMBER;");
		     //	gotoxy(58,10);
		      //	printf("=");
		      //	gotoxy(60,10);
		       //	scanf("%s",aadharnumber);
		      //	strle=strlen(aadharnumber);
		      //	if(strle==12)
		       //	{
			   //	fprintf(ch,"\t%s",aadharnumber);
			 //	fprintf(fp,"\t%s",aadharnumber);
				security(ui);


		    /*	else
			{
				clrscr();
				box(7,6,73,22);
				gotoxy(10,15);
				printf("PLEASE ENTER VALID AADHAR CARD NUMBER");
				delay(2000);
				goto aadhar;
			}*/
      }



	else
	{
		clrscr();
		box(7,6,73,22);
		gotoxy(10,15);
		printf("PLEASE ENTER VALID PASSPORT NUMBER");
		delay(2000);
		goto pass;
	}
	getch();

	}

void security(char ui[])
{

	clrscr();
    //			gotoxy(10,18);
      //		printf("NOTE: you can't cahnge you name,last name, gender, mobile number after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------0--------------------*--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	ch=fopen(ui,"a");
	gotoxy(10,8);
	printf("SET YOUR PASSWORD");
	gotoxy(58,8);
	printf("=");
	gotoxy(60,8);
	scanf("%s",password[20]);
	gotoxy(10,10);
	printf("RE-TYPE YOUR PASSWORD");
	gotoxy(58,10);
	printf("=");
	gotoxy(60,10);
	scanf("%s",password1[20]);
	ans=strcmp(password,password1);
	if(ans2==0)
	{
		fprintf(ch,"\t%s",password[20]);

	      //	fprintf(fp,"\t%s",password[20]);

	       /*	fscanf(ch,"%d %s %s %s %d %s %s",&yes,name,mobile,gender,&nation,passport,aadhar);
		remove(ui);
		yes=1;
		ch=fopen(ui,"w");
		fprintf(ch,"%s/t %d/t %s/t %s/t %s/t %d/t %s/t %s",password,yes,name,mobile,gender */
	}
	else
	{
		gotoxy(10,12);
		printf("ENTER CORRECT PASSWORD:");
		delay(500);
		security(ui);
	}
	gotoxy(28,12);
	printf("SECURITY QUESTION:  MAKE YOUR QUESTION");
	gotoxy(10,14);
	printf("WHAT IS YOUR FAVORITE = ");
	gotoxy(35,14);
	printf("=");
	gotoxy(37,14);
	printf("___________");
	gotoxy(37,14);
	scanf("%s",question);
	fprintf(ch,"\t%s",question);
	gotoxy(10,16);
	printf("ANSWER OF YOUR QUESTION:");
	gotoxy(35,16);
	printf("=");
	gotoxy(37,16);
	printf("___________");
	gotoxy(37,16);
	scanf("%s",ansquestion);
	fprintf(ch,"\t%s",ansquestion);
	additional(ui);
}
additional(char ui[])
{
	clrscr();
			gotoxy(10,18);
		printf("NOTE: you can't cahnge your medical condition status");
		gotoxy(10,19);
		printf(" after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------0--------------------0--------------------*");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	ch=fopen(ui,"a");
	gotoxy(10,8);
	printf("DO YOU HAVE ANY MEDICAL CONDITION");
	gotoxy(45,8);
	printf("1.YES");
	gotoxy(45,9);
	printf("2.NO");
	gotoxy(58,8);
	printf("=");
	gotoxy(60,8);
	scanf("%d",&ab);
	if(ab==1)
	{
		gotoxy(10,12);
		printf("GIVE US SHORT DISCRIPTION ABOUT YOUR MEDICAL CONDITION OR NAME");
		gotoxy(10,13);
		scanf("%s",medical);
		gotoxy(39,18);
	//	printf("THANK YOU FOR YOUR SUPPORT");
		fprintf(ch,"\t%s",medical);
		payment(ui);
	 }
	 if(ab==2)
	 {
		fprintf(ch,"\tNO");
		payment(ui);

	 }

	 return 0;
}

payment(char ui[])
{
	clrscr();
			gotoxy(10,18);
		printf("NOTE: you can't cahnge your credit card number,debit card number");
		gotoxy(10,19);
		printf("and upi after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------0--------------------0--------------------*");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	ch=fopen(ui,"a");
	gotoxy(10,8);
	printf("DO YOU WANT TO SAVE YOUR CREDIT CARD OR DEBIT CARD:");
	gotoxy(42,9);
	printf("1.YES");
	gotoxy(42,10);
	printf("2.NO");
	gotoxy(42,11);
	scanf("%d",&ans);
	if(ans==1)
	{
		clrscr();
		gotoxy(8,3);
		printf("0--------------------0--------------------0--------------------*");
		gotoxy(5,4);
		printf("personal detail    information           security         additional");
		box(7,6,73,22);
	       //	ch=fopen(ui,"a");
		gotoxy(35,8);
		printf("WHAT DO YOU WANT TO SAVE:");
		gotoxy(35,9);
		printf("1.CREDIT CARD");
		gotoxy(35,10);
		printf("2.DEBIT CARD");
		gotoxy(35,11);
		printf("3.UPI");
		gotoxy(35,12);
		scanf("%d",&ab);
		if(ab==1)
		{
	credit:		clrscr();
			gotoxy(10,18);
		printf("NOTE: you can't cahnge your credit card number ");
		gotoxy(10,19);
		printf("after signing up.so be careful while entering your data:)");

			gotoxy(8,3);
			printf("0--------------------0--------------------0--------------------*");
			gotoxy(5,4);
			printf("personal detail    information           security         additional");
			box(7,6,73,22);
			ch=fopen(ui,"a");
			gotoxy(10,8);
			printf("ENTER YOUR CREDIT CARD NUMBER");
			gotoxy(58,8);
			printf("=");
			gotoxy(60,8);
			scanf("%s",credit);
			ans=strlen(credit);
			if(ans==16)
			{
       creditmon:		gotoxy(10,10);
				printf("MONTH");
				gotoxy(58,10);
				printf("=");
				gotoxy(60,10);
				scanf("%s",cardmon);
				ans=strlen(cardmon);
				if(ans==2||ans==1)
				{
		  credityear:			gotoxy(10,12);
					printf("YEAR");
					gotoxy(58,12);
					printf("=");
					gotoxy(60,12);
					scanf("%s",cardyear);
					ans=strlen(cardyear);
					if(ans==4)
					{
		     cvv:				gotoxy(10,14);
						printf("ENTER YOUR CVV");
						gotoxy(58,14);
						printf("=");
						gotoxy(60,14);
						scanf("%s",cvv);
						ans=strlen(cvv);
						if(ans==3)
						{

							fprintf(ch," 1 %s %s %s %s",credit,cardmon,cardyear,cvv);
							printf("THANK YOU");
						}
						else
						{
							gotoxy(10,10);
						printf("please Enter correct cvv number");
						goto cvv;
						}
					}
					else
					{
						gotoxy(10,10);
						printf("please Enter correct credit card year");
						goto credityear;
					}
				}
				else
					{
					gotoxy(10,10);
					printf("please Enter correct credit card number");
					goto creditmon;

				}
			}
			else
			{
				gotoxy(10,10);
				printf("please Enter correct credit card number");
				goto credit;
			}
		}
		else if(ab==2)
		{
			//debit
     debit:			clrscr();
		gotoxy(10,18);
		printf("NOTE: you can't cahnge your debit card number");
		gotoxy(10,19);
		printf(" after signing up.so be careful while entering your data:)");

			gotoxy(8,3);
			printf("0--------------------0--------------------0--------------------*");
			gotoxy(5,4);
			printf("personal detail    information           security         additional");
			box(7,6,73,22);
			ch=fopen(ui,"a");
			gotoxy(10,8);
			printf("ENTER YOUR DEBIT CARD NUMBER");
			gotoxy(58,8);
			printf("=");
			gotoxy(60,8);
			scanf("%s",debit);
				ans=strlen(credit);
			if(ans==16)
			{
       debitmon:		gotoxy(10,10);
				printf("MONTH");
				gotoxy(58,10);
				printf("=");
				gotoxy(60,10);
				scanf("%s",cardmon);
				ans=strlen(cardmon);
				if(ans==2||ans==1)
				{
		  debityear:			gotoxy(10,12);
					printf("YEAR");
					gotoxy(58,12);
					printf("=");
					gotoxy(60,12);
					scanf("%s",cardyear);
					ans=strlen(cardyear);
					if(ans==4)
					{
		     cvvd:				gotoxy(10,14);
						printf("ENTER YOUR CVV");
						gotoxy(58,14);
						printf("=");
						gotoxy(60,14);
						scanf("%s",cvv);
						ans=strlen(cvv);
						if(ans==3)
						{

							fprintf(ch," 2 %s %s %s %s",credit,cardmon,cardyear,cvv);
							printf("THANK YOU");
						}
						else
						{
							gotoxy(10,10);
						printf("please Enter correct cvv number");
						goto cvvd;
						}
					}
					else
					{
						gotoxy(10,10);
						printf("please Enter correct credit card year");
						goto debityear;
					}
				}
				else
					{
					gotoxy(10,10);
					printf("please Enter correct credit card number");
					goto debitmon;

				}
			}
			else
			{
				gotoxy(10,10);
				printf("please Enter correct credit card number");
				goto debit;
			}
		}

       }
       if(ab==3)
		{
			//upi
			clrscr();
					gotoxy(10,18);
		printf("NOTE: you can't cahnge your upi after signing up.");
		gotoxy(10,19);
		printf("so be careful while entering your data:)");
			fi=fopen(ui,"a");
			fscanf(fi,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
			gotoxy(8,3);
			printf("0--------------------0--------------------0--------------------*");
			gotoxy(5,4);
			printf("personal detail    information           security         additional");
			box(7,6,73,22);
			ch=fopen(ui,"a");
			gotoxy(30,8);
			printf("YOUR UPI IS: %s@AVIAN",mobile);
			gotoxy(30,10);
			printf("DO YOU WANT TO ADD ANOTHER UPI:");
			gotoxy(62,10);
			printf("1. YES");
			gotoxy(62,11);
			printf("2. NO");
			gotoxy(10,12);
			scanf("%d",&a);
			if(a==1)
			{
	    upi:			gotoxy(10,14);
				printf("ENTER YOUR MOBILE NUMBER:");
			       //	gotoxy(10,12);
			       //	printf("YEAR");
				gotoxy(58,14);
				printf("=");
				gotoxy(70,14);
				printf("@AVIAN");
				gotoxy(60,14);
				scanf("%s",upi);
				ab=strlen(upi);
				if(ab==10)
				{
					fprintf(ch,"\t3 %s@AVIAN",upi);
				}
				else
				{
				 gotoxy(10,20);
				printf("ENTER VALID NUMBER:");
				goto upi;

				}


			}





		}
		else if(ans==0)
		{
			payment(ui);
		}
		else
		{
			gotoxy(20,13);
			printf("PLEASE ENTER CORRECT CHOICE");
			payment(ui);
		}

	 if(ans==2)
	{
		gotoxy(35,12);
		printf("OK NO PROBLEM:");
	}

}






