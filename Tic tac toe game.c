#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
char a[10]={'1','2','3','4','5','6','7','8','9','\0'};
void check(char,char);
void gamename()
{
printf("\n\t\t\tTic Tac Toe Game\n");
}
void layout()
{
    printf("\n\t\t\t|----|----|----|\n");
    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t|  %c |  %c |  %c |     %c\n",a[0],a[1],a[2]);
    printf("\t\t\t|----|----|----|\n");
    printf("\t\t\t|    |    |    |\n");
     printf("\t\t\t|  %c |  %c |  %c |     %c\n",a[3],a[4],a[5]);
    printf("\t\t\t|----|----|----|\n");
     printf("\t\t\t|    |    |    |\n");
      printf("\t\t\t|  %c |  %c |  %c |     %c\n",a[6],a[7],a[8]);
    printf("\t\t\t|----|----|----|\n");
    printf("Symbol for Player 1:x\n");
    printf("Symbol for Player 2:o\n\n");
}
 void start()
 {
     int x;
     printf("Enter who will start the game, Player :");
     scanf("%d",&x);
 }
 void play()
 {
     char  j;
     char i;
     printf("Enter in which position you want to put your symbol: ");
     fflush(stdin);
     scanf("%c",&i);
     fflush(stdin);
     printf("And the symbol:");
     fflush(stdin);
    scanf("%c",&j);
     check(i,j);
 }
 void check(char c, char b)
 {
    int i;
     for(i=0;i<=8;i++)
     {
       if(a[i]==c)
     {
          a[i]=b;
     }
     }
 }
 int end()
 {
     if( (a[0]=='x'&&a[3]=='x'&&a[6]=='x') || (a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[4]=='x'&&a[8]=='x') )
        return(100);
     else if( (a[0]=='o'&&a[3]=='0'&&a[6]=='o') || (a[0]=='o'&&a[1]=='o'&&a[2]=='o') || (a[0]=='o'&&a[4]=='o'&&a[8]=='o'))
        return (200);
     else if( (a[1]=='x'&&a[4]=='x'&&a[7]=='x') )
       return (100);
     else if( (a[1]=='o'&&a[4]=='o'&&a[7]=='o'))
        return (200);
     else if( (a[2]=='x'&&a[5]=='x'&&a[8]=='x') || (a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
        return (100);
     else if( (a[2]=='o'&&a[5]=='o'&&a[8]=='o') || (a[2]=='o'&&a[4]=='o'&&a[6]=='o'))
        return (200);
     else if( (a[3]=='x'&&a[4]=='x'&&a[5]=='x'))
        return (100);
     else if( (a[3]=='o'&&a[4]=='o'&&a[5]=='o'))
        return (200);
     else if( (a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
        return (100);
     else if( (a[6]=='o'&&a[7]=='o'&&a[8]=='o'))
        return (200);
 }
int main()
{
    int k;
    gamename();
    layout();
    start();
    play();
    layout();

    label:
    play();
    layout();
    k=end();
    if(k==100)
        printf("Player 1 win\n");
    else if(k==200)
        printf("Player 2 win\n");
    else
      {
          if( (a[0]=='x'||a[0]=='o') && (a[1]=='x'||a[1]=='o') && (a[2]=='x'||a[2]=='o') && (a[3]=='x'||a[3]=='o') && (a[4]=='x'||a[4]=='o') && (a[5]=='x'||a[5]=='o') && (a[6]=='x'||a[6]=='o') && (a[7]=='x'||a[7]=='o') && (a[8]=='x'||a[8]=='o'))
            printf("Match draw\n");
          else
            goto label;

      }


    return 0;

}
