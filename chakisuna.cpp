#include <iostream>   //header file//
#include <conio.h>    //header file//

char sqaud[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};    //array declaration mean no of tic Tac Toe have 3*3 matrix//

int checkwin();
void board();

int main()
{
    int player=1,i,choice;
    int mark;
    do                //do-while loop for game sequanse and integer print//
    {
        board();
        player =  (player % 2) ? 1 : 2;   //how many player played//
        
        std::cout << "player:--->" << player << '\n' << "plz..input a number for playing";
        std::cin >> choice;

         mark = (player==1) ? 'X' : '0' ;            //input "x"-cross and "0"-zero//




         if (choice==1 && sqaud[1]=='1')               //input no for out put table//
         sqaud[1]=mark;

         else if (choice==2 && sqaud[2]=='2')         //input no for out put table//
         sqaud[2]=mark;

         else if (choice==3 && sqaud[3]== '3')        //input no for out put table//
         sqaud[3]=mark;

         else if (choice == 4 && sqaud[4] == '4')     //input no for out put table//
             sqaud[4] = mark;

         else if (choice == 5 && sqaud[5] == '5')     //input no for out put table//
             sqaud[5] = mark;

         else if (choice == 6 && sqaud[6] == '6')     //input no for out put table//
             sqaud[6] = mark;

         else if (choice == 7 && sqaud[7] == '7')     //input no for out put table//
             sqaud[7] = mark;

         else if (choice == 8 && sqaud[8] == '8')    //input no for out put table//
             sqaud[8] = mark;

         else if (choice == 9 && sqaud[9] == '9')    //input no for out put table//
             sqaud[9] = mark;

         else
         {
             std::cout << "you input a invalid input";      //if player input invalid input or input grater then 9 //

             player--;  // if player input invalid input player is decriment or player is re-enter the integer// 

           
        }   
        i=checkwin();

        player++;

    } while (i == -1);
    board();
    if (i == 1)   //if any one line is similar //

        std::cout << "\a player:---->" << --player << ":>>>>you are WIN" << '\n'    //print stetment//
                  << "massage for another player:---->"
                  << "this in not your time sorry,BETTER LUCK NEST TIME";
    else
        std::cout << "\a both player playing very well,(this match is drow)";

    return (0);
 }
 int checkwin()
 {

     if (sqaud[1] == sqaud[2] && sqaud[2] == sqaud[3])           //sequance of row and column//
         return 1;

     else if (sqaud[4] == sqaud[5] && sqaud[5] == sqaud[6])      //sequance of row and column//
         return 1;

     else if (sqaud[7] == sqaud[8] && sqaud[8] == sqaud[9])      //sequance of row and column//
         return 1;

     else if (sqaud[1] == sqaud[4] && sqaud[4] == sqaud[7])      //sequance of row and column//
         return 1;

     else if (sqaud[2] == sqaud[5] && sqaud[5] == sqaud[8])      //sequance of row and column//
         return 1;

     else if (sqaud[3] == sqaud[6] && sqaud[6] == sqaud[9])     //sequance of row and column//
         return 1;

     else if (sqaud[1] == sqaud[5] && sqaud[5] && sqaud[9])     //sequance of row and column//
         return 1;

     else if (sqaud[3] == sqaud[5] && sqaud[5] && sqaud[7])     //sequance of row and column//
         return 1;

     else if (sqaud[1] != '1' && sqaud[2] != '2' && sqaud[3] != '3' && sqaud[4] != '4' && sqaud[5] != '5' && sqaud[6] != '6' && sqaud[7] != '7' && sqaud[8] != '8' && sqaud[9] != '9')     //for print sequance of row and column//
         return 0;
     else
     return -1;
 }
 void board()
 {
     system("cls");

     std::cout << " \n\n\tB.B CREATE\n\n\t";                                                        //Design//

     std::cout << "\n\n\twelcome to my game\n\n\t";                                                 //Design//

     std::cout << "\n\n\ttic Tac Toe\n\n\t";                                                        //Design//

     std::cout << "\n\n\tchaki suna\n\n\t";                                                         //Design//

     std::cout << "\n\n\tplzz...\n\n\t";                                                            //Design//

     std::cout << "\n\n\tstart play by use following rule\n\n\t";                                   //Design//

     std::cout<< "plz select your symble and input serialy" << '\n';                                //Design//

     std::cout << "\n\n\t 1 ST player is (X-cross) AND 2 ND player is (O-zero)" << '\n';            //Design//
     
     std::cout << '\n';                   //new line//
     std::cout << '\n';                    //new line//
     std::cout << '\n';                    //new line//
     std::cout << '\n';                    //new line//
     std::cout << '\n';                    //new line//
     std::cout << '\n';                    //new line//

        //********************************************************************************************//           
                                            ///line  Design///

        //********************************************************************************************//
        
     std::cout << "     |     |   " << '\n';
     std::cout << "" << sqaud[1] << "    |  " << sqaud[2] << "  |  " << sqaud[3] <<'\n';

     std::cout << "" << "_____|_____|_____" << '\n';
     std::cout << "" << "     |     |     " << '\n';
     std::cout << "" << sqaud[4] << "    |  " << sqaud[5] << "  |  " << sqaud[6] << '\n';
     
     std::cout << "" << "_____|_____|_____" << '\n';
     std::cout << "" << "     |     |     " << '\n';
     std::cout << "" << sqaud[7] << "    |  " << sqaud[8] << "  | " << sqaud[9] << '\n';
     std::cout << "" << "     |     |    " << '\n';
     std::cout << '\n';
     
    
  }
