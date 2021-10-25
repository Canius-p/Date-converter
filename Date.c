/* Program to convert BS to AD */
#include<stdio.h>
#include<conio.h>
#include<windows.h>
/* Defining Structure */
struct  bs
{
 int year;
 int month;
 int date;
};

/* Function Prototype */
void gotoxy(int ,int );
void menu();
void bsconvert();
void adconvert();
//struct bs convert(struct bs y);
struct bs convert(struct bs y);


main()
{
 /* Declaring structure type variables */

 struct bs x, ad;
 gotoxy(25,8);
     printf("\t***********************************************\n");//showing welcome screen
         gotoxy(25,9);

    printf("\t\tWELCOME TO DATE CONVERTER PROGRAM\n");
        gotoxy(25,10);

    printf("\t***********************************************\n\n\n");
    gotoxy(44,15);
    printf("Press any key to continue.");
        gotoxy(52,16);
        printf("--->");
    getch();
        system("cls");
        menu();
    }
//user menu for choosing operation
void menu(){
	  int choice;
    system("cls");
    gotoxy(44,3);
    printf("<--:MENU:-->");
    gotoxy(25,5);
    printf("Enter appropriate number to perform following task.");
    gotoxy(44,7);
    printf("1 : Convert to BS.");
    gotoxy(44,8);
    printf("2 : Convert to AD.");
    gotoxy(44,9);
    printf("3 : Exit.");
     gotoxy(44,10);
    printf("Enter your choice.");
    gotoxy(48,11);
        printf("--->");
    scanf("%d",&choice);
    //using switch for choices
    switch(choice)
    {
    case 1:
       bsconvert();
        break;
            system("cls");


    case 2:
        adconvert();
        break;
         system("cls");

    case 3:
        exit(1);
        break;
       system("cls");
        
    default:
        gotoxy(10,17);
        printf("Invalid Choice.");
    }

}


 void adconvert(){
 	            system("cls");

 struct bs x, ad;

 /* Taking Input from User */
 gotoxy(44,2);
 printf("Give BS date in yyyy-mm-dd format:\n");
  gotoxy(44,3);
printf("===> ");

 scanf("%d-%d-%d",&x.year,&x.month,&x.date);

 /* Calling function convert to change date */
 ad = convert(x);

 /* Display Output */
   gotoxy(44,5);
 printf("Date in AD is : %d-%d-%d\n",ad.year,ad.month,ad.date);
 
 getch();
 
 menu();
}

struct bs convert( struct bs y)
{
 if(y.date > 17)
 {
  y.date -= 17;
 }
 else
 {
  y.date += 30;
  --y.month;
  y.date -= 17;
 }

 if(y.month > 8)
 {
  y.month -= 8;
 }
 else
 {
  y.month += 12;
  --y.year;
  y.month -= 8;
 }

 y.year -= 56;

 return(y);
}
 
void bsconvert(){
	            system("cls");
	             gotoxy(44,25);
	printf("---feature comming soon----");
		             gotoxy(44,26);

printf("	redirecting to menu...");
		            getch();

	menu();
	
}
void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
