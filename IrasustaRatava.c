/*
    No comment

*/

#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>

void goTo(int x, int y){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;

    pos.X = x;
    pos.Y = y;

    SetConsoleCursorPosition(hConsole, pos);
}
void blink(void);
void over(void);
void display(void);
void logo(void);
void loading(int x, int y);
void loadingStable(int x, int y);
void start(void);
void board(int x, int y);
char wep(int x);
int main(){
    
      int range,r,sel,or,wish,wish2,shld,opshld,hp=10,mp=10,i,x,y,sts=0,osts=0;
      int getwep,gs,opw,os,omp=10,ohp=10;
      int a,b,c,d,turn=1,flag=1;
      char name1[10],name2[10];
      char atk1, ans;
      int ar1,ar2;
      //Console Colours
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

      CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
      GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
      int originalAttrs = ConsoleInfo.wAttributes;
    
      
      
//******************************************
       for(x=0,y=0;x!=78;x++){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",4);Sleep(9);
        SetConsoleTextAttribute(hConsole, originalAttrs);
       }
      for(x=78,y=0;y!=40;y++){
       goTo(x, y);
       SetConsoleTextAttribute(hConsole, 112);
       printf("%c",3);Sleep(9);
       SetConsoleTextAttribute(hConsole, originalAttrs);
     }
      for(x=78,y=40;x!=0;x--){
       goTo(x, y);
       SetConsoleTextAttribute(hConsole, 112);
       printf("%c",4);Sleep(9);
       SetConsoleTextAttribute(hConsole, originalAttrs);
     }
      for(x=0,y=40;y!=0;y--){
       goTo(x, y);
       SetConsoleTextAttribute(hConsole, 112);
       printf("%c",3);Sleep(9);
       SetConsoleTextAttribute(hConsole, originalAttrs);
     }
//*****************************************
     
      do{
                                           
          fflush(stdin);
          ans='\0';
          display();
          board(a,b);
          goTo(50,20);
          SetConsoleTextAttribute(hConsole, 95);
          printf("'s'to start|| 'x' to exit");
          SetConsoleTextAttribute(hConsole, originalAttrs);
          goTo(50,21); 
          scanf("%c",&ans);
    
	      fflush(stdin);   
          while(ans!='s'&&ans!='S'&&ans!='x'&&ans!='X'){
           goTo(50,22);                                           
           printf("Invalid");
           goTo(50,21); 
           printf("                       ");
          
           goTo(50,21); 
           scanf("%c",&ans);
          }
            
                                              
      
      if(ans=='s'||ans=='S'){
       goTo(50,24); 
       printf(" L  O   A  D   I   N   G ");Sleep(1000);
       system("cls");
     do{
          
       logo();
       board(a,b);
       goTo(28,6);
              
       printf("WELCOME MIGTHY WIRRIOR");
       goTo(4,9);
       printf("Player 1: Please Enter your name:");
       goTo(40,9);
       scanf("%s",&name1);
       system("cls");
       logo();
        
       goTo(31,6);
       printf(" REGISTERING"); 
       Sleep(500);
       goTo(4,9);
       printf(" CONFIRM '%s' as name ?\n\n",name1); 
       do{
                
                logo();
                board(a,b);
              
                goTo(4,11);
                printf("\tEnter 0 to proceed.");
                goTo(4,12);
                printf("\tEnter 1 to re-name.");
                goTo(57,11);
                printf("SUBMIT");
                goTo(57,12);
                printf("|   |");
                goTo(59,12);
                scanf("%d",&wish); 
                system("cls");
          
         
          while(getchar()!='\n');
                         
                         
            }while(wish>1||wish<-1&&getchar()!='\n');
            system("cls"); 
            }while(wish!=0);
            
//*******************************for player 2***********************************************
   do{
          
       logo();
       board(a,b);
       goTo(28,6);
              
       printf("WELCOME MIGTHY WIRRIOR");
       goTo(4,9);
       printf("Player 2: Please Enter your name:");
       goTo(40,9);
       scanf("%s",&name2);
       system("cls");
       logo();
        
       goTo(31,6);
       printf(" REGISTERING"); 
       Sleep(500);
       goTo(4,9);
       printf(" CONFIRM '%s' as name ?\n\n",name2); 
       do{
                
                logo();
                board(a,b);
                
				goTo(4,11);
                printf("\tEnter 0 to proceed.");
                goTo(4,12);
                printf("\tEnter 1 to re-name.");
                goTo(57,11);
                printf("SUBMIT");
                goTo(57,12);
                printf("|   |");
                goTo(59,12);
                scanf("%d",&wish2); 
                system("cls");
          
         
          while(getchar()!='\n');
                         
                         
       }while(wish2>1||wish2<-1&&getchar()!='\n');
                system("cls"); 
       }while(wish2!=0);
//*****************************************************************************            
                srand(time(NULL));
                range=( 3 - 1 ) + 1;
                r= rand () % range +1;
                or=rand () % range +1;
                shld=rand () % range +1;
                opshld=rand () % range +1;
        //GENERATE RANDOM FUCKING NUMBERS
//*******************************************************************************************************
       
       logo();
//**************LOGO*******************************************************************

       //printf("ar1 %d ar2 %d",ar1,ar2);
       board(a,b);
       loadingStable(a,b);
       if(r==1){
       goTo(7,10);
       
       printf("P1 WARRIOR: '%s' you've destined to use the RATAVA ",name1);
       SetConsoleTextAttribute(hConsole, 6);
       printf("\"Wooden Spear\"");
        SetConsoleTextAttribute(hConsole, originalAttrs);
       getwep=1;
       }
       else if(r==2){
       goTo(7,10);     
       printf("P1 WARRIOR: '%s' you've destined to use the RATAVA ",name1);
       SetConsoleTextAttribute(hConsole, 15);
       printf("\"Silver Axe\"");
       SetConsoleTextAttribute(hConsole, originalAttrs);
       getwep=2;
       }
        else if(r==3){
       goTo(7,10);      
       printf("P1 WARRIOR: '%s' you've destined to use the RATAVA ",name1);
       SetConsoleTextAttribute(hConsole, 11);
       printf("\"Diamond Scythe\"");
       SetConsoleTextAttribute(hConsole, originalAttrs);
         getwep=3;
       }
       if(shld==1){
         goTo(7,12);
         printf("and RATAVA ");
         SetConsoleTextAttribute(hConsole, 6);            
         printf("\"Wooden Shield\"\n\n");
         SetConsoleTextAttribute(hConsole, originalAttrs);
         gs=1;
       }
       else if(shld==2){
         goTo(7,12);     
         printf("and RATAVA ");
         SetConsoleTextAttribute(hConsole, 15);
         printf("\"Silver Shield\"\n\n");
         SetConsoleTextAttribute(hConsole, originalAttrs);
         gs=2;
       }  
        else if(shld==3){
          goTo(7,12);
          printf("and RATAVA ");   
          SetConsoleTextAttribute(hConsole, 11); 
          printf("\"Diamond Shield\"\n\n");
          SetConsoleTextAttribute(hConsole, originalAttrs);
          gs=3;
          }
          
//******************************Player 2***********************************
        if(or==1){
          goTo(7,25);          
       printf("P2 WARRIOR: '%s' you've destined to use the RATAVA ",name2);
       SetConsoleTextAttribute(hConsole,6);
       printf("\"Wooden Spear\"");
       SetConsoleTextAttribute(hConsole, originalAttrs);
       opw=1;
       }
       else if(or==2){
          goTo(7,25);    
       printf("P2 WARRIOR: '%s' you've destined to use the RATAVA ",name2);
       SetConsoleTextAttribute(hConsole, 15);
       printf("\"Silver Axe\"");
       SetConsoleTextAttribute(hConsole, originalAttrs);
       opw=2;
       }
        else if(or==3){
             goTo(7,25);
       printf("P2 WARRIOR: '%s' you've destined to use the RATAVA ",name2);
       SetConsoleTextAttribute(hConsole, 11);
       printf("\"Diamond Scythe\"");
       SetConsoleTextAttribute(hConsole, originalAttrs);
       opw=3;
       }
        if(opshld==1){
        goTo(7,27);
         printf("and RATAVA");
          SetConsoleTextAttribute(hConsole, 6);
          printf(" \"Wooden Shield\"\n\n");
          SetConsoleTextAttribute(hConsole, originalAttrs);
          os=1;
       }
       else if(opshld==2){
          goTo(7,27);
          printf("and RATAVA");
          SetConsoleTextAttribute(hConsole, 15);
          printf(" \"Silver Shield\"\n\n");
          SetConsoleTextAttribute(hConsole, originalAttrs);
        os=2;
        }
        else if(opshld==3){
             goTo(7,27);
             printf("and RATAVA");
             SetConsoleTextAttribute(hConsole, 11);
             printf(" \"Diamond Shield\"\n\n");
             os=3;
             SetConsoleTextAttribute(hConsole, originalAttrs);
        }
        goTo(7,30);
       system("pause");

//******************************************************************************
            system("cls");
            board(a,b);
            goTo(25,20);
            printf("ESTABLISHING BATTLEFIELD");Sleep(4000);
            system("cls");   //start();
//******************************************************************************
             logo();
//**************LOGO************************************************************
    
    
  
  do{
  
  if(turn%2!=0&&flag!=0){
          ar1= (rand () % 4) +1;
          ar2= (rand () % 4) +1;
          sts= (rand () % 19) +1;
          osts= (rand () % 19) +1;
    fflush(stdin);
    logo();
    board(a,b);
    loadingStable(a,b);
                    goTo(28,8);
    printf("WARRIOR: P1: '%s'",name1);
         goTo(28,24);
    printf("WARRIOR: P2: '%s'",name2);
     
   if(getwep==1){
   
      goTo(7,10);
      printf("ATTACK: RATAVA ");
      SetConsoleTextAttribute(hConsole, 6);
      printf("Wooden Spear");  
      SetConsoleTextAttribute(hConsole, originalAttrs);
      
      }
   if(gs==1){
      
      goTo(40,10);
      printf("DEFFENSE: RATAVA ");
      SetConsoleTextAttribute(hConsole, 6);
      printf("Wooden Shield");
      SetConsoleTextAttribute(hConsole, originalAttrs);
    
    }
   if(getwep==2){
                 
       goTo(7,10);
     printf("ATTACK: RATAVA ");
     SetConsoleTextAttribute(hConsole, 15);
     printf("Silver Axe");
     SetConsoleTextAttribute(hConsole, originalAttrs);
     
     }
   if(gs==2){
      goTo(40,10);         
     printf("SHIELD: RATAVA ");
     SetConsoleTextAttribute(hConsole, 15);
     printf("Silver Shield");
     SetConsoleTextAttribute(hConsole, originalAttrs);
    }
   if(getwep==3){
        goTo(7,10);
      printf("ATTACK: RATAVA ");
      SetConsoleTextAttribute(hConsole, 11);
      printf("Diamond Sythe");
      SetConsoleTextAttribute(hConsole, originalAttrs);
         }
      if(gs==3){
       goTo(40,10);
       printf("SHIELD: RATAVA ");
       SetConsoleTextAttribute(hConsole, 11);
       printf("Diamond Shield");
       SetConsoleTextAttribute(hConsole, originalAttrs);
      }
       goTo(7,11);
       printf("HEALTH POINTS:");
  
      for(i=0;i!=hp;i++){
       SetConsoleTextAttribute(hConsole, 12);
       printf("%c",3);
      }
    
       SetConsoleTextAttribute(hConsole, originalAttrs);
       printf(" %d%",hp);
       goTo(40,11);
       printf("MANA POINTS:");
     for(i=0;i!=mp;i++){
       SetConsoleTextAttribute(hConsole, 2);
       printf("%c",219);
       SetConsoleTextAttribute(hConsole, originalAttrs);
     }
      printf(" %d%",mp);
     if(mp>=6){
      goTo(7,13);
      SetConsoleTextAttribute(hConsole, 13);
      printf("SPELL: The Kiss of the Jade Smoke");
      SetConsoleTextAttribute(hConsole, originalAttrs);
    }
    else{
     goTo(7,13);
     SetConsoleTextAttribute(hConsole, 141);
     printf("SPELL:(The Kiss of the Jade Smoke)Not Available");
     SetConsoleTextAttribute(hConsole, originalAttrs);
    }
         
     
    //**********************************************************************
    //*****************For the Player 2**********************************
    if(or==1){
   
      goTo(7,26);
      printf("ATTACK: RATAVA ");
      SetConsoleTextAttribute(hConsole, 6);
      printf("Wooden Spear"); 
      SetConsoleTextAttribute(hConsole, originalAttrs); 
      
      }
   if(opshld==1){
      
      goTo(40,26);
      printf("DEFFENSE: RATAVA ");
      SetConsoleTextAttribute(hConsole, 6);
      printf("Wooden Shield");
      SetConsoleTextAttribute(hConsole, originalAttrs);
    
    }
   if(or==2){
                 
       goTo(7,26);
     printf("ATTACK: RATAVA ");
     SetConsoleTextAttribute(hConsole, 15);
     printf("Silver Axe");
     SetConsoleTextAttribute(hConsole, originalAttrs);
     
     }
   if(opshld==2){
      goTo(40,26);         
     printf("SHIELD: RATAVA ");
     SetConsoleTextAttribute(hConsole, 15);
     printf("Silver Shield");
     SetConsoleTextAttribute(hConsole, originalAttrs);
    }
   if(or==3){
      goTo(7,26);
      printf("ATTACK: RATAVA ");
      SetConsoleTextAttribute(hConsole, 11);
      printf("Diamond Sythe");
      SetConsoleTextAttribute(hConsole, originalAttrs);
         }
   if(opshld==3){
      goTo(40,26);
      printf("SHIELD: RATAVA ");
      SetConsoleTextAttribute(hConsole, 11);
      printf("Diamond Shield ");
      SetConsoleTextAttribute(hConsole, originalAttrs);
   
     }
      goTo(7,27);
      printf("HEALTH POINTS:");
      SetConsoleTextAttribute(hConsole, 12);
    for(i=0;i!=ohp;i++)
      printf("%c",3);
      SetConsoleTextAttribute(hConsole, originalAttrs);
      printf(" %d%",ohp);
      goTo(40,27);
      printf("MANA POINTS:");
    for(i=0;i!=omp;i++){
      SetConsoleTextAttribute(hConsole, 2);
      printf("%c",219);
      SetConsoleTextAttribute(hConsole, originalAttrs);
    }
    printf(" %d%",omp);
      
     if(mp>=6){
      goTo(7,29);
      SetConsoleTextAttribute(hConsole, 13);
      printf("SPELL: The Kiss of the Jade Smoke");
      SetConsoleTextAttribute(hConsole, originalAttrs);
    }
    else{
     goTo(7,29);
     SetConsoleTextAttribute(hConsole, 141);
     printf("SPELL:(The Kiss of the Jade Smoke)Not enough Mana");
     SetConsoleTextAttribute(hConsole, originalAttrs);
    }
   
      
     
      //*******************************************************************8
      goTo(32,32);
      printf("%c SELECT MOVE P1 %c",17,16);
      if(mp>=6){
        goTo(15,34);
        printf("'A' for Attack"); 
        fflush(stdin);
      
        goTo(43,34);
        printf("'B' for Spell");
        goTo(15,35);
        scanf("%c",&atk1);
      
          
      while((atk1!='A'&&atk1!='a')&&(atk1!='B'&&atk1!='b')){
        fflush(stdin);
        goTo(15,35);
      //to clear previous printed values
        printf("                                 ");
        goTo(15,36);
        printf("%c invalid Select again:",atk1);
        goTo(15,35);
        scanf("%c",&atk1);                 
        fflush(stdin);
      }
     }

      else if(mp<6){
        goTo(15,34);
        printf("'A' for Attack");
        goTo(15,35);
        scanf("%c",&atk1); 
        fflush(stdin);
      
          
      while(atk1!='A'&&atk1!='a'){
      
        atk1='\0';
        fflush(stdin);
        goTo(15,35);
      //to clear previous printed values
        printf("                                 ");
        goTo(15,36);
        printf("%c invalid Select again:",atk1);
        goTo(15,36);
        scanf("%c",&atk1);                 
        fflush(stdin);
       }
                  }

   //****************************************************                                                            
          
   system("cls");    
   logo();
   loadingStable(a,b);
   board(c,d);
   goTo(20,10);
   
   if(atk1=='a'||atk1=='A'){
   if(getwep==1){
   printf("'%s' attack '%s' with ",name1,name2);
   SetConsoleTextAttribute(hConsole, 6);
   printf("Wooden Spear");
   SetConsoleTextAttribute(hConsole, originalAttrs);
   }
   else if(getwep==2){
   printf("'%s' attack '%s' with ",name1,name2);
   SetConsoleTextAttribute(hConsole, 15);
   printf("Silver Axe");
   SetConsoleTextAttribute(hConsole, originalAttrs);
   }
   else if(getwep==3){
   printf("'%s' attack '%s' with ",name1,name2);
   SetConsoleTextAttribute(hConsole, 11);
   printf("Diamond Scythe");
   SetConsoleTextAttribute(hConsole, originalAttrs);
   }
   goTo(7,25);
  
   //***************************************
   
    
      if(ar1==3||ar1==1||ar1==2){
         if(getwep==1&&os==1||getwep==2&&os==2||getwep==3&&os==3||getwep==1&&os==2||getwep==2&&os==3||getwep==1&&os==3){
             goTo(20,26);
             printf("MISS!");
             printf(" No Damage Inflicted");
             goTo(20,27); 
             }
             if(ar1==3||ar1==1||ar1==2){                                                        
             printf("P2 Neutralized your Attack w/");
             if(os==1)
             {  SetConsoleTextAttribute(hConsole, 6);
             printf("Wooden Shield");
               SetConsoleTextAttribute(hConsole, originalAttrs);
             }
             if(os==2){
             SetConsoleTextAttribute(hConsole, 15);
             printf("Silver Shield");
             SetConsoleTextAttribute(hConsole, originalAttrs);
             }
             if(os==3){
                         SetConsoleTextAttribute(hConsole, 11);
             printf("Diamond Shield");
               SetConsoleTextAttribute(hConsole, originalAttrs);
             }
             }
             if(getwep==2&&os==1||getwep==3&&os==2||getwep==2&&os==1){   
             goTo(20,26);                                                                        
               printf("Smash! Repel some of your attack using the Shield.");
              goTo(20,27); 
               printf("Damage Inflicted: Health points -1");
               ohp--;
               }
              if(getwep==3&&os==1){
               goTo(20,26);                     
               printf("Bleed! Repel some of your attack using the Shield.");
               goTo(20,27);
                 printf("Damage Innflicted: Health points -2");
                    ohp=ohp-2;
                    }
                    }
            else{
                 if(getwep==1){
                 goTo(20,26);              
                 printf("Slice!");
                 printf("Damage Inflicted: Health points -1");
                 ohp--;
                  }
                 if(getwep==2){
                 goTo(20,26);              
                 printf("Bleed!");
                 printf("Damage Inflicted: Health points -2");
                 ohp=ohp-2;
                 }
                             
                 if(getwep==3){
                 goTo(7,26);              
                 printf("Slice! Damage Inflicted: Health points -3");
                 ohp=ohp-3;
                 }
                 
                 
     
     }
     }
     else if(atk1=='b'||atk1=='B'){
             
          if(osts==2||osts==1||osts==3){
          goTo(15,10);
          printf("'%s' Cast",name1);
          SetConsoleTextAttribute(hConsole, 13);
          printf("\"The Kiss of the Jade Smoke to\"");
          SetConsoleTextAttribute(hConsole, originalAttrs); 
          printf("'%s'",name2);
          goTo(19,11);
          printf("Wait...");Sleep(1000);
          printf("P1 Stumble a ");
          SetConsoleTextAttribute(hConsole, 14);  
          printf(" Mona Lisa blink.");
          SetConsoleTextAttribute(hConsole, originalAttrs); 
          goTo(19,12);
          printf("Spell was Voided");
          mp=mp-6;
          
                              
                              
                              }
          
         else{ goTo(15,10);
          printf("'%s' Cast",name1);
          SetConsoleTextAttribute(hConsole, 13);
          printf("\"The Kiss of the Jade Smoke to\"");
          SetConsoleTextAttribute(hConsole, originalAttrs); 
          printf("'%s'",name2);
          mp=mp-6;
          ohp=ohp-2;
          goTo(7,26);
          printf(" Damage inflicted -2");
          }
          }
        goTo(7,25);
    printf("P1 turn SUMMARY ");Sleep(2000);
    
	if(ohp<=0)
        ohp=0;
        goTo(12,28);
        printf("Player 2");
        goTo(12,29);
        printf("HEALTH POINTS:");
        SetConsoleTextAttribute(hConsole, 12);
    
	for(i=0;i!=ohp;i++){
        Sleep(200);printf("%c",3);
       }SetConsoleTextAttribute(hConsole, originalAttrs);
      
	  printf(" %d%",ohp);
      goTo(44,28);
      printf("Player 1");
      goTo(44,29);
      printf("MANA POINTS:");
    for(i=0;i!=mp;i++){
      SetConsoleTextAttribute(hConsole, 2);                   
      Sleep(200);printf("%c",219);
      SetConsoleTextAttribute(hConsole, originalAttrs);
    }
      printf(" %d%",mp);
      Sleep(4000);
      turn++;
            
            
            
            system("cls");
            board(a,b);
            goTo(15,20);
            printf("REFRESHING VALUES. PREPARING FOR BATTLE.");Sleep(4000);
            system("cls");
            
            }
            if(ohp==0||ohp<0){
                     
             system("cls");    
             logo();
             loadingStable(a,b);
             board(c,d);
             goTo(25,10);
             printf("Player 2 %s defeated",name2);
             goTo(10,28);
             printf("Player 1 %s won the Battle.",name1); 
             goTo(50,24); 
             printf(" RETURNING to main menu ");Sleep(1000);
             flag=0;    
             Sleep(1000);
           }
//******************************************************************


     else if(turn%2==0&&flag==1){
           fflush(stdin);
           atk1='\0';
           logo();
           board(a,b);
           loadingStable(a,b);
     
           goTo(28,8);
           printf("WARRIOR: P1: '%s'",name1);
           goTo(28,24);
           printf("WARRIOR: P2: '%s'",name2);
     
      if(getwep==1){
         goTo(7,10);
         printf("ATTACK: RATAVA ");
         SetConsoleTextAttribute(hConsole, 6);
         printf("Wooden Spear");  
         SetConsoleTextAttribute(hConsole, originalAttrs);
      
      }
   if(gs==1){
      
      goTo(40,10);
      printf("DEFFENSE: RATAVA ");
      SetConsoleTextAttribute(hConsole, 6);
      printf("Wooden Shield");
      SetConsoleTextAttribute(hConsole, originalAttrs);
    
    }
   
      if(getwep==2){
        goTo(7,10);
        printf("ATTACK: RATAVA ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("Silver Axe");
        SetConsoleTextAttribute(hConsole, originalAttrs);
     
     }
      if(gs==2){
        goTo(40,10);         
        printf("SHIELD: RATAVA ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("Silver Shield");
        SetConsoleTextAttribute(hConsole, originalAttrs);
      }
      if(getwep==3){
        goTo(7,10);
        printf("ATTACK: RATAVA ");
        SetConsoleTextAttribute(hConsole, 11);
        printf("Diamond Sythe");
        SetConsoleTextAttribute(hConsole, originalAttrs);
         }
       if(gs==3){
        goTo(40,10);
        printf("SHIELD: RATAVA ");
        SetConsoleTextAttribute(hConsole, 11);
        printf("Diamond Shield");
        SetConsoleTextAttribute(hConsole, originalAttrs);
       }
    
	   goTo(7,11);
       printf("HEALTH POINTS:");
  
       for(i=0;i!=hp;i++){
         SetConsoleTextAttribute(hConsole, 12);
         printf("%c",3);
       }
    
        SetConsoleTextAttribute(hConsole, originalAttrs);
        printf(" %d%",hp);
        goTo(40,11);
        printf("MANA POINTS:");
    
	   for(i=0;i!=mp;i++){
        SetConsoleTextAttribute(hConsole, 2);
         printf("%c",219);
        SetConsoleTextAttribute(hConsole, originalAttrs);
       }
        printf(" %d%",mp);
         
		 if(mp>=6){
           goTo(7,13);
           SetConsoleTextAttribute(hConsole, 13);
           printf("SPELL: The Kiss of the Jade Smoke");
           SetConsoleTextAttribute(hConsole, originalAttrs);
         }
        
		else{
          goTo(7,13);
          SetConsoleTextAttribute(hConsole, 141);
           printf("SPELL:(The Kiss of the Jade Smoke)Not Available");
           SetConsoleTextAttribute(hConsole, originalAttrs);
         }
         
//**********************************************************************
//*****************For the Player 2**********************************
       if(or==1){
         goTo(7,26);
         printf("ATTACK: RATAVA Wooden Spear");  
       }
   
       if(opshld==1){
         goTo(40,26);
         printf("DEFFENSE: RATAVA Wooden Shield");
        }
       if(or==1){
         goTo(7,26);
         printf("ATTACK: RATAVA ");
         SetConsoleTextAttribute(hConsole, 6);
         printf("Wooden Spear"); 
         SetConsoleTextAttribute(hConsole, originalAttrs); 
       }
        if(opshld==1){
      
         goTo(40,26);
         printf("DEFFENSE: RATAVA ");
         SetConsoleTextAttribute(hConsole, 6);
         printf("Wooden Shield");
         SetConsoleTextAttribute(hConsole, originalAttrs);
    
    }
        if(or==2){
         goTo(7,26);
         printf("ATTACK: RATAVA ");
         SetConsoleTextAttribute(hConsole, 15);
         printf("Silver Axe");
         SetConsoleTextAttribute(hConsole, originalAttrs);
         }
       if(opshld==2){
         goTo(40,26);         
         printf("SHIELD: RATAVA ");
         SetConsoleTextAttribute(hConsole, 15);
         printf("Silver Shield");
         SetConsoleTextAttribute(hConsole, originalAttrs);
        }
       if(or==3){
         goTo(7,26);
         printf("ATTACK: RATAVA ");
         SetConsoleTextAttribute(hConsole, 11);
         printf("Diamond Sythe");
         SetConsoleTextAttribute(hConsole, originalAttrs);
       }
       if(opshld==3){
         goTo(40,26);
         printf("SHIELD: RATAVA ");
         SetConsoleTextAttribute(hConsole, 11);
         printf("Diamond Shield");
         SetConsoleTextAttribute(hConsole, originalAttrs);
       }
      
	     goTo(7,27);
         printf("HEALTH POINTS:");
         SetConsoleTextAttribute(hConsole, 12);
      
	  for(i=0;i!=ohp;i++)
        printf("%c",3);
        SetConsoleTextAttribute(hConsole, originalAttrs);
        printf(" %d%",ohp);
        goTo(40,27);
        printf("MANA POINTS:");
      
	  for(i=0;i!=omp;i++){
        SetConsoleTextAttribute(hConsole, 2);
        printf("%c",219);
        SetConsoleTextAttribute(hConsole, originalAttrs);
    }
        printf(" %d%",omp);
      
      if(omp>=6){
        goTo(7,29);
        SetConsoleTextAttribute(hConsole, 13);
        printf("SPELL: The Kiss of the Jade Smoke");
       SetConsoleTextAttribute(hConsole, originalAttrs);
       }
       else{
        goTo(7,29);
        SetConsoleTextAttribute(hConsole, 141);
        printf("SPELL:(The Kiss of the Jade Smoke)Not Enough Man");
        SetConsoleTextAttribute(hConsole, originalAttrs);
       }
    
        atk1='\0';
        fflush(stdin);
//*******************************************************************
        goTo(32,32);
        printf("%c SELECT MOVE P2 %c",17,16);
      
       if(omp>=6){
        goTo(15,33);
        printf("'A' for Attack"); 
        fflush(stdin);
      
        goTo(43,33);
        printf("'B' for Spell");
        goTo(15,34);
        scanf("%c",&atk1);
     
          
        while((atk1!='A'&&atk1!='a')&&(atk1!='B'&&atk1!='b')){
         fflush(stdin);
         goTo(15,34);
      //to clear previous printed values
         printf("                                 ");
         goTo(15,35);
         printf("%c invalid Select again:",atk1);
         goTo(15,34);
         scanf("%c",&atk1);                 
         fflush(stdin);
        }
       }

        if(omp<6){
         goTo(15,33);
         printf("'A' for Attack"); 
         goTo(15,34);
         scanf("%c",&atk1);
         fflush(stdin);
               
         while(atk1!='A'&&atk1!='a'){
           fflush(stdin);
           goTo(15,34);
          //to clear previous printed values
           printf("                                 ");
           goTo(15,35);
           printf("%c invalid Select again:",atk1);
           goTo(15,34);
           scanf("%c",&atk1);                 
           fflush(stdin);
         }
       }
   //**************************************************** 
                                                              
          ar1= (rand () % 4) +1;
          ar2=(rand () % 4) +1;
          system("cls");    
          logo();
          loadingStable(a,b);
          board(c,d);
          goTo(20,10);
       if(atk1=='a'||atk1=='A'){
        if(opw==1){
          printf("'%s' attack '%s' with ",name2,name1);
          SetConsoleTextAttribute(hConsole, 6);
          printf("Wooden Spear");
          SetConsoleTextAttribute(hConsole, originalAttrs);
        }
        else if(opw==2){
           printf("'%s' attack '%s' with ",name2,name1);
           SetConsoleTextAttribute(hConsole, 15);
		   printf("Silver Axe");
		   SetConsoleTextAttribute(hConsole, originalAttrs);
         }
        else if ( opw == 3){
	        printf("'%s' attack '%s' with ",name2,name1);
	        SetConsoleTextAttribute(hConsole, 11);
	        printf("Diamond Scythe");
		    SetConsoleTextAttribute(hConsole, originalAttrs);
        }
         goTo(7,25);
         //**********************************
             if(ar1==3||ar1==1||ar1==2){
                      
                                    
              if( opw==1&&gs==1||opw==2&&gs==2
			      ||opw==3&&gs==3||opw==1&&gs==2
				  ||opw==2&&gs==3||opw==1&&gs==3){
                   goTo(20,26);
                   printf("MISS!");
                   printf(" No Damage inflicted");
                   goTo(20,27);                                                         
                   printf("P1 Neutralized your Attack w/");
              
			  if(gs==1){
                SetConsoleTextAttribute(hConsole, 6);
                printf("Wooden Shield");
                SetConsoleTextAttribute(hConsole, originalAttrs);
              }
             if(gs==2){
               SetConsoleTextAttribute(hConsole, 15);
               printf("Silver Shield");
               SetConsoleTextAttribute(hConsole, originalAttrs);
             }
                if(gs==3){
			       SetConsoleTextAttribute(hConsole, 11);
                   printf("Diamond Shield");
                   SetConsoleTextAttribute(hConsole, originalAttrs);
                }
                  }
               
              if(opw==2&&gs==1||opw==3&&gs==2||opw==2&&gs==1){   
                goTo(20,26);                                                                        
                printf("Smash! Repel some of your attack using the Shield.");
                goTo(20,27);
                printf("Damage inflicted: Health points -1");
                hp--;
              }
                if(opw==3&&gs==1){
                   goTo(20,26);                     
                   printf("Bleed! Repel some of your attack using the Shield.");
                   goTo(20,27);
                   printf("Damage inflicted: Health points -2");
                   hp=hp-2;
                }
             }
            
            
            else{
                 if(opw==1){
                   goTo(20,26);              
                   printf("Smash!");
                   printf("Damage inflicted: Health points -1");
                   hp--;
                 }
                 if(opw==2){
                   goTo(20,26);              
                   printf("Bleed!");
                   printf("Damage inflicted: Health points -2");
                   hp=hp-2;
                 }
                             
                 if(opw==3){
                   goTo(7,26);              
                   printf("Slice! Damage inflicted: Health points -3");
                  hp=hp-3;
                 }
            }
       }
           else if(atk1=='b'||atk1=='B'){
             
             if(sts==2||sts==1||sts==3){
               goTo(15,10);
               printf("'%s' Cast",name2);
	           SetConsoleTextAttribute(hConsole, 13);
	           printf("\"The Kiss of the Jade Smoke to\"");
	           SetConsoleTextAttribute(hConsole, originalAttrs); 
	           printf("'%s'",name1);
	           goTo(19,11);
	           printf("Wait...");Sleep(1000);
	           printf("P1 Stumble a ");
	           SetConsoleTextAttribute(hConsole, 14); 
	           printf(" Mona Lisa blink.");
	           SetConsoleTextAttribute(hConsole, originalAttrs); 
	           goTo(19,12);
	           printf("Spell was Voided");
	           omp=omp-6;
                              
                              
             }
          
             else{ goTo(15,10);
                 printf("'%s' Cast",name2);
                 SetConsoleTextAttribute(hConsole, 13);
		         printf("\"The Kiss of the Jade Smoke to\"");
		         SetConsoleTextAttribute(hConsole, originalAttrs); 
		         printf("'%s'",name1);
		         omp=omp-6;
		         hp=hp-2;
		         goTo(7,26);   
		         printf(" Damage inflicted -2");
             }
           }

                 goTo(7,25);
                 printf("P2 turn SUMMARY");Sleep(2000);
             
			 if( hp <= 0)
                 hp=0;
                 goTo(12,28);
                 printf("Player 1");
                 goTo(12,29);
			     printf("HEALTH POINTS:");
			     SetConsoleTextAttribute(hConsole, 12);
			    
			for(i=0;i!=hp;i++){
			     Sleep(200);
			     printf("%c",3);
		    }
			     SetConsoleTextAttribute(hConsole, originalAttrs);
			     printf(" %d%",hp);
			     goTo(44,28);
			     printf("Player 2");
			     goTo(44,29);
			     printf("MANA POINTS:");
		    for( i=0 ; i!=omp ; i++ ){
			      Sleep(200);
			      SetConsoleTextAttribute(hConsole, 2);
			      printf("%c",219);
			      SetConsoleTextAttribute(hConsole, originalAttrs);
			}
			      printf(" %d%",omp);
    			  Sleep(4000);
		          turn++;
                  system("cls");
                  board(a,b);
                  goTo(15,20);
                  printf("REFRESHING VALUES. GENERATING LOST MANA POINTS");Sleep(4000);
                  system("cls");
    
			      atk1='\0';
			      fflush(stdin);
			      if(mp<10)
			      mp=mp+2;
			      if(omp<10)
			      omp=omp+2;
	 }
             if( hp == 0 || hp < 0 ){
                  system("cls");    
                  over();
                  loadingStable(a,b);
                  board(c,d);
                  goTo(10,10);
                  printf("Player 1 %s was defeated",name1);
                  goTo(10,28);
                  printf("Player 2 %s won the Battle.",name2);     
                  flag=0; 
                  goTo(50,24); 
                  printf(" RETURNING to main menu ");Sleep(1000);
                  Sleep(1000);
             }   
  
  
  
  
  }while(flag!=0);
        system("cls");
        fflush(stdin);
        system("cls");
        }
   
          else if(ans=='x'||ans=='X'){
            flag=1;
            goTo(50,24); 
            printf(" E X I T I N G ");Sleep(1000);
    
          }
    
      }while(flag!=1);
           
    
      return 0;
    } 



void loading(int x, int y){
     
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
    int originalAttrs = ConsoleInfo.wAttributes;  
     
     
     
     for( x=7 , y=8; x!=74 ; x++ ){
      goTo(x, y);
      printf("%c",205);
     }
     for( x=7 , y=18 ; x!=74 ; x++){
      goTo(x, y);
      printf("%c",205) ;      
     }
     for(x=7,y=19;x!=74;x++){
       goTo(x, y);
       printf("%c",4);
       SetConsoleTextAttribute(hConsole, originalAttrs);
     }
     for( x=7, y=20; x!=74; x++ ){
       goTo(x, y);
       printf("%c",205);
     }
     for( x=7 , y=24 ;x!=74; x++ ){
       goTo(x, y);
       printf("%c",205);
     }
     
     //********************battledrive***********
      
      for(x=7,y=32;x!=74;x++){
         goTo(x, y);
         printf("%c",30);
         }
       }

void logo(void){
           
      int i;
      goTo(28,2);
      
	for(i=0;i!=23;i++)
      printf("%c",177); 
      goTo(28,3);
      printf("%cR %c A %c T %c A %c V %c A%c",178,3,4,5,6,3,178);
      goTo(28,4);
   
    for(i=0;i!=23;i++)
       printf("%c",177);
         }
         
void board(int x, int y){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

     CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
     GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
     
	 int originalAttrs = ConsoleInfo.wAttributes;
     
     
     
      for( x=0, y=0; x!=78; x++){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",4);
        SetConsoleTextAttribute(hConsole, originalAttrs);
      }
       for(x=78,y=0;y!=40;y++){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",3);
        SetConsoleTextAttribute(hConsole, originalAttrs);
        }
       for(x=78,y=40;x!=0;x--){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",4);
         SetConsoleTextAttribute(hConsole, originalAttrs);
       }
      for(x=0,y=40;y!=0;y--){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",3);
        SetConsoleTextAttribute(hConsole, originalAttrs);
      }  
}

void loadingStable(int x, int y){
 
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
      GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
      int originalAttrs = ConsoleInfo.wAttributes;
     
      for( x=7, y=8; x!=74; x++ ){
        goTo(x, y);
        printf("%c",205);
     }
      for( x=7,y=20;x!=74;x++ ){
        goTo(x, y);
        printf("%c",205);
     }
      for( x=7, y=18; x!=74; x++ ){
        goTo(x, y);
        printf("%c",205);
      }
      for( x=7, y=19; x!=74; x++){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",4);
        SetConsoleTextAttribute(hConsole, originalAttrs);           
      }
      for( x=7, y=21; x!=74; x++){
        goTo(x, y);
        SetConsoleTextAttribute(hConsole, 112);
        printf("%c",4);
        SetConsoleTextAttribute(hConsole, originalAttrs);
      }
      
     for(x=7,y=22;x!=74;x++){
        goTo(x, y);
        printf("%c",205);
      }
     //********************battledrive***********
      
      for( x=7, y=32; x!=74; x++){
      goTo(x, y);
      printf("%c",205);
     }
}
     
void over(void){
     
   int i;
   
      goTo(20,2);
   
      for( i=0; i!=33; i++)
         printf("%c",177); 
         goTo(20,3);
         printf("%c G %c A %c M %c E %c O %c V %c E %c R %c",178,3,4,5,6,5,6,3,178);
         goTo(20,4);
       for( i=0 ;i!=33; i++)
          printf("%c",177);
       }

void display(void){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
    int originalAttrs = ConsoleInfo.wAttributes; 
    int i;
       
	   goTo(28,2);
     
	  for( i=0; i!=23 ;i++)
       
	   printf("%c",177); 
       goTo(28,3);
       printf("%cR %c A %c T %c A %c V %c A%c",178,3,4,5,6,3,178);
       goTo(28,4);
        
	  for(i=0;i!=23;i++)
       printf("%c",177);
       goTo(55,17);
       SetConsoleTextAttribute(hConsole, 265);
       printf("A Duel until the"); 
       SetConsoleTextAttribute(hConsole, originalAttrs);
       goTo(53,18);
       SetConsoleTextAttribute(hConsole, 12);
       printf("last breath.");
         
       goTo(30,4); 
       printf("\n\n");
       SetConsoleTextAttribute(hConsole,1);
     
 goTo(5,6);printf("                                             \n");
 goTo(5,7);printf("                ¶¶¶¶¶¶¶¶¶¶                   \n");
 goTo(5,8);printf("               ¶11111111¶¶¶¶¶                \n");
 goTo(5,9);printf("           ¶¶¶¶¶¶11111111111¶¶¶¶             \n");
 goTo(5,10);printf("       ¶¶¶11111111111111111111¶¶¶            \n");
 goTo(5,11);printf("     ¶¶1111111111111111111111111¶¶           \n");
 goTo(5,12);printf("    ¶1111111¶¶¶¶¶¶¶¶111¶¶¶¶¶¶¶¶¶¶¶¶          \n");
 goTo(5,13);printf("   ¶11111111¶¶¶111¶¶¶¶¶¶¶1111111¶¶¶¶¶        \n");
 goTo(5,14);printf("  ¶1111111111¶¶¶1111111111111111111¶¶¶¶¶¶¶¶  \n");
 goTo(5,15);printf("  ¶111111111111¶¶¶¶1111111111¶¶¶¶¶¶1¶¶¶¶¶1¶¶ \n");
 goTo(5,16);printf(" ¶111111111111111111111111111¶¶111111111111¶ \n");
 goTo(5,17);printf(" ¶111111111111111111111111111111111111111111¶\n");
 goTo(5,18);printf(" 1111¶¶¶¶1111111111111111111111111111111111¶ \n");
 goTo(5,19);printf("¶11¶¶  ¶111111111111111111111111111¶¶¶¶¶¶11¶ \n");
 goTo(5,20);printf("¶1¶   ¶111111111111111111111111111¶     ¶¶¶¶ \n");
 goTo(5,21);printf("      ¶11111111111¶11111111111111¶          \n");
 goTo(5,22);printf("     ¶111111111111¶¶1111111111111¶       ¶¶  \n");
 goTo(5,23);printf("     ¶1111111111111¶¶¶111111111111¶¶¶¶¶11¶¶  \n");
 goTo(5,24);printf("     ¶1111111¶¶¶11111¶¶¶¶111111111111111¶¶   \n");
 goTo(5,25);printf("     ¶11111¶¶  ¶11111111¶¶¶¶¶¶¶¶¶¶¶¶111¶¶    \n");
 goTo(5,26);printf("     ¶111¶¶    ¶11111111¶¶         ¶¶¶¶¶¶    \n");
 goTo(5,27);printf("      ¶1¶¶     ¶¶11111¶¶¶                    \n");
 goTo(5,28);printf("       ¶¶       ¶1111¶¶                      \n");
 goTo(5,29);printf("       ¶¶        ¶11¶¶                       \n");
 goTo(5,30);printf("        ¶         ¶1¶                        \n");
 goTo(5,31);printf("                   ¶¶                        \n");
 SetConsoleTextAttribute(hConsole, originalAttrs);
 }
 
