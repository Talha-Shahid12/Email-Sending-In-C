#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h> 
using namespace std;

void loading() 
{ 
 	int i = 0;
	 int a=219; 
 	char load[26]; 
 	while(i < 25) 
 	{ 
 		system("cls"); 
 		load[i++] = a; 
 		load[i] = '\0'; 
  
		printf("\n\n\n\n\n\n\n\n\t\t\t\tLOADING %-25s", load);
 		usleep(199900); 
 	} 
 
 system("cls"); 
 printf("\n"); 
} 

/* Mail work */

    FILE* locBit;
	FILE* locBit1;
	FILE* locBit2;
	FILE* locBit3;
	FILE *locBit4;
	FILE* MainCRET;
int Init(void)
{
	locBit = fopen("GmailUR.txt","w");
	locBit1 =fopen("Mail.txt","w");
	locBit2 =fopen("Message.txt","w");
	locBit3 =fopen("PassUR.txt","w");
	locBit4 =fopen("Subject.txt","w");	
	MainCRET=fopen("Mail.aysoat","w");
//	loading();
	fprintf(MainCRET,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody =''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, message)\n#print('We Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail')\n\n");
	fclose(MainCRET);
    return 0;
}




void fillDat(char *msg,char emi[256], char subj[256])
{
	Init();
	char GMAILID[2561]=/*"Your Email From which you are wanting to send Email"*/;
	fprintf(locBit,"%s",GMAILID);
	char PASSWARD[256]=/*"For Password of above email for this code use this video (https://www.youtube.com/watch?v=hXiPshHn9Pw&ab_channel=TweakLibrary)"*/;
	fprintf(locBit3,"%s",PASSWARD);
	char SENDMAIL[256];
    strcpy(SENDMAIL,emi);
	fprintf(locBit1,"%s",SENDMAIL);
	char SUBJECT[20];
    strcpy(SUBJECT,subj);
	fprintf(locBit4,"%s",SUBJECT);
	char MESSAGE[256];
    strcpy(MESSAGE,msg);
    fprintf(locBit2,"%s",MESSAGE);
	printf("\a");
	fclose(locBit);
	fclose(locBit1);
	fclose(locBit2);
	fclose(locBit3);
	fclose(locBit4);
}


int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}

int main()
{
	 fillDat(/*Your Message*/,/*Email to which you are wanting to send*/,/*Subject*/);
        SendMail(0);
        loading();
}


