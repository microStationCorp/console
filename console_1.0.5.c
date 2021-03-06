#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include"description.h"

//---------------------------------conversion-----------------------------------
char s[100],sd[10];
char flagS,flagD;
char *ptr;
int length;
int continueLoop=1;
int condition=1;
int exitloop=0;

void convert();
void convertConsole();

char bin[100];
char deci[100];
char oct[100];
char hex[100];

void takeNum();
void checkBin();
void checkHex();
void checkDec();
void checkOct();
		
void hexTo();
void hexToDeci();
void hexToBin();
void hexToOct();
		
void octTo();
void octToDeci();
void octToBin();
void octToHex();
		
void binTo();
void binToDeci();
void binToOct();
void binToHex();
	
void deciTo();
void deciToBin();
void deciToOct();
void deciToHex();

void same();
void direction();

//--------------------------------------microprocessor-----------------------------------
char smp[20];
char smn[20];

void microProcessor();
void mnemonics();

//----------------------------------------mathmetical operation-----------------------------
void mathOp();
void binAdd();
void deciAdd();
void hexAdd();
void octAdd();
void binSub();
void deciSub();
void hexSub();
void octSub();
void binMul();
void deciMul();
void hexMul();
void octMul();
void binDiv();
void deciDiv();
void hexDiv();
void octDiv();

unsigned char checkBinMop(char[]);
unsigned char checkDeciMop(char[]);
unsigned char checkhexMop(char[]);
unsigned char checkOctMop(char[]);
char mop[50];

//---------------------------------------------file operation-------------------------------
void fileOp();
void create();
void removeOp();
void open();

char sf[30];

void direction()
{
	do
	{
		continueLoop=1;
		condition=1;
		
		if(exitloop!=1)
		{
			printf("\n>>> ");
			gets(sd);
			strupr(sd);
		}
		
		if(strcmp(sd,"EXIT")==0 || exitloop==1)
		{
			exitloop=1;
			break;
		}
		else if(strcmp(sd,"HELP")==0)
		{
			help();
		}
		else if(strcmp(sd,"AUTHOR")==0)
		{
			author();
		}
		else if(strcmp(sd,"ABOUT")==0)
		{
			printf("\n");
			about();
		}
		else if(strcmp(sd,"CVT")==0)
		{
			convertConsole();
		}
		else if(strcmp(sd,"MP")==0)
		{
			microProcessor();
		}
		else if(strcmp(sd,"MOP")==0)
		{
			mathOp();
		}
		else if(strcmp(sd,"FILE")==0)
		{
			fileOp();
		}
		else if(strcmp(sd,"CLS")==0)
		{
			system("cls");
		}
		else if(strcmp(sd,"HOME")==0)
		{
			printf("\n>>> you are already in the home page\n");
		}
		else if(strcmp(sd,"BACK")==0)
		{
			printf("\n>>> you are in the last age\n");
		}
		else if(sd[0]=='\0')
		{
			;
		}
		else
		{
			printf("\n>>> Invalid syntax\n");
		}
	}while(1);
}

void fileOp()
{
	do
	{		
		if(exitloop!=1)
		{
			printf("\n>>> file > ");
			gets(sf);
		}
		
		if(strcmp(sf,"EXIT")==0 || strcmp(sf,"exit")==0 || exitloop==1)
		{
			exitloop=1;
			break;
		}
		else if(sf[0]=='C' && sf[1]=='R' && sf[2]=='T' && sf[3]==' ')
		{
			create();
		}
		else if(sf[0]=='R' && sf[1]=='M' && sf[2]=='V' && sf[3]==' ')
		{
			removeOp();
		}
		else if(sf[0]=='O' && sf[1]=='P' && sf[2]=='N' && sf[3]==' ')
		{
			open();
		}
		else if(strcmp(sf,"help")==0 || strcmp(sf,"HELP")==0)
		{
			helpfp();
		}
		else if(strcmp(sf,"author")==0 || strcmp(sf,"AUTHOR")==0)
		{
			author();
		}
		else if(strcmp(sf,"about")==0 || strcmp(sf,"ABOUT")==0)
		{
			printf("\n");
			about();
		}
		else if(strcmp(sf,"CLS")==0 || strcmp(sf,"cls")==0)
		{
			system("cls");
		}
		else if(strcmp(sf,"home")==0 || strcmp(sf,"HOME")==0)
		{
			direction();
			break;
		}
		else if(strcmp(sf,"back")==0 || strcmp(sf,"BACK")==0)
		{
			break;
		}
		else if(sf[0]=='\0')
		{
			;
		}
		else
		{
			printf("\n>>> file > Invalid syntax\n");
		}
	}while(1);
}

void open()
{
	char ch[20],c;
	int i,length,flag=1;
	FILE *fp;
	
	for(i=4;sf[i]!='\0';i++)
	{
		ch[i-4]=sf[i];
	}
	ch[i-4]='\0';
	
	length=strlen(ch);
	
	for(i=0;i<length;i++)
	{
		if(ch[i]==' ')
		{
			flag=0;
		}
	}
	if(ch[length-1]!='t' || ch[length-2]!='x' || ch[length-3]!='t' || ch[length-4]!='.')
	{
		printf("\n>>> file > please keep .txt extension\n");
	}
	else if(flag==0)
	{
		printf("\n>>> file > enter a valid file name\n");
	}
	else
	{
		fp=fopen(ch,"r");

		if(fp==NULL)
		{
			printf("\n>>> file > file not found\n");
			fclose(fp);
		}
		else
		{
			while(1)
			{
				c=fgetc(fp);
				if(c==EOF)
				{
					break;
				}
				else
				{
					printf("%c",c);
				}
			}
			fclose(fp);
		}	
	}
}

void create()
{
	char ch[20],c;
	int i,length,flag=1;
	FILE *fp;
	
	for(i=4;sf[i]!='\0';i++)
	{
		ch[i-4]=sf[i];
	}
	ch[i-4]='\0';
	
	length=strlen(ch);
	
	for(i=0;i<length;i++)
	{
		if(ch[i]==' ')
		{
			flag=0;
		}
	}
	if(ch[length-1]!='t' || ch[length-2]!='x' || ch[length-3]!='t' || ch[length-4]!='.')
	{
		printf("\n>>> file > please keep .txt extension\n");
	}
	else if(flag==0)
	{
		printf("\n>>> file > enter a valid file name\n");
	}
	else
	{
		fp=fopen(ch,"w");
		
		while(1)
		{
			c=getchar();
			if(c==EOF)
			{
				break;
			}
			else
			{
				fputc(c,fp);
			}
		}
		fclose(fp);
	}
}

void removeOp()
{
	char ch[20],c;
	int i,length,flag=1,status;
	FILE *fp;
	
	for(i=4;sf[i]!='\0';i++)
	{
		ch[i-4]=sf[i];
	}
	ch[i-4]='\0';
	
	length=strlen(ch);
	
	for(i=0;i<length;i++)
	{
		if(ch[i]==' ')
		{
			flag=0;
		}
	}
	if(ch[length-1]!='t' || ch[length-2]!='x' || ch[length-3]!='t' || ch[length-4]!='.')
	{
		printf("\n>>> file > please keep .txt extension\n");
	}
	else if(flag==0)
	{
		printf("\n>>> file > enter a valid file name\n");
	}
	else
	{
		status=remove(ch);
		if(status==-1)
		{
			printf("\n>>> file > file not found\n");
		}
		else
		{
			printf("\n>>> file > file has removed\n");
		}
	}
}
void same()
{
	int i;
	for(i=4;i<length;i++)
		{
			printf("%c",s[i]);
		}
}
	
void main()
{
	printf("microStation Xervis [Version 1.0.5]\n"
"(c) 2017 microStation Corporation. All rights reserved.\n"
	"\nIt is an application to help students in Number system ."
	"\nIt will also helps students to work with 8085 microprocessor"
	"\ntype 'help' for know how to use, \ntype 'author' to know about author\n");
	
	direction();
}

void checkBin()  //-----------------------check binary
{
	ptr=bin;
	
	if(*ptr=='\0')
	{
		printf("\n>>> conversion > invalid syntax\n");
		continueLoop=0;
		condition=0;
	}
	
	while(*ptr!='\0')
	{
		if(*ptr=='1'||*ptr=='0')
		{
			ptr++;
		}
		else if(*ptr=='.')
		{
			printf("\n>>> conversion > This application does not support any floating point value\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else if(bin[0]=='-')
		{
			printf("\n>>> conversion > This application does not support any value which is less than zero\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else
		{
			printf("\n>>> conversion > Enter a valid binary number\n");
			condition=0;
			if(flagS!=flagD)
			{
				convertConsole();
			}
			break;
		}
	}	
}

void checkDec() //-------------------check decimal
{
	ptr=deci;
	
	if(*ptr=='\0')
	{
		printf("\n>>> conversion > invalid syntax\n");
		continueLoop=0;
		condition=0;
	}
	
	while(*ptr!='\0')
	{
		if(*ptr>47 && *ptr<58)
		{
			ptr++;
		}
		else if(deci[0]=='-')
		{
			printf("\n>>> conversion > This application does not support any value which is less than zero\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else if(*ptr=='.')
		{
			printf("\n>>> conversion > This application does not support any floating point value\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else if(deci[0]=='-')
		{
			printf("\n>>> conversion > This application does not support any value which is less than zero\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else
		{
			printf("\n>>> conversion > Enter a valid decimal number\n");
			condition=0;
			if(flagS!=flagD)
			{
				convertConsole();
			}
			break;
		}
	}
}

void checkHex() //-------------------check Hexa-decimal
{
	ptr=hex;
	
	if(*ptr=='\0')
	{
		printf("\n>>> conversion > invalid syntax\n");
		continueLoop=0;
		condition=0;
	}
		
	while(*ptr!='\0')
	{
		if(*ptr>47 && *ptr<58 || *ptr>64 && *ptr<71)
		{
			ptr++;
		}
		else if(hex[0]=='-')
		{
			printf("\n>>> conversion > This application does not support any value which is less than zero\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else if(*ptr=='.')
		{
			printf("\n>>> conversion > This application does not support any floating point value\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else
		{
			printf("\n>>> conversion > Enter a valid hexa-decimal number\n");
			condition=0;
			if(flagS!=flagD)
			{
				convertConsole();
			}
			break;
		}
	}
}

void checkOct() //-------------------check octal
{
	ptr=oct;
	
	if(*ptr=='\0')
	{
		printf("\n>>> conversion > invalid syntax\n");
		continueLoop=0;
		condition=0;
	}
	
	while(*ptr!='\0')
	{
		if(*ptr>47 && *ptr<56)
		{
			ptr++;
		}
		else if(oct[0]=='-')
		{
			printf("\n>>> conversion > This application does not support any value which is less than zero\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else if(*ptr=='.')
		{
			printf("\n>>> conversion > This application does not support any floating point value\n");
			continueLoop=0;
			condition=0;
			break;
		}
		else
		{
			printf("\n>>> conversion > Enter a valid octal number\n");
			condition=0;
			if(flagS!=flagD)
			{
				convertConsole();
			}
			break;
		}
	}
}

void convertConsole()
{
	int count,i,loop;
	do
	{
		continueLoop=1;
		condition=1;
		
		if(exitloop!=1)
		{
			printf("\n>>> conversion > ");
			gets(s);
			length=strlen(s);
		}
		
		count=0;
		loop=1;
		
		if(strcmp(s,"EXIT")==0 || strcmp(s,"exit")==0 || exitloop==1)
		{
			exitloop=1;
			break;
		}
		else if(strcmp(s,"back")==0 || strcmp(s,"BACK")==0)
		{
			break;
		}
		else if(strcmp(s,"help")==0 || strcmp(s,"HELP")==0)
		{
			helpCvt();
		}
		else if(strcmp(s,"author")==0 || strcmp(s,"AUTHOR")==0)
		{
			author();
		}
		else if(strcmp(s,"home")==0 || strcmp(s,"HOME")==0)
		{
			direction();
			break;
		}
		else if(strcmp(s,"about")==0 || strcmp(s,"ABOUT")==0)
		{
			printf("\n");
			about();
		}
		else if(strcmp(s,"CLS")==0 || strcmp(s,"cls")==0)
		{
			system("cls");
		}
		else if(s[0]!='\0')
		{
			if(s[0]==32 || s[1]!=32 || s[3]!=32 ||s[0]==0 || (s[0]!='B' && s[0]!='O' && s[0]!='D' && s[0]!='H') || (s[2]!='B' && s[2]!='O' && s[2]!='D' && s[2]!='H'))
			{
				printf("\n>>> conversion > invalid syntax\n");
				continueLoop=0;
			}
			else
			{
				if(s[0]=='B' || s[0]=='O' || s[0]=='D' || s[0]=='H')
				{	
				flagS=s[0];
				}
			
				if(s[2]=='B' || s[2]=='O' || s[2]=='D' || s[2]=='H')
				{
				flagD=s[2];
				}
		
				if(flagS==flagD)
				{
					switch(flagS)
					{
						case 'B' : takeNum();
						break;
						case 'H' : takeNum();
						break;
						case 'O' : takeNum();
						break;
						case 'D' : takeNum();
						break;
					}
					if(condition==1)
					{
						switch(flagS)
						{
							case 'B' : printf("\n>>> conversion > binary number is :: ");
							break;
							case 'H' : printf("\n>>> conversion > hexa-decimal number is :: ");
							break;
							case 'O' : printf("\n>>> conversion > octal number is :: ");
							break;
							case 'D' : printf("\n>>> conversion > decimal number is :: ");
							break;
						}
						same();
						printf("\n");
					}
				}
				else
				{
					takeNum();
					if(continueLoop==1 && exitloop!=1)
					{
						convert();
					}
				}
			}
		}
	}while(1);
}

void takeNum()
{
	int i;
	if(flagS=='B')
	{
		for(i=4;i<length;i++)
		{
			bin[i-4]=s[i];
		}
		bin[i-4]='\0';
	}
	else if(flagS=='O')
	{
		for(i=4;i<length;i++)
		{
			oct[i-4]=s[i];
		}
		oct[i-4]='\0';
	}
	else if(flagS=='H')
	{
		for(i=4;i<length;i++)
		{
			hex[i-4]=s[i];
		}
		hex[i-4]='\0';
	}
	else if(flagS=='D')
	{
		for(i=4;i<length;i++)
		{
			deci[i-4]=s[i];
		}
		deci[i-4]='\0';
	}
	
	switch(flagS)
	{
		case 'H': checkHex();
				break;
		case 'O': checkOct();
				break;
		case 'B': checkBin();
				break;
		case 'D': checkDec();
				break;
	}
}

void binToHex() //-----------------binary to hexa decimal convert
{
	static int newHex[25];
	int j;
	int count;
	int flag=1;
	
	length=strlen(bin);
	
	for(j=0;;j++)
	{
		if(flag!=1)
		{
			break;
		}
		newHex[j]=0;
		for(count=0;count<4;count++)
		{
			if(bin[length-1]=='1')
			{
				newHex[j]=newHex[j] + pow(2,count);
			}
			
			if(length>0)
			{
				length--;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	
	printf("\n>>> conversion > Hexa-decimal number is :: ");
	for(j=j-1;j>=0;j--)
	{
		switch(newHex[j])
		{
			case 10: printf("A");
				break;
			case 11: printf("B");
				break;
			case 12: printf("C");
				break;
			case 13: printf("D");
				break;
			case 14: printf("E");
				break;
			case 15: printf("F");
				break;
			default: printf("%d",newHex[j]);
		}
	}
	printf("\n");
	continueLoop=0;
}

void binToOct() //-----------------binary to octal convert
{
	static int newOct[25];
	int j;
	int length;
	int count;
	int flag=1;
	
	length=strlen(bin);
	
	for(j=0;;j++)
	{
		if(flag!=1)
		{
			break;
		}
		newOct[j]=0;
		for(count=0;count<3;count++)
		{
			if(bin[length-1]=='1')
			{
				newOct[j]=newOct[j] + pow(2,count);
			}
			
			if(length>0)
			{
				length--;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	
	printf("\n>>> conversion > Octal number is :: ");
	for(j=j-1;j>=0;j--)
	{
		printf("%d",newOct[j]);
	}
	printf("\n");
	continueLoop=0;
}

void binToDeci()//----------------binary to deci convert
{
	int deci=0,i;
	
	length=strlen(bin);
	for(i=1;i<=length;i++)
	{
		if(bin[length-i]=='1')
		{
			deci=deci+pow(2,i-1);
		}		
	}
	printf("\n>>> conversion > Decimal number is :: %d\n",deci);
	continueLoop=0;
}


void convert() //------------------------convert function
{
	switch(flagS)
	{
		case 'H': hexTo();
			break;
		case 'O': octTo();
			break;
		case 'B': binTo();
			break;
		case 'D': deciTo();
			break;
	}
}

void binTo() //------------convert binary to others
{
	switch(flagD)
	{
		case 'H': binToHex();
		break;
		case 'O': binToOct();
		break;
		case 'D': binToDeci();
		break;
	}
}

void hexTo() //------------convert hexa-decimal to others
{
	switch(flagD)
	{
		case 'B':hexToBin();
		break;
		case 'O':hexToOct();
		break;
		case 'D':hexToDeci();
		break;
	}
}

void octTo() //------------convert octal to others
{
	switch(flagD)
	{
		case 'H':octToHex();
		break;
		case 'B':octToBin();
		break;
		case 'D':octToDeci();
		break;
	}
}

void deciTo() //------------convert binary to others
{
	switch(flagD)
	{
		case 'H':deciToHex();
		break;
		case 'O':deciToOct();
		break;
		case 'B':deciToBin();
		break;
	}
}

void deciToBin()//------------------decimal to binary convert
{
	int length,i,decimal=0;
	char newBin[100];
	
	length=strlen(deci);
	
	for(i=0;i<length;i++)
	{
		switch(deci[i])
		{
			case '1' : decimal=decimal*10 + 1;
						break;
			case '2' : decimal=decimal*10 + 2;
						break;
			case '3' : decimal=decimal*10 + 3;
						break;
			case '4' : decimal=decimal*10 + 4;
						break;
			case '5' : decimal=decimal*10 + 5;
						break;
			case '6' : decimal=decimal*10 + 6;
						break;
			case '7' : decimal=decimal*10 + 7;
						break;
			case '8' : decimal=decimal*10 + 8;
						break;
			case '9' : decimal=decimal*10 + 9;
						break;
			case '0' : decimal=decimal*10 + 0;
						break;
		}
	}
	for(i=0;decimal!=0;i++)
	{
		if(decimal%2==1)
		{
			newBin[i]='1';
		}
		else
		{
			newBin[i]='0';
		}
		decimal=decimal/2;
	}
	newBin[i]='\0';
	
	strrev(newBin);
	printf("\n>>> conversion > Binary number is :: ");
	puts(newBin);
	continueLoop=0;
}

void deciToHex()//------------------decimal to hexa-decimal convert
{
	int length,i,decimal=0,j;
	char newHex[100];
	
	length=strlen(deci);
	
	for(i=0;i<length;i++)
	{
		switch(deci[i])
		{
			case '1' : decimal=decimal*10 + 1;
						break;
			case '2' : decimal=decimal*10 + 2;
						break;
			case '3' : decimal=decimal*10 + 3;
						break;
			case '4' : decimal=decimal*10 + 4;
						break;
			case '5' : decimal=decimal*10 + 5;
						break;
			case '6' : decimal=decimal*10 + 6;
						break;
			case '7' : decimal=decimal*10 + 7;
						break;
			case '8' : decimal=decimal*10 + 8;
						break;
			case '9' : decimal=decimal*10 + 9;
						break;
			case '0' : decimal=decimal*10 + 0;
						break;
		}
	}
	for(i=0;decimal!=0;i++)
	{
		j=decimal%16;
		switch(j)
		{
			case 0:newHex[i]='0';
				break;
			case 1:newHex[i]='1';
				break;
			case 2:newHex[i]='2';
				break;
			case 3:newHex[i]='3';
				break;
			case 4:newHex[i]='4';
				break;
			case 5:newHex[i]='5';
				break;
			case 6:newHex[i]='6';
				break;
			case 7:newHex[i]='7';
				break;
			case 8:newHex[i]='8';
				break;
			case 9:newHex[i]='9';
				break;
			case 10:newHex[i]='A';
				break;
			case 11:newHex[i]='B';
				break;
			case 12:newHex[i]='C';
				break;
			case 13:newHex[j]='D';
				break;
			case 14:newHex[i]='E';
				break;
			case 15:newHex[i]='F';
				break;
		}
		decimal=decimal/16;
	}
	newHex[i]='\0';
	
	strrev(newHex);
	printf("\n>>> conversion > Hexa-decimal number is :: ");
	puts(newHex);
	printf("\n");
	continueLoop=0;
}

void deciToOct()//------------------decimal to octal convert
{
	int length,i,decimal=0,j;
	char newOct[100];
	
	length=strlen(deci);
	
	for(i=0;i<length;i++)
	{
		switch(deci[i])
		{
			case '1' : decimal=decimal*10 + 1;
						break;
			case '2' : decimal=decimal*10 + 2;
						break;
			case '3' : decimal=decimal*10 + 3;
						break;
			case '4' : decimal=decimal*10 + 4;
						break;
			case '5' : decimal=decimal*10 + 5;
						break;
			case '6' : decimal=decimal*10 + 6;
						break;
			case '7' : decimal=decimal*10 + 7;
						break;
			case '8' : decimal=decimal*10 + 8;
						break;
			case '9' : decimal=decimal*10 + 9;
						break;
			case '0' : decimal=decimal*10 + 0;
						break;
		}
	}
	for(i=0;decimal!=0;i++)
	{
		j=decimal%8;
		switch(j)
		{
			case 0:newOct[i]='0';
				break;
			case 1:newOct[i]='1';
				break;
			case 2:newOct[i]='2';
				break;
			case 3:newOct[i]='3';
				break;
			case 4:newOct[i]='4';
				break;
			case 5:newOct[i]='5';
				break;
			case 6:newOct[i]='6';
				break;
			case 7:newOct[i]='7';
				break;
		}
		decimal=decimal/8;
	}
	newOct[i]='\0';
	
	strrev(newOct);
	printf("\n>>> conversion > Octal number is :: ");
	puts(newOct);
	printf("\n");
	continueLoop=0;
}

void hexToBin() //-------------hexa-decimal to binary
{
	char newBin[100];
	int length,i,j=0,num=0,count;
	
	length=strlen(hex);
	
	for(i=0;i<length;i++)
	{
		switch(hex[i])
		{
			case '0':num=0;
				break;
			case '1':num=1;
				break;
			case '2':num=2;
				break;
			case '3':num=3;
				break;
			case '4':num=4;
				break;
			case '5':num=5;
				break;
			case '6':num=6;
				break;
			case '7':num=7;
				break;
			case '8':num=8;
				break;
			case '9':num=9;
				break;
			case 'A':num=10;
				break;
			case 'B':num=11;
				break;
			case 'C':num=12;
				break;
			case 'D':num=13;
				break;
			case 'E':num=14;
				break;
			case 'F':num=15;
				break;
		}
		
		for(count=3;num!=0 || count>=0;count--)
		{
			if(num%2==1)
			{
				newBin[j+count]='1';
			}
			else
			{
				newBin[j+count]='0';
			}
			num=num/2;
		}
		j=j+4;
	}
	newBin[j]='\0';
	printf("\n>>> conversion > Binary number is :: ");
	puts(newBin);
	continueLoop=0;
}

void hexToDeci()//-------------hexa-decimal to decimal convert
{
	long int decimal=0;
	int length,i,num;
	
	length=strlen(hex);
	
	for(i=1;i<=length;i++)
	{
		switch(hex[i-1])
		{
			case '0':num=0;
				break;
			case '1':num=1;
				break;
			case '2':num=2;
				break;
			case '3':num=3;
				break;
			case '4':num=4;
				break;
			case '5':num=5;
				break;
			case '6':num=6;
				break;
			case '7':num=7;
				break;
			case '8':num=8;
				break;
			case '9':num=9;
				break;
			case 'A':num=10;
				break;
			case 'B':num=11;
				break;
			case 'C':num=12;
				break;
			case 'D':num=13;
				break;
			case 'E':num=14;
				break;
			case 'F':num=15;
				break;
		}
		decimal=decimal + num*pow(16,length-i);
	}
	printf("\n>>> conversion > Decimal number is :: %ld\n",decimal);
	continueLoop=0;
}

void hexToOct() //----------------hexa-decimal to octal convert
{
	char newBin[100];
	int length,i,j=0,num=0,count;
	
	static int newOct[25];
	int flag=1;
	
	length=strlen(hex);
	
	for(i=0;i<length;i++)
	{
		switch(hex[i])
		{
			case '0':num=0;
				break;
			case '1':num=1;
				break;
			case '2':num=2;
				break;
			case '3':num=3;
				break;
			case '4':num=4;
				break;
			case '5':num=5;
				break;
			case '6':num=6;
				break;
			case '7':num=7;
				break;
			case '8':num=8;
				break;
			case '9':num=9;
				break;
			case 'A':num=10;
				break;
			case 'B':num=11;
				break;
			case 'C':num=12;
				break;
			case 'D':num=13;
				break;
			case 'E':num=14;
				break;
			case 'F':num=15;
				break;
		}
		
		for(count=3;num!=0 || count>=0;count--)
		{
			if(num%2==1)
			{
				newBin[j+count]='1';
			}
			else
			{
				newBin[j+count]='0';
			}
			num=num/2;
		}
		j=j+4;
	}
	newBin[j]='\0';
	
	length=strlen(newBin);
	for(j=0;;j++)
	{
		if(flag!=1)
		{
			break;
		}
		newOct[j]=0;
		for(count=0;count<3;count++)
		{
			if(newBin[length-1]=='1')
			{
				newOct[j]=newOct[j] + pow(2,count);
			}
			
			if(length>0)
			{
				length--;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	
	printf("\n>>> conversion > Octal number is :: ");
	for(j=j-1;j>=0;j--)
	{
		printf("%d",newOct[j]);
	}
	printf("\n");
	continueLoop=0;
}

void octToBin() //-----------------octal to binary convert
{
	char newBin[100];
	int length,i,j=0,num=0,count;
	
	length=strlen(oct);
	
	for(i=0;i<length;i++)
	{
		switch(oct[i])
		{
			case '0':num=0;
				break;
			case '1':num=1;
				break;
			case '2':num=2;
				break;
			case '3':num=3;
				break;
			case '4':num=4;
				break;
			case '5':num=5;
				break;
			case '6':num=6;
				break;
			case '7':num=7;
				break;
		}
		
		for(count=2;num!=0 || count>=0;count--)
		{
			if(num%2==1)
			{
				newBin[j+count]='1';
			}
			else
			{
				newBin[j+count]='0';
			}
			num=num/2;
		}
		j=j+3;
	}
	newBin[j]='\0';
	printf("\n>>> conversion > Binary number is :: ");
	puts(newBin);
	continueLoop=0;
}

void octToDeci() //-----------------octal to decimal convert
{
	long int decimal=0;
	int length,i,num;
	
	length=strlen(oct);
	
	for(i=1;i<=length;i++)
	{
		switch(oct[i-1])
		{
			case '0':num=0;
				break;
			case '1':num=1;
				break;
			case '2':num=2;
				break;
			case '3':num=3;
				break;
			case '4':num=4;
				break;
			case '5':num=5;
				break;
			case '6':num=6;
				break;
			case '7':num=7;
				break;
		}
		decimal=decimal + num*pow(8,length-i);
	}
	printf("\n>>> conversion > Decimal number is :: %ld\n",decimal);
	continueLoop=0;
}

void octToHex() //------------------octal to hexa-decimal
{
	char newBin[100];
	int length,i,j=0,num=0,count;
	static int newHex[25];
	int flag=1;
	
	length=strlen(oct);
	
	for(i=0;i<length;i++)
	{
		switch(oct[i])
		{
			case '0':num=0;
				break;
			case '1':num=1;
				break;
			case '2':num=2;
				break;
			case '3':num=3;
				break;
			case '4':num=4;
				break;
			case '5':num=5;
				break;
			case '6':num=6;
				break;
			case '7':num=7;
				break;
		}
		
		for(count=2;num!=0 || count>=0;count--)
		{
			if(num%2==1)
			{
				newBin[j+count]='1';
			}
			else
			{
				newBin[j+count]='0';
			}
			num=num/2;
		}
		j=j+3;
	}
	newBin[j]='\0';
	
	length=strlen(newBin);
	
	for(j=0;;j++)
	{
		if(flag!=1)
		{
			break;
		}
		newHex[j]=0;
		for(count=0;count<4;count++)
		{
			if(newBin[length-1]=='1')
			{
				newHex[j]=newHex[j] + pow(2,count);
			}
			
			if(length>0)
			{
				length--;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	printf("\n>>> conversion > Hexa-decimal number is ::");
	for(j=j-1;j>=0;j--)
	{
		switch(newHex[j])
		{
			case 10: printf("A");
				break;
			case 11: printf("B");
				break;
			case 12: printf("C");
				break;
			case 13: printf("D");
				break;
			case 14: printf("E");
				break;
			case 15: printf("F");
				break;
			default: printf("%d",newHex[j]);
		}
	}
	printf("\n");
	continueLoop=0;
}

void microProcessor()
{
	do
	{
		if(exitloop!=1)
		{
			printf("\n>>> microProcessor > ");
			gets(smp);
		}
		
		if(strcmp(smp,"EXIT")==0 || strcmp(smp,"exit")==0 || exitloop==1)
		{
			exitloop=1;
			break;
		}
		else if(strcmp(smp,"back")==0 || strcmp(smp,"BACK")==0)
		{
			break;
		}
		else if(strcmp(smp,"help")==0 || strcmp(smp,"HELP")==0)
		{
			helpmp();
		}
		else if(strcmp(smp,"author")==0 || strcmp(smp,"AUTHOR")==0)
		{
			author();
		}
		else if(strcmp(smp,"about")==0 || strcmp(smp,"ABOUT")==0)
		{
			printf("\n");
			about();
		}
		else if(strcmp(smp,"MNC")==0 || strcmp(smp,"mnc")==0)
		{
			mnemonics();
		}
		else if(strcmp(smp,"home")==0 || strcmp(smp,"HOME")==0)
		{
			direction();
			break;
		}
		else if(strcmp(smp,"CLS")==0 || strcmp(smp,"cls")==0)
		{
			system("cls");
		}
		else if(smp[0]=='\0')
		{
			;
		}
		else
		{
			printf("\n>>> microProcessor > Invalid syntax\n");
		}
	}while(1);
}

void mnemonics()
{
	do
	{
		if(exitloop!=1)
		{
			printf("\n>>> microProcessor > Mnemonics > ");
			gets(smn);
		}
		
		if(strcmp(smn,"EXIT")==0 || strcmp(smn,"exit")==0 || exitloop==1)
		{
			exitloop=1;
			break;
		}
		else if(strcmp(smn,"back")==0 || strcmp(smn,"BACK")==0)
		{
			break;
		}
		else if(strcmp(smn,"help")==0 || strcmp(smn,"HELP")==0)
		{
			helpmn();
		}
		else if(strcmp(smn,"author")==0 || strcmp(smn,"AUTHOR")==0)
		{
			author();
		}
		else if(strcmp(smn,"about")==0 || strcmp(smn,"ABOUT")==0)
		{
			printf("\n");
			about();
		}
		else if(strcmp(smn,"CLS")==0 || strcmp(smn,"cls")==0)
		{
			system("cls");
		}
		else if(strcmp(smn,"ADD")==0)
		{
			addmnc();
		}
		else if(strcmp(smn,"ADI")==0)
		{
			adimnc();
		}
		else if(strcmp(smn,"ACI")==0)
		{
			acimnc();
		}
		else if(strcmp(smn,"ADC")==0)
		{
			adcmnc(); 
		}
		else if(strcmp(smn,"ANA")==0)
		{
			anamnc();
		}
		else if(strcmp(smn,"ANI")==0)
		{
			animnc();
		}
		else if(strcmp(smn,"CALL")==0)
		{
			callmnc();
		}
		else if(strcmp(smn,"CMA")==0)
		{
			cmamnc();
		}
		else if(strcmp(smn,"CMC")==0)
		{
			cmcmnc();
		}
		else if(strcmp(smn,"CMP")==0)
		{
			cmpmnc();
		}
		else if(strcmp(smn,"CPI")==0)
		{
			cpimnc();
		}
		else if(strcmp(smn,"DAD")==0)
		{
			dadmnc();
		}
		else if(strcmp(smn,"DCR")==0)
		{
			dcrmnc();
		}	
		else if(strcmp(smn,"home")==0 || strcmp(smn,"HOME")==0)
		{
			direction();
			break;
		}
		else if(smn[0]=='\0')
		{
			;
		}
		else
		{
			printf("\n>>> microProcessor > mnemonics > Invalid syntax\n");
		}
	}while(1);
}

void mathOp()//-------------------------------------math operation main menu---------------------------
{
	do
	{
		if(exitloop!=1)
		{
			printf("\n>>> mathOperation > ");
			gets(mop);
		}
		
		if(strcmp(mop,"EXIT")==0 || strcmp(mop,"exit")==0 || exitloop==1)
		{
			exitloop=1;
			break;
		}
		else if(strcmp(mop,"back")==0 || strcmp(mop,"BACK")==0)
		{
			break;
		}
		else if(strcmp(mop,"help")==0 || strcmp(mop,"HELP")==0)
		{
			helpmop();
		}
		else if(strcmp(mop,"author")==0 || strcmp(mop,"AUTHOR")==0)
		{
			author();
		}
		else if(strcmp(mop,"about")==0 || strcmp(mop,"ABOUT")==0)
		{
			printf("\n");
			about();
		}
		else if(strcmp(mop,"CLS")==0 || strcmp(mop,"cls")==0)
		{
			system("cls");
		}
		else if(strcmp(mop,"home")==0 || strcmp(mop,"HOME")==0)
		{
			direction();
			break;
		}
		else if(mop[0]=='\0')
		{
			;
		}
		else if(mop[0]=='A' && mop[1]=='D' && mop[2]=='D' && mop[3]==' ' && mop[4]=='B' && mop[5]==' ')
		{
			binAdd();
		}
		else if(mop[0]=='A' && mop[1]=='D' && mop[2]=='D' && mop[3]==' ' && mop[4]=='D' && mop[5]==' ')
		{
			deciAdd();
		}
		else if(mop[0]=='A' && mop[1]=='D' && mop[2]=='D' && mop[3]==' ' && mop[4]=='O' && mop[5]==' ')
		{
			octAdd();
		}
		else if(mop[0]=='A' && mop[1]=='D' && mop[2]=='D' && mop[3]==' ' && mop[4]=='H' && mop[5]==' ')
		{
			hexAdd();
		}
		else if(mop[0]=='S' && mop[1]=='U' && mop[2]=='B' && mop[3]==' ' && mop[4]=='B' && mop[5]==' ')
		{
			binSub();
		}
		else if(mop[0]=='S' && mop[1]=='U' && mop[2]=='B' && mop[3]==' ' && mop[4]=='D' && mop[5]==' ')
		{
			deciSub();
		}
		else if(mop[0]=='S' && mop[1]=='U' && mop[2]=='B' && mop[3]==' ' && mop[4]=='O' && mop[5]==' ')
		{
			octSub();
		}
		else if(mop[0]=='S' && mop[1]=='U' && mop[2]=='B' && mop[3]==' ' && mop[4]=='H' && mop[5]==' ')
		{
			hexSub();
		}
		else if(mop[0]=='M' && mop[1]=='U' && mop[2]=='L' && mop[3]==' ' && mop[4]=='B' && mop[5]==' ')
		{
			binMul();
		}
		else if(mop[0]=='M' && mop[1]=='U' && mop[2]=='L' && mop[3]==' ' && mop[4]=='D' && mop[5]==' ')
		{
			deciMul();
		}
		else if(mop[0]=='M' && mop[1]=='U' && mop[2]=='L' && mop[3]==' ' && mop[4]=='O' && mop[5]==' ')
		{
			octMul();
		}
		else if(mop[0]=='M' && mop[1]=='U' && mop[2]=='L' && mop[3]==' ' && mop[4]=='H' && mop[5]==' ')
		{
			hexMul();
		}
		else if(mop[0]=='D' && mop[1]=='I' && mop[2]=='V' && mop[3]==' ' && mop[4]=='B' && mop[5]==' ')
		{
			binDiv();
		}
		else if(mop[0]=='D' && mop[1]=='I' && mop[2]=='V' && mop[3]==' ' && mop[4]=='D' && mop[5]==' ')
		{
			deciDiv();
		}
		else if(mop[0]=='D' && mop[1]=='I' && mop[2]=='V' && mop[3]==' ' && mop[4]=='O' && mop[5]==' ')
		{
			octDiv();
		}
		else if(mop[0]=='D' && mop[1]=='I' && mop[2]=='V' && mop[3]==' ' && mop[4]=='H' && mop[5]==' ')
		{
			hexDiv();
		}
		else
		{
			printf("\n>>> mathOperation > Invalid syntax\n");
		}
	}while(1);	
}

void binAdd()//--------------------------------------binary addition-----------------------------------
{
	unsigned char check1,check2;
	int deci1=0,deci2=0,res=0,i,j;
	char bin1[10],bin2[10],newBin[20];
	printf("\n>>> mathOperation > ");
	for(i=6;mop[i]!=' ';i++)
	{
		bin1[i-6]=mop[i];
	}
	bin1[i-6]='\0';
	check1=checkBinMop(bin1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		bin2[i-j]=mop[i];
	}
	bin2[i-j]='\0';
	check2=checkBinMop(bin2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid binary number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{	
		length=strlen(bin1);
		for(i=1;i<=length;i++)
		{
			if(bin1[length-i]=='1')
			{
				deci1=deci1+pow(2,i-1);
			}		
		}
		
		length=strlen(bin2);
		for(i=1;i<=length;i++)
		{
			if(bin2[length-i]=='1')
			{
				deci2=deci2+pow(2,i-1);
			}		
		}
		
		res=deci1+deci2;
		
		for(i=0;res!=0;i++)
		{
			if(res%2==1)
			{
				newBin[i]='1';
			}
			else
			{
				newBin[i]='0';
			}
			res=res/2;
		}
		newBin[i]='\0';
		
		strrev(newBin);
		printf("Addition is :: ");
		puts(newBin);
	}
}

void deciAdd()//------------------------------------decimal addition---------------------------------
{
	unsigned char check1,check2;
	char deci1[20],deci2[20];
	int length,i,j,ideci1=0,ideci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		deci1[i-6]=mop[i];
	}
	deci1[i-6]='\0';
	check1=checkDeciMop(deci1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		deci2[i-j]=mop[i];
	}
	deci2[i-j]='\0';
	check2=checkDeciMop(deci2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(deci1);
		for(i=0;i<length;i++)
		{
			switch(deci1[i])
			{
				case '1' : ideci1=ideci1*10 + 1;
							break;
				case '2' : ideci1=ideci1*10 + 2;
							break;
				case '3' : ideci1=ideci1*10 + 3;
							break;
				case '4' : ideci1=ideci1*10 + 4;
							break;
				case '5' : ideci1=ideci1*10 + 5;
							break;
				case '6' : ideci1=ideci1*10 + 6;
							break;
				case '7' : ideci1=ideci1*10 + 7;
							break;
				case '8' : ideci1=ideci1*10 + 8;
							break;
				case '9' : ideci1=ideci1*10 + 9;
							break;
				case '0' : ideci1=ideci1*10 + 0;
							break;
			}
		}
		
		length=strlen(deci2);
		for(i=0;i<length;i++)
		{
			switch(deci2[i])
			{
				case '1' : ideci2=ideci2*10 + 1;
							break;
				case '2' : ideci2=ideci2*10 + 2;
							break;
				case '3' : ideci2=ideci2*10 + 3;
							break;
				case '4' : ideci2=ideci2*10 + 4;
							break;
				case '5' : ideci2=ideci2*10 + 5;
							break;
				case '6' : ideci2=ideci2*10 + 6;
							break;
				case '7' : ideci2=ideci2*10 + 7;
							break;
				case '8' : ideci2=ideci2*10 + 8;
							break;
				case '9' : ideci2=ideci2*10 + 9;
							break;
				case '0' : ideci2=ideci2*10 + 0;
							break;
			}
		}
		
		res=ideci1+ideci2;
		printf("Addition is :: %d\n",res);
	}
}

void hexAdd()//---------------------------------hex addition-------------------------------
{
	unsigned char check1,check2;
	char hex1[20],hex2[20],newHex[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		hex1[i-6]=mop[i];
	}
	hex1[i-6]='\0';
	check1=checkhexMop(hex1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		hex2[i-j]=mop[i];
	}
	hex2[i-j]='\0';
	check2=checkhexMop(hex2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Hexa-Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{		
		length=strlen(hex1);
		
		for(i=1;i<=length;i++)
		{
			switch(hex1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci1=deci1 + num*pow(16,length-i);
		}
		
		length=strlen(hex2);
		
		for(i=1;i<=length;i++)
		{
			switch(hex2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci2=deci2 + num*pow(16,length-i);
		}
		
		res=deci1+deci2;
		
		for(i=0;res!=0;i++)
		{
			j=res%16;
			switch(j)
			{
				case 0:newHex[i]='0';
					break;
				case 1:newHex[i]='1';
					break;
				case 2:newHex[i]='2';
					break;
				case 3:newHex[i]='3';
					break;
				case 4:newHex[i]='4';
					break;
				case 5:newHex[i]='5';
					break;
				case 6:newHex[i]='6';
					break;
				case 7:newHex[i]='7';
					break;
				case 8:newHex[i]='8';
					break;
				case 9:newHex[i]='9';
					break;
				case 10:newHex[i]='A';
					break;
				case 11:newHex[i]='B';
					break;
				case 12:newHex[i]='C';
					break;
				case 13:newHex[j]='D';
					break;
				case 14:newHex[i]='E';
					break;
				case 15:newHex[i]='F';
					break;
			}
			res=res/16;
		}
		newHex[i]='\0';
		
		strrev(newHex);
		printf("Addition is :: ");
		puts(newHex);
	}
}

void octAdd()//-------------------------------------octal addition---------------------------
{
	unsigned char check1,check2;
	char oct1[20],oct2[20],newOct[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		oct1[i-6]=mop[i];
	}
	oct1[i-6]='\0';
	check1=checkOctMop(oct1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		oct2[i-j]=mop[i];
	}
	oct2[i-j]='\0';
	check2=checkOctMop(oct2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid octal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(oct1);
	
		for(i=1;i<=length;i++)
		{
			switch(oct1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci1=deci1 + num*pow(8,length-i);
		}
		
		length=strlen(oct2);
	
		for(i=1;i<=length;i++)
		{
			switch(oct2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci2=deci2 + num*pow(8,length-i);
		}
		
		res=deci1+deci2;
		
		for(i=0;res!=0;i++)
		{
			j=res%8;
			switch(j)
			{
				case 0:newOct[i]='0';
					break;
				case 1:newOct[i]='1';
					break;
				case 2:newOct[i]='2';
					break;
				case 3:newOct[i]='3';
					break;
				case 4:newOct[i]='4';
					break;
				case 5:newOct[i]='5';
					break;
				case 6:newOct[i]='6';
					break;
				case 7:newOct[i]='7';
					break;
			}
			res=res/8;
		}
		newOct[i]='\0';
		
		strrev(newOct);
		printf("Addition is :: ");
		puts(newOct);
	}
}

unsigned char checkBinMop(char bincheck[])//------------------------------check binary number--------------------------
{
	unsigned char feedback=1;
	ptr=bincheck;
	
	if(*ptr=='\0')
	{
		feedback=4;
	}
	
	while(*ptr!='\0')
	{
		if(*ptr=='1'||*ptr=='0')
		{
			ptr++;
		}
		else if(*ptr=='.')
		{
			feedback=2;
			break;
		}
		else if(bincheck[0]=='-')
		{
			feedback=3;
			break;
		}
		else
		{
			feedback=0;
			break;
		}
	}
	return feedback;
}

unsigned char checkDeciMop(char bincheck[])//------------------------check decimal number------------------
{
	unsigned char feedback=1;
	ptr=bincheck;
	
	if(*ptr=='\0')
	{
		feedback=4;
	}
	
	while(*ptr!='\0')
	{
		if(*ptr>='0' && *ptr<='9')
		{
			ptr++;
		}
		else if(*ptr=='.')
		{
			feedback=2;
			break;
		}
		else if(bincheck[0]=='-')
		{
			feedback=3;
			break;
		}
		else
		{
			feedback=0;
			break;
		}
	}
	return feedback;
}

unsigned char checkhexMop(char bincheck[])//-------------------------------check hex number------------------
{
	unsigned char feedback=1;
	ptr=bincheck;
	
	if(*ptr=='\0')
	{
		feedback=4;
	}
		
	while(*ptr!='\0')
	{
		if(*ptr>47 && *ptr<58 || *ptr>64 && *ptr<71)
		{
			ptr++;
		}
		else if(bincheck[0]=='-')
		{
			feedback=3;
			break;
		}
		else if(*ptr=='.')
		{
			feedback=2;
			break;
		}
		else
		{
			feedback=0;
			break;
		}
	}
	return feedback;
}

unsigned char checkOctMop(char bincheck[])//-------------------------------check octal number------------------
{
	unsigned char feedback=1;
	ptr=bincheck;
	
	if(*ptr=='\0')
	{
		feedback=4;
	}
		
	while(*ptr!='\0')
	{
		if(*ptr>47 && *ptr<56)
		{
			ptr++;
		}
		else if(bincheck[0]=='-')
		{
			feedback=3;
			break;
		}
		else if(*ptr=='.')
		{
			feedback=2;
			break;
		}
		else
		{
			feedback=0;
			break;
		}
	}
	return feedback;
}

void binSub()//---------------------binary subtraction--------------------
{
	unsigned char check1,check2;
	int deci1=0,deci2=0,res=0,i,j;
	char bin1[10],bin2[10],newBin[20];
	printf("\n>>> mathOperation > ");
	for(i=6;mop[i]!=' ';i++)
	{
		bin1[i-6]=mop[i];
	}
	bin1[i-6]='\0';
	check1=checkBinMop(bin1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		bin2[i-j]=mop[i];
	}
	bin2[i-j]='\0';
	check2=checkBinMop(bin2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid binary number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{	
		length=strlen(bin1);
		for(i=1;i<=length;i++)
		{
			if(bin1[length-i]=='1')
			{
				deci1=deci1+pow(2,i-1);
			}		
		}
		
		length=strlen(bin2);
		for(i=1;i<=length;i++)
		{
			if(bin2[length-i]=='1')
			{
				deci2=deci2+pow(2,i-1);
			}		
		}
		
		if(deci1<deci2)
		{
			printf("Please keep the 1st number is greater than the 2nd number\n");
		}
		else
		{
			res=deci1-deci2;
		
			for(i=0;res!=0;i++)
			{
				if(res%2==1)
				{
					newBin[i]='1';
				}
				else
				{
					newBin[i]='0';
				}
				res=res/2;
			}
			newBin[i]='\0';
			
			strrev(newBin);
			printf("Subtraction is :: ");
			puts(newBin);
		}
	}
}

void hexSub()//---------------------hex subtraction---------------------
{
	unsigned char check1,check2;
	char hex1[20],hex2[20],newHex[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		hex1[i-6]=mop[i];
	}
	hex1[i-6]='\0';
	check1=checkhexMop(hex1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		hex2[i-j]=mop[i];
	}
	hex2[i-j]='\0';
	check2=checkhexMop(hex2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Hexa-Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{		
		length=strlen(hex1);
		
		for(i=1;i<=length;i++)
		{
			switch(hex1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci1=deci1 + num*pow(16,length-i);
		}
		
		length=strlen(hex2);
		
		for(i=1;i<=length;i++)
		{
			switch(hex2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci2=deci2 + num*pow(16,length-i);
		}
		
		if(deci1<deci2)
		{
			printf("Please keep the 1st number is greater than the 2nd number\n");
		}
		else
		{
			res=deci1-deci2;
			
			for(i=0;res!=0;i++)
			{
				j=res%16;
				switch(j)
				{
					case 0:newHex[i]='0';
						break;
					case 1:newHex[i]='1';
						break;
					case 2:newHex[i]='2';
						break;
					case 3:newHex[i]='3';
						break;
					case 4:newHex[i]='4';
						break;
					case 5:newHex[i]='5';
						break;
					case 6:newHex[i]='6';
						break;
					case 7:newHex[i]='7';
						break;
					case 8:newHex[i]='8';
						break;
					case 9:newHex[i]='9';
						break;
					case 10:newHex[i]='A';
						break;
					case 11:newHex[i]='B';
						break;
					case 12:newHex[i]='C';
						break;
					case 13:newHex[j]='D';
						break;
					case 14:newHex[i]='E';
						break;
					case 15:newHex[i]='F';
						break;
				}
				res=res/16;
			}
			newHex[i]='\0';
			
			strrev(newHex);
			printf("Subtraction is :: ");
			puts(newHex);
		}
	}
}

void deciSub()//------------------------decimal subtraction-----------------
{
	unsigned char check1,check2;
	char deci1[20],deci2[20];
	int length,i,j,ideci1=0,ideci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		deci1[i-6]=mop[i];
	}
	deci1[i-6]='\0';
	check1=checkDeciMop(deci1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		deci2[i-j]=mop[i];
	}
	deci2[i-j]='\0';
	check2=checkDeciMop(deci2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(deci1);
		for(i=0;i<length;i++)
		{
			switch(deci1[i])
			{
				case '1' : ideci1=ideci1*10 + 1;
							break;
				case '2' : ideci1=ideci1*10 + 2;
							break;
				case '3' : ideci1=ideci1*10 + 3;
							break;
				case '4' : ideci1=ideci1*10 + 4;
							break;
				case '5' : ideci1=ideci1*10 + 5;
							break;
				case '6' : ideci1=ideci1*10 + 6;
							break;
				case '7' : ideci1=ideci1*10 + 7;
							break;
				case '8' : ideci1=ideci1*10 + 8;
							break;
				case '9' : ideci1=ideci1*10 + 9;
							break;
				case '0' : ideci1=ideci1*10 + 0;
							break;
			}
		}
		
		length=strlen(deci2);
		for(i=0;i<length;i++)
		{
			switch(deci2[i])
			{
				case '1' : ideci2=ideci2*10 + 1;
							break;
				case '2' : ideci2=ideci2*10 + 2;
							break;
				case '3' : ideci2=ideci2*10 + 3;
							break;
				case '4' : ideci2=ideci2*10 + 4;
							break;
				case '5' : ideci2=ideci2*10 + 5;
							break;
				case '6' : ideci2=ideci2*10 + 6;
							break;
				case '7' : ideci2=ideci2*10 + 7;
							break;
				case '8' : ideci2=ideci2*10 + 8;
							break;
				case '9' : ideci2=ideci2*10 + 9;
							break;
				case '0' : ideci2=ideci2*10 + 0;
							break;
			}
		}
		
		if(ideci1<ideci2)
		{
			printf("Please keep the 1st number is greater than the 2nd number\n");
		}
		else
		{
			res=ideci1-ideci2;
			printf("Subtraction is :: %d\n",res);
		}
	}
}

void octSub()//---------------------octal subtractiion---------------------
{
	unsigned char check1,check2;
	char oct1[20],oct2[20],newOct[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		oct1[i-6]=mop[i];
	}
	oct1[i-6]='\0';
	check1=checkOctMop(oct1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		oct2[i-j]=mop[i];
	}
	oct2[i-j]='\0';
	check2=checkOctMop(oct2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid octal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(oct1);
	
		for(i=1;i<=length;i++)
		{
			switch(oct1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci1=deci1 + num*pow(8,length-i);
		}
		
		length=strlen(oct2);
	
		for(i=1;i<=length;i++)
		{
			switch(oct2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci2=deci2 + num*pow(8,length-i);
		}
		
		if(deci1<deci2)
		{
			printf("Please keep the 1st number is greater than the 2nd number\n");
		}
		else
		{
			res=deci1-deci2;
			
			for(i=0;res!=0;i++)
			{
				j=res%8;
				switch(j)
				{
					case 0:newOct[i]='0';
						break;
					case 1:newOct[i]='1';
						break;
					case 2:newOct[i]='2';
						break;
					case 3:newOct[i]='3';
						break;
					case 4:newOct[i]='4';
						break;
					case 5:newOct[i]='5';
						break;
					case 6:newOct[i]='6';
						break;
					case 7:newOct[i]='7';
						break;
				}
				res=res/8;
			}
			newOct[i]='\0';
			
			strrev(newOct);
			printf("Subtraction is :: ");
			puts(newOct);
		}
	}
}
void binMul()//----------------------------binary multiplication-------------------------------
{
	unsigned char check1,check2;
	int deci1=0,deci2=0,res=0,i,j;
	char bin1[10],bin2[10],newBin[20];
	printf("\n>>> mathOperation > ");
	for(i=6;mop[i]!=' ';i++)
	{
		bin1[i-6]=mop[i];
	}
	bin1[i-6]='\0';
	check1=checkBinMop(bin1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		bin2[i-j]=mop[i];
	}
	bin2[i-j]='\0';
	check2=checkBinMop(bin2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid binary number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{	
		length=strlen(bin1);
		for(i=1;i<=length;i++)
		{
			if(bin1[length-i]=='1')
			{
				deci1=deci1+pow(2,i-1);
			}		
		}
		
		length=strlen(bin2);
		for(i=1;i<=length;i++)
		{
			if(bin2[length-i]=='1')
			{
				deci2=deci2+pow(2,i-1);
			}		
		}
		
		res=deci1*deci2;
		
		for(i=0;res!=0;i++)
		{
			if(res%2==1)
			{
				newBin[i]='1';
			}
			else
			{
				newBin[i]='0';
			}
			res=res/2;
		}
		newBin[i]='\0';
		
		strrev(newBin);
		printf("Multiplication is :: ");
		puts(newBin);
	}
}
void deciMul()//----------------------------decimal multiplication-----------------------------
{
	unsigned char check1,check2;
	char deci1[20],deci2[20];
	int length,i,j,ideci1=0,ideci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		deci1[i-6]=mop[i];
	}
	deci1[i-6]='\0';
	check1=checkDeciMop(deci1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		deci2[i-j]=mop[i];
	}
	deci2[i-j]='\0';
	check2=checkDeciMop(deci2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(deci1);
		for(i=0;i<length;i++)
		{
			switch(deci1[i])
			{
				case '1' : ideci1=ideci1*10 + 1;
							break;
				case '2' : ideci1=ideci1*10 + 2;
							break;
				case '3' : ideci1=ideci1*10 + 3;
							break;
				case '4' : ideci1=ideci1*10 + 4;
							break;
				case '5' : ideci1=ideci1*10 + 5;
							break;
				case '6' : ideci1=ideci1*10 + 6;
							break;
				case '7' : ideci1=ideci1*10 + 7;
							break;
				case '8' : ideci1=ideci1*10 + 8;
							break;
				case '9' : ideci1=ideci1*10 + 9;
							break;
				case '0' : ideci1=ideci1*10 + 0;
							break;
			}
		}
		
		length=strlen(deci2);
		for(i=0;i<length;i++)
		{
			switch(deci2[i])
			{
				case '1' : ideci2=ideci2*10 + 1;
							break;
				case '2' : ideci2=ideci2*10 + 2;
							break;
				case '3' : ideci2=ideci2*10 + 3;
							break;
				case '4' : ideci2=ideci2*10 + 4;
							break;
				case '5' : ideci2=ideci2*10 + 5;
							break;
				case '6' : ideci2=ideci2*10 + 6;
							break;
				case '7' : ideci2=ideci2*10 + 7;
							break;
				case '8' : ideci2=ideci2*10 + 8;
							break;
				case '9' : ideci2=ideci2*10 + 9;
							break;
				case '0' : ideci2=ideci2*10 + 0;
							break;
			}
		}
		
		res=ideci1*ideci2;
		printf("Multiplication is :: %d\n",res);
	}
}
void hexMul()//-----------------------------hex multiplication-----------------------------------
{
	unsigned char check1,check2;
	char hex1[20],hex2[20],newHex[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		hex1[i-6]=mop[i];
	}
	hex1[i-6]='\0';
	check1=checkhexMop(hex1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		hex2[i-j]=mop[i];
	}
	hex2[i-j]='\0';
	check2=checkhexMop(hex2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Hexa-Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{		
		length=strlen(hex1);
		
		for(i=1;i<=length;i++)
		{
			switch(hex1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci1=deci1 + num*pow(16,length-i);
		}
		
		length=strlen(hex2);
		
		for(i=1;i<=length;i++)
		{
			switch(hex2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci2=deci2 + num*pow(16,length-i);
		}
		
		res=deci1*deci2;
		
		for(i=0;res!=0;i++)
		{
			j=res%16;
			switch(j)
			{
				case 0:newHex[i]='0';
					break;
				case 1:newHex[i]='1';
					break;
				case 2:newHex[i]='2';
					break;
				case 3:newHex[i]='3';
					break;
				case 4:newHex[i]='4';
					break;
				case 5:newHex[i]='5';
					break;
				case 6:newHex[i]='6';
					break;
				case 7:newHex[i]='7';
					break;
				case 8:newHex[i]='8';
					break;
				case 9:newHex[i]='9';
					break;
				case 10:newHex[i]='A';
					break;
				case 11:newHex[i]='B';
					break;
				case 12:newHex[i]='C';
					break;
				case 13:newHex[j]='D';
					break;
				case 14:newHex[i]='E';
					break;
				case 15:newHex[i]='F';
					break;
			}
			res=res/16;
		}
		newHex[i]='\0';
		
		strrev(newHex);
		printf("Multiplication is :: ");
		puts(newHex);
	}
}
void octMul()//---------------------------------octal multiplication----------------------------
{
	unsigned char check1,check2;
	char oct1[20],oct2[20],newOct[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		oct1[i-6]=mop[i];
	}
	oct1[i-6]='\0';
	check1=checkOctMop(oct1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		oct2[i-j]=mop[i];
	}
	oct2[i-j]='\0';
	check2=checkOctMop(oct2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid octal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(oct1);
	
		for(i=1;i<=length;i++)
		{
			switch(oct1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci1=deci1 + num*pow(8,length-i);
		}
		
		length=strlen(oct2);
	
		for(i=1;i<=length;i++)
		{
			switch(oct2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci2=deci2 + num*pow(8,length-i);
		}
		
		res=deci1*deci2;
		
		for(i=0;res!=0;i++)
		{
			j=res%8;
			switch(j)
			{
				case 0:newOct[i]='0';
					break;
				case 1:newOct[i]='1';
					break;
				case 2:newOct[i]='2';
					break;
				case 3:newOct[i]='3';
					break;
				case 4:newOct[i]='4';
					break;
				case 5:newOct[i]='5';
					break;
				case 6:newOct[i]='6';
					break;
				case 7:newOct[i]='7';
					break;
			}
			res=res/8;
		}
		newOct[i]='\0';
		
		strrev(newOct);
		printf("Multiplication is :: ");
		puts(newOct);
	}
}

void binDiv()//---------------------------------binary division------------------------------
{
	unsigned char check1,check2;
	int deci1=0,deci2=0,res=0,i,j;
	char bin1[10],bin2[10],newBin[20];
	printf("\n>>> mathOperation > ");
	for(i=6;mop[i]!=' ';i++)
	{
		bin1[i-6]=mop[i];
	}
	bin1[i-6]='\0';
	check1=checkBinMop(bin1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		bin2[i-j]=mop[i];
	}
	bin2[i-j]='\0';
	check2=checkBinMop(bin2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid binary number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{	
		length=strlen(bin1);
		for(i=1;i<=length;i++)
		{
			if(bin1[length-i]=='1')
			{
				deci1=deci1+pow(2,i-1);
			}		
		}
		
		length=strlen(bin2);
		for(i=1;i<=length;i++)
		{
			if(bin2[length-i]=='1')
			{
				deci2=deci2+pow(2,i-1);
			}		
		}
		
		res=deci1/deci2;
		
		for(i=0;res!=0;i++)
		{
			if(res%2==1)
			{
				newBin[i]='1';
			}
			else
			{
				newBin[i]='0';
			}
			res=res/2;
		}
		newBin[i]='\0';
		
		strrev(newBin);
		printf("Division is :: ");
		printf("%s",newBin);
		
		res=deci1%deci2;
		if(res!=0)
		{
			for(i=0;res!=0;i++)
			{
				if(res%2==1)
				{
					newBin[i]='1';
				}
				else
				{
					newBin[i]='0';
				}
				res=res/2;
			}
			newBin[i]='\0';
			
			strrev(newBin);
			printf("\tRemainder is :: ");
			puts(newBin);
		}
		else
		{
			printf("\n");
		}
	}	
}
void deciDiv()//-------------------------------decimal division-----------------------------
{
	unsigned char check1,check2;
	char deci1[20],deci2[20];
	int length,i,j,ideci1=0,ideci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		deci1[i-6]=mop[i];
	}
	deci1[i-6]='\0';
	check1=checkDeciMop(deci1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		deci2[i-j]=mop[i];
	}
	deci2[i-j]='\0';
	check2=checkDeciMop(deci2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(deci1);
		for(i=0;i<length;i++)
		{
			switch(deci1[i])
			{
				case '1' : ideci1=ideci1*10 + 1;
							break;
				case '2' : ideci1=ideci1*10 + 2;
							break;
				case '3' : ideci1=ideci1*10 + 3;
							break;
				case '4' : ideci1=ideci1*10 + 4;
							break;
				case '5' : ideci1=ideci1*10 + 5;
							break;
				case '6' : ideci1=ideci1*10 + 6;
							break;
				case '7' : ideci1=ideci1*10 + 7;
							break;
				case '8' : ideci1=ideci1*10 + 8;
							break;
				case '9' : ideci1=ideci1*10 + 9;
							break;
				case '0' : ideci1=ideci1*10 + 0;
							break;
			}
		}
		
		length=strlen(deci2);
		for(i=0;i<length;i++)
		{
			switch(deci2[i])
			{
				case '1' : ideci2=ideci2*10 + 1;
							break;
				case '2' : ideci2=ideci2*10 + 2;
							break;
				case '3' : ideci2=ideci2*10 + 3;
							break;
				case '4' : ideci2=ideci2*10 + 4;
							break;
				case '5' : ideci2=ideci2*10 + 5;
							break;
				case '6' : ideci2=ideci2*10 + 6;
							break;
				case '7' : ideci2=ideci2*10 + 7;
							break;
				case '8' : ideci2=ideci2*10 + 8;
							break;
				case '9' : ideci2=ideci2*10 + 9;
							break;
				case '0' : ideci2=ideci2*10 + 0;
							break;
			}
		}
		
		res=ideci1/ideci2;
		printf("Division is :: %d\t",res);
		res=ideci1%ideci2;
		if(res!=0)
		{
			printf("Remainder is :: %d\n",res);
		}
		else
		{
			printf("\n");
		}
	}	
}
void hexDiv()//--------------------------------hex division----------------------------------
{
	unsigned char check1,check2;
	char hex1[20],hex2[20],newHex[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		hex1[i-6]=mop[i];
	}
	hex1[i-6]='\0';
	check1=checkhexMop(hex1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		hex2[i-j]=mop[i];
	}
	hex2[i-j]='\0';
	check2=checkhexMop(hex2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid Hexa-Decimal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{		
		length=strlen(hex1);
		
		for(i=1;i<=length;i++)
		{
			switch(hex1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci1=deci1 + num*pow(16,length-i);
		}
		
		length=strlen(hex2);
		
		for(i=1;i<=length;i++)
		{
			switch(hex2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
				case '8':num=8;
					break;
				case '9':num=9;
					break;
				case 'A':num=10;
					break;
				case 'B':num=11;
					break;
				case 'C':num=12;
					break;
				case 'D':num=13;
					break;
				case 'E':num=14;
					break;
				case 'F':num=15;
					break;
			}
			deci2=deci2 + num*pow(16,length-i);
		}
		
		res=deci1/deci2;
		
		for(i=0;res!=0;i++)
		{
			j=res%16;
			switch(j)
			{
				case 0:newHex[i]='0';
					break;
				case 1:newHex[i]='1';
					break;
				case 2:newHex[i]='2';
					break;
				case 3:newHex[i]='3';
					break;
				case 4:newHex[i]='4';
					break;
				case 5:newHex[i]='5';
					break;
				case 6:newHex[i]='6';
					break;
				case 7:newHex[i]='7';
					break;
				case 8:newHex[i]='8';
					break;
				case 9:newHex[i]='9';
					break;
				case 10:newHex[i]='A';
					break;
				case 11:newHex[i]='B';
					break;
				case 12:newHex[i]='C';
					break;
				case 13:newHex[j]='D';
					break;
				case 14:newHex[i]='E';
					break;
				case 15:newHex[i]='F';
					break;
			}
			res=res/16;
		}
		newHex[i]='\0';
		
		strrev(newHex);
		printf("Division is :: ");
		printf("%s\t",newHex);
		
		res=deci1%deci2;
		if(res!=0)
		{
			for(i=0;res!=0;i++)
			{
				j=res%16;
				switch(j)
				{
					case 0:newHex[i]='0';
						break;
					case 1:newHex[i]='1';
						break;
					case 2:newHex[i]='2';
						break;
					case 3:newHex[i]='3';
						break;
					case 4:newHex[i]='4';
						break;
					case 5:newHex[i]='5';
						break;
					case 6:newHex[i]='6';
						break;
					case 7:newHex[i]='7';
						break;
					case 8:newHex[i]='8';
						break;
					case 9:newHex[i]='9';
						break;
					case 10:newHex[i]='A';
						break;
					case 11:newHex[i]='B';
						break;
					case 12:newHex[i]='C';
						break;
					case 13:newHex[j]='D';
						break;
					case 14:newHex[i]='E';
						break;
					case 15:newHex[i]='F';
						break;
				}
				res=res/16;
			}
			newHex[i]='\0';
			
			strrev(newHex);
			printf("Remainder is :: ");
			printf("%s\n",newHex);
		}
		else
		{
			printf("\n");
		}
	}
}
void octDiv()//--------------------------------octal division----------------------------------
{
	unsigned char check1,check2;
	char oct1[20],oct2[20],newOct[25];
	int length,i,j,num;
	long int deci1=0,deci2=0,res;

	printf("\n>>> mathOperation > ");
	
	for(i=6;mop[i]!=' ';i++)
	{
		oct1[i-6]=mop[i];
	}
	oct1[i-6]='\0';
	check1=checkOctMop(oct1);
	
	for(j=i+1;mop[i]!='\0';i++)
	{
		oct2[i-j]=mop[i];
	}
	oct2[i-j]='\0';
	check2=checkOctMop(oct2);
	
	if(check1==0 || check2==0)
	{
		printf("1st number or 2nd number is not a valid octal number\n");
	}
	else if(check1==2 || check2==2)
	{
		printf("this application does not support floating value\n");
	}
	else if(check1==3 || check2==3)
	{
		printf("this application does not support any value which is less than zero\n");
	}
	else if(check1==4 || check2==4)
	{
		printf("please check the syntax\n");
	}
	else
	{
		length=strlen(oct1);
	
		for(i=1;i<=length;i++)
		{
			switch(oct1[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci1=deci1 + num*pow(8,length-i);
		}
		
		length=strlen(oct2);
	
		for(i=1;i<=length;i++)
		{
			switch(oct2[i-1])
			{
				case '0':num=0;
					break;
				case '1':num=1;
					break;
				case '2':num=2;
					break;
				case '3':num=3;
					break;
				case '4':num=4;
					break;
				case '5':num=5;
					break;
				case '6':num=6;
					break;
				case '7':num=7;
					break;
			}
			deci2=deci2 + num*pow(8,length-i);
		}
		
		res=deci1/deci2;
		
		for(i=0;res!=0;i++)
		{
			j=res%8;
			switch(j)
			{
				case 0:newOct[i]='0';
					break;
				case 1:newOct[i]='1';
					break;
				case 2:newOct[i]='2';
					break;
				case 3:newOct[i]='3';
					break;
				case 4:newOct[i]='4';
					break;
				case 5:newOct[i]='5';
					break;
				case 6:newOct[i]='6';
					break;
				case 7:newOct[i]='7';
					break;
			}
			res=res/8;
		}
		newOct[i]='\0';
		
		strrev(newOct);
		printf("Division is :: ");
		printf("%s",newOct);
		
		res=deci1%deci2;
		if(res!=0)
		{
			for(i=0;res!=0;i++)
			{
				j=res%8;
				switch(j)
				{
					case 0:newOct[i]='0';
						break;
					case 1:newOct[i]='1';
						break;
					case 2:newOct[i]='2';
						break;
					case 3:newOct[i]='3';
						break;
					case 4:newOct[i]='4';
						break;
					case 5:newOct[i]='5';
						break;
					case 6:newOct[i]='6';
						break;
					case 7:newOct[i]='7';
						break;
				}
				res=res/8;
			}
			newOct[i]='\0';
			
			strrev(newOct);
			printf("\tRemainder is :: ");
			printf("%s\n",newOct);
		}
		else
		{
			printf("\n");
		}
	}	
}
