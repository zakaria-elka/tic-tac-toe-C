#include <stdio.h>
#include <stdlib.h>


void morpion(char t[3][3])
{ int i,j;

printf("   0     1    2\n");
for(i=0;i<3;i++)
{
      printf("%d ",i);
    for(j=0;j<3;j++)
   {

       printf("|___|");
   }
    printf("\n");}

printf("\n");
printf("player 1: X\n");
printf("player 2: O\n");
printf("\n");
printf("\n");

};


char startgame(char t[3][3])
{int i,j,c,ii,jj=0,d=0;




    for(c=1;c<=9;c++)
{if(d==0)

    {if(c%2!=0)
{printf("player 1 start\n");
printf ("choose case with code(01,12...)ligne first: ");
scanf("%d%d",&i,&j);



if(t[i][j]=='X' || t[i][j]=='O')
    {printf("\n\n");
      printf("player 1 mauvais choix /tour passer");}

else
{t[i][j]='X';}


printf("\n");
printf("\n");

}

if(c%2==0)
{printf("player 2 start\n");
printf ("choose case with code(01,12...)ligne first: ");
scanf("%d%d",&i,&j);


if(t[i][j]=='X' || t[i][j]=='O')
     {printf("\n");
      printf("player 2 mauvais choix /tour passer");}

else
{t[i][j]='O';}



printf("\n");
printf("\n");
  }

for(ii=0;ii<3;ii++)

   {
       if(t[ii][jj]=='X' &&  t[ii][jj+1]=='X' && t[ii][jj+2]=='X')
        {printf("player 1 win");
        printf("\n\n");
         d=1;}
    if(t[ii][jj]=='O' &&  t[ii][jj+1]=='O' && t[ii][jj+2]=='O')
         {printf("player 2 win");
         printf("\n\n");
          d=1;}
     if(t[jj][ii]=='O' &&  t[jj+1][ii]=='O' && t[jj+2][ii]=='O')
         {printf("player 2 win");
         printf("\n\n");
        d=1;}
    if(t[jj][ii]=='X' &&  t[jj+1][ii]=='X' && t[jj+2][ii]=='X')
         {printf("player 1 win");
         printf("\n\n");
          d=1;}
   }


    if(t[0][0]=='X' && t[1][1]=='X' && t[2][2]=='X')
        {printf("player 1 win");
        printf("\n\n");
          d=1;}
    if(t[0][0]=='O' && t[1][1]=='O' && t[2][2]=='O')
          {printf("player 2 win");
          printf("\n\n");
        d=1;}

ii=2;
    if(t[ii][jj]=='X' && t[ii-1][jj+1]=='X' && t[ii-2][jj+2]=='X')
          {printf("player 1 win");
          printf("\n\n");
            d=1;}
     if(t[ii][jj]=='O' && t[ii-1][jj+1]=='O' && t[ii-2][jj+2]=='O')
             {printf("player 2 win");
             printf("\n\n");
                d=1;}


tabaffichage(t);
printf("\n\n");
}
}
if(d==0)
{
    printf("game nul\n0");
}

};



void tabaffichage(char t[3][3])
{ int cpp,cp;

  printf("   0      1      2\n");
for(cpp=0;cpp<3;cpp++)
{
      printf("%d",cpp);
    for(cp=0;cp<3;cp++)
   {

       printf("|  %c   ", t[cpp][cp]);
   }
    printf("\n");}

printf("\n");
printf("\n");

};











int main()
{char t[3][3];
int cpp,cp;
for(cpp=0;cpp<3;cpp++)
{
    for(cp=0;cp<3;cp++)
   {
     t[cpp][cp]='  ';

   }}


morpion(t);

startgame(t);




    return 0;
}
