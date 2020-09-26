#include<iostream>
#include<conio.h>

char sqaurd[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkWIN();
void board();

int main()
{
    int player=1,i,choice;
    int mark;

    do
    {
     board();
     player = (player % 2) ? 1 : 2;

     std::cout << "player:---->" << player << "plz......input a your interger:---->" << '\n';
     std::cin >> choice ;

     mark = (player == 1)? 'X' : '0';

     if (choice==1 && sqaurd[1]== '1')
     sqaurd[1] = mark;

     else if(choice==2 && sqaurd[2]=='2')
     sqaurd[2] = mark;

     else if(choice==3 && sqaurd[3]=='3')
     sqaurd[3] = mark;

     else if(choice==4 && sqaurd[4]=='4')
     sqaurd[4] = mark;
     
     else if(choice==5 && sqaurd[5]=='5')
     sqaurd[5] = mark;

     else if(choice==6 && sqaurd[6]=='6')
     sqaurd[6] = mark;
     
     else if(choice==7 && sqaurd[7]=='7')
     sqaurd[7] = mark;

     else if(choice==8 && sqaurd[8]=='8')
     sqaurd[8] = mark;
      
    else if (choice==9 && sqaurd[9]=='9')
    sqaurd[9] = mark;

    else
    {
        std::cout<< "your are input a in valid number or integer";
        --player;
    
    }
       
       i=checkWIN();

       player++;

    } while (i = -1);
    
    board();

    if (i == 1)

    std::cout << "player:---->" << player++ << '\n' << "congratulation your have a grade WIN" << '\n' << "for player:---->" << player ++ << '\n' << "this is not your time (BETTER LUCK NEST TIME) " << "if you want play again plz re-run the program";

    else 
    std::cout << "\a both player playing very well,this match is drow";

    return (0);
}
int checkWIN()
{
    if(sqaurd[1] == sqaurd[2] && sqaurd[2]== sqaurd[3])
    return 1;

    if(sqaurd[4] == sqaurd[5] && sqaurd[5] == sqaurd[6])
    return 1;

    if(sqaurd[7] == sqaurd[8] && sqaurd[8] == sqaurd[9])
    return 1;

    if(sqaurd[1] == sqaurd[4] && sqaurd[4] == sqaurd[7])
    return 1;

    if(sqaurd[2] == sqaurd[5] && sqaurd[5] && sqaurd[8])
    return 1;

    if(sqaurd[3] == sqaurd[6] && sqaurd[6] == sqaurd[9])
    return 1;

    if(sqaurd[1] == sqaurd[5] && sqaurd[5] == sqaurd[9] )
    return 1;

    if(sqaurd[3] == sqaurd[5] && sqaurd[5] == sqaurd[7])
    return 0;

    else

    return -1;
}
void board()
{
    system("cls");

    std::cout << " \n\n\tB.B CREATE\n\n\t";

    std::cout << "\n\n\twelcome to my game\n\n\t";

    std::cout << "\n\n\ttic Tac Toe1\n\n\t";

    std::cout << "\n\n\tchaki suna\n\n\t";

    std::cout << "\n\n\tplzz...\n\n\t";

    std::cout << "\n\n\tstart play by use following rule\n\n\t";

    std::cout << "plz select your symble and input serialy" << '\n';

    std::cout << "\n\n\t 1 ST player is (X-cross) AND 2 ND player is (O-zero)" << '\n';

    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';

    std::cout << "     |     |   " << '\n';
    std::cout << "" << sqaurd[1] << "    |  " << sqaurd[2] << "  |  " << sqaurd[3] << '\n';

    std::cout << ""
              << "_____|_____|_____" << '\n';
    std::cout << ""
              << "     |     |     " << '\n';
    std::cout << "" << sqaurd[4] << "    |  " << sqaurd[5] << "  |  " << sqaurd[6] << '\n';

    std::cout << ""
              << "_____|_____|_____" << '\n';
    std::cout << ""
              << "     |     |     " << '\n';
    std::cout << "" << sqaurd[7] << "    |  " << sqaurd[8] << "  | " << sqaurd[9] << '\n';
    std::cout << ""
              << "     |     |    " << '\n';
    std::cout << '\n';
}
