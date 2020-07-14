#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void help()
{
    system("cls");
    printf("\n .................................... C program KBC Game...........................................");
    printf("\n __________________________________________________________________________________________________");
    printf("\n\n                                   #   # ##### #     ###           ");
    printf("\n\n                                   #   # #     #     #  #          ");
    printf("\n\n                                   ##### ##### #     ###           ");
    printf("\n\n                                   #   # #     #     #             ");
    printf("\n\n                                   #   # ##### ##### #             ");
    printf("\n __________________________________________________________________________________________________");
    printf("\n\n => In this quiz game you will be asked total 10 questions each right answer give you price .");
    printf("\n => Final wining is ONE MILLION cash prize .\n");
    printf("\n => You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
    printf("\n    right option\n");
    printf("\n => You will be asked questions continuously if you keep giving the right answers.\n");
    printf("\n => No negative marking for wrong answers\n");
	printf("\n\n\t\t************************BEST OF LUCK**************************\n\n");


}

void about()
{
    system("cls");
    printf("\n .................................... C program KBC Game...........................................");
    printf("\n __________________________________________________________________________________________________");
    printf("\n                              #     ###    ##   #    # #####                     ");
    printf("\n                             # #    #  #  #  #  #    #   #                    ");
    printf("\n                            #####   ###  #    # #    #   #                    ");
    printf("\n                           #     #  #  #  #  #  #    #   #                    ");
    printf("\n                          #       # ###    ##    ####    #                      ");
    printf("\n __________________________________________________________________________________________________");
    printf("\n\n => This Quiz game is made by using C language only .");
    printf("\n\n => For making this quiz game i use my knowledge about c and take some help from \n    online available materials .");
    printf("\n\n => This code is made in Code::Blocks so it prefer Code::Blocks to better result.");
    printf("\n\n => If you want code of this quiz you can download by using given link is description .");
    printf("\n\n\t\t************************BEST OF LUCK**************************\n\n");


}

void start()
{
    int i,n,r,count=0;
    int found = 0;
    char fs[100],ls[100];
    printf("\n    #     # ##### #       ###   ##   #     # #####    #####   ##       #  # ###    ###         ");
    printf("\n    #     # #     #      #     #  #  # # # # #          #    #  #      # #  #  #  #            ");
    printf("\n    #  #  # ##### #     #     #    # #  #  # #####      #   #    #     ##   ###  #             ");
    printf("\n    # # # # #     #      #     #  #  #     # #          #    #  #      # #  #  #  #            ");
    printf("\n    #     # ##### #####   ###   ##   #     # #####      #     ##       #  # ###    ###         ");
    printf("\n\nIN THIS GAME WE HAVE 10 QUESTIONS EACH QUESTION CONTAIN 10000 RS.\n\n");
    printf("Enter your first name : ");
    scanf("%s",&fs);
    printf("Enter last name : ");
    scanf("%s",ls);
    printf("LETS START..... \n\n");
    char qu[1000];
    char copf[100];
    char opf[100];
    FILE *fp;
    FILE *op;
    FILE *cop;
    if((fp=fopen("kbcQueFile.txt","r"))==NULL)
    {
        printf("Error! opening file.");
        exit(1);
    }
    if((op=fopen("kbcOpFile.txt","r"))==NULL)
    {
        printf("Error! opening file.");
        exit(1);
    }
    if((cop=fopen("kbcCopFile.txt","r"))==NULL)
    {
        printf("Error! opening file.");
        exit(1);
    }
    for(i=1;i<=10;i++)
    {
        r=i;
        n=0;
        switch(r)
        {
        case 1:
            a:
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            printf("2.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("3.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==2)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto a;});
        case 2:
            b:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("3.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==3)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto b;});
        case 3:
            c:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("3.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("4.%s\n",fgets(copf,("%[^\n]"),cop));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==4)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto c;});
        case 4:
            d:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("3.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("4.%s\n",fgets(copf,("%[^\n]"),cop));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==4)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto d;});
        case 5:
            e:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("3.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==3)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto e;});
        case 6:
            f:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("3.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==3)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto f;});
        case 7:
            g:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(cop,0,1);
            printf("1.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("3.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==1)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto g;});
        case 8:
            h:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("3.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==3)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto h;});
        case 9:
            i:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("3.%s",fgets(copf,("%[^\n]"),cop));
            fseek(op,0,1);
            printf("4.%s\n",fgets(opf,("%[^\n]"),op));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==3)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto i;});
        case 10:
            j:
            fseek(fp,0,1);
            printf("%s\n",fgets(qu,("%[^\n]"),fp));
            fseek(op,0,1);
            printf("1.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("2.%s",fgets(opf,("%[^\n]"),op));
            fseek(op,0,1);
            printf("3.%s\n",fgets(opf,("%[^\n]"),op));
            fseek(cop,0,1);
            printf("4.%s\n",fgets(copf,("%[^\n]"),cop));
            scanf("%d",&n);
            (n>=1 && n<=4)?
            ({(n==4)?
             ({printf("CORRECT ANSWER......\n\n");
                count++;}):
                    ({ printf("OOPS WRONG ANSWER.CORRECT ANSWER IS %s\n",copf);
                       i=11;
                       break;});}):
                           ({printf("PLEASE ENTER CORRECT OPTION\n\n");
                            goto j;});
        default:
            break;
        }
    }
    int score=count*10000;
    if(score>0)
    {

    printf("..............CONGRATULATIONS...........\n\n");
    printf("You won %d Rs.\n\n",score);
    }
    printf("THAKS FOR PLAYING KBC %s %s.......",fs,ls);
    getch();
    fclose(fp);
}
void quit()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n __________________________________________________________________________________________________");
    printf("\n\n\t\t\t* * * * THANK YOU FOR COMING HERE , HAVE A GREAT DAY ! * * * *");
    printf("\n __________________________________________________________________________________________________\n\n\n\n\n");
}


int main()
{
    int counter=0,nom;


    home:
        system("cls");
        printf("___________________________________________________________________________________________________");
        printf("\n..................................WELCOME TO C program KBC Game...................................");
        printf("\n___________________________________________________________________________________________________\n");
        printf("\n\t => Press S to start the game\n");
        printf("\n\t => Press A to read about quiz  ");
        printf("\n\n\t => press H for help            ");
        printf("\n\n\t => press Q to quit             \n");
        printf("\n__________________________________________________________________________________________________\n");


    if(toupper(getch())=='H')
    {
        help();
        getch();
        goto home;
    }
    else if(toupper(getch())=='A')
    {
        about();
        getch();
        goto home;

    }
    else if(toupper(getch())=='S')
    {
        start();
        getch();
        goto home;
    }
    else if(toupper(getch())=='Q')
    {
        quit();
    }
    else
    {
        printf("\n\n\n\t\t\* * * * Please enter valid character ,Thank you ! * * * * \n\n\n");
        getch();
        goto home;
    }
}
