/*A Simple Guessing A Word Game Written in C Language*/




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct hangman
{
    int m;
    char a[1000];
}HANG;
void hint();
void show(int);
void loss(int);
int main()
{
    HANG.m=5;
  int i=0,j=0,k=0,t=0,l=0,p=0,z=0,y=0;
  char str[50],s,d,g[50],e[50],dstr[50];
  for(i=0;i<50;i++)
  {
    g[i]=' ';
  }
  system("cls");
    printf("\n\n\n                      ***** WELCOME TO THE HANGMAN GAME*****     ");
    printf("\n\n                       **YOU HAVE ONLY 5 CHANCES TO GUESS**");
    printf("\n\n                        *HELP THE MAN TO GET OUT OF IT !!*");
  printf("\n\n                     ENTER A WORD: ");
  scanf("%s",str);
  strcpy(dstr,str);
  d=str[0];
  l=strlen(str);
  char b[l];
  hint();
  while(HANG.m>=0)
  {
    t++;
    finish:
    system("cls");
    switch(HANG.m)
    {
        case 0:
            system("cls");
            printf("\n\n\n                                    ||===== ");
            printf("\n                                    ||    | ");
            printf("\n                                    ||   %cO/",'\\');
            printf("\n                                    ||    | ");
            printf("\n                                    ||   / %c",'\\');
            printf("\n                                    ||      ");
            printf("\n                                   ----");
            printf("\n                                   ----");
            break;
        case 1:
            system("cls");
            printf("\n\n\n                                    ||===== ");
            printf("\n                                    ||    | ");
            printf("\n                                    ||   %cO/",'\\');
            printf("\n                                    ||    | ");
            printf("\n                                    ||     %c",'\\');
            printf("\n                                    ||      ");
            printf("\n                                   ----");
            printf("\n                                   ----");
            break;
        case 2:
            system("cls");
            printf("\n\n\n                                    ||===== ");
            printf("\n                                    ||    | ");
            printf("\n                                    ||   %cO/",'\\');
            printf("\n                                    ||    | ");
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                   ----");
            printf("\n                                   ----");
            break;
        case 3:
            system("cls");
            printf("\n\n\n                                    ||===== ");
            printf("\n                                    ||    | ");
            printf("\n                                    ||   %cO/",'\\');
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                   ----");
            printf("\n                                   ----");
            break;
        case 4:
            system("cls");
            printf("\n\n\n                                    ||===== ");
            printf("\n                                    ||    | ");
            printf("\n                                    ||   %cO ",'\\');
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                   ----");
            printf("\n                                   ----");
            break;
        case 5:
            system("cls");
            printf("\n\n\n                                    ||===== ");
            printf("\n                                    ||    | ");
            printf("\n                                    ||    O ");
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                    ||      ");
            printf("\n                                   ----");
            printf("\n                                   ----");
            break;
    }
    printf("\n\n\t                      ************************\n\n\t");
    printf("                      ******* HANG_MAN *******\n");
    printf("\n\t                      ************************\t\t\t");
    printf("\n\t                      ........................\n\n\t\t\t\t    ");
    if(p==0)
    {
      for(j=0;j<l;j++)
        {
          if(str[j]==' ')
          {
            b[j]=' ';
          }
          else
          {
            b[j]='_';
          }
        }
    }
    p++;
    for(j=0;j<l;j++)
      {
        printf("%c ",b[j]);
      }
    printf("\n");
    printf("\n\t                      ........................\n\t\t\t  ");
    printf("\n\t                      ************************\t\t\t\n\n\n");
    printf("No of Characters in the word : %d \t\t",l);
    printf("No of Chances Left : %d \n",HANG.m);
    printf("You have already entered:");
    for(i=0;i<l;i++)
    {
      printf("%c ",g[i]);
    }
    printf("\nEnter a character: ");
    scanf("%s",&s);
    g[t]=s;
    if(y!=1)
    {
    if(d==s)
      {
        b[0]=s;
      }
    for(i=1;i<l;i++)
    {
      if(str[i]==s)
      {
        b[i]=s;
      }
    }
    for(i=0;i<l;i++)
    {
      if(b[i]==s)
      {
        k++;
      }
    }
    if(k!=0)
    {
      k=0;
    }
    else
    {
      HANG.m--;
      getchar();
      show(HANG.m);
      getchar();
      k=0;
    }
    z=0;
   for(i=0;i<l;i++)
   {
      if(b[i]=='_')
      {
        z++;
      }
  }
  }
  if(z==0)
  {
    printf("\n          WOHOOOOOOO!!! YOU WON CORRECT WORD WAS : - %s",dstr);
    printf("\n                      You Won !!\n\n\n\n\n\n");
    y=1;
    goto label;
    goto finish;
    break;
  }
  loss(HANG.m);
}
label:return 0;
}
void show(int trial)
{
    switch(trial)
    {
        case 0:
            system("cls");
            printf("\n                        ||===== ");
            printf("\n                        ||    | ");
            printf("\n                        ||   %cO/",'\\');
            printf("\n                        ||    | ");
            printf("\n                        ||   / %c",'\\');
            printf("\n                        ||      ");
            printf("\n                       ----");
            printf("\n                       ----");
            printf("\n         You stupid man it's not your game!!!!!!!!");
            printf("\n\n                   HIT ENTER");
            break;
        case 1:
            system("cls");
            printf("\n                        ||===== ");
            printf("\n                        ||    | ");
            printf("\n                        ||   %cO/",'\\');
            printf("\n                        ||    | ");
            printf("\n                        ||     %c",'\\');
            printf("\n                        ||      ");
            printf("\n                       ----");
            printf("\n                       ----");
            printf("\n             Are you a duffer???????????????");
            printf("\n\n                     HIT ENTER");
            break;
        case 2:
            system("cls");
            printf("\n                        ||===== ");
            printf("\n                        ||    | ");
            printf("\n                        ||   %cO/",'\\');
            printf("\n                        ||    | ");
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                       ----");
            printf("\n                       ----");
            printf("\n            Now only 2 chances are there Help me !!!!!!!!!!");
            printf("\n\n                    HIT ENTER");
            break;
        case 3:
            system("cls");
            printf("\n                        ||===== ");
            printf("\n                        ||    | ");
            printf("\n                        ||   %cO/",'\\');
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                       ----");
            printf("\n                       ----");
            printf("\n                 Help me !!!!!!!!!!!!!");
            printf("\n\n                  HIT ENTER");
            break;
        case 4:
            system("cls");
            printf("\n                        ||===== ");
            printf("\n                        ||    | ");
            printf("\n                        ||   %cO ",'\\');
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                       ----");
            printf("\n                       ----");
            printf("\n            Now I am afraid but I have faith on you");
            printf("\n\n                    HIT ENTER");
            break;
        case 5:
            system("cls");
            printf("\n                        ||===== ");
            printf("\n                        ||    | ");
            printf("\n                        ||    O ");
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                        ||      ");
            printf("\n                       ----");
            printf("\n                       ----");
            printf("\n             Ok Ok it happens do it again");
            printf("\n\n                  HIT ENTER");
            break;
    }
}
void hint()
{
    system("cls");
    printf("\n\n\n\n\n\n                ENTER A HINT FOR YOUR FRIEND AND PRESS ENTER");
    printf("\n\n            ENTER HERE : - ");
    getchar();
    gets(HANG.a);
    system("cls");
    printf("\n\n\n                    YOUR HINT IS : - %s",HANG.a);
    printf("\n\n                   PLEASE HIT ENTER AND START THE GAME.");
    getchar();
}
void loss(int m)
{
    if(m<=0)
    {
        printf("\n\n Sorry You Lost Better Luck Next Time !!\n\n\n\n\n\n\n\n\n");
        exit(0);
    }
}
