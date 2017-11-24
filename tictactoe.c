#include <stdio.h>
#include <stdlib.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin(char, char);
void board();
void test();

int main()
{
    int i, choice;
    square[7] = 'X';
    do
    {
        board();
        test();
       /* printf("Player, enter a number:  ");
        scanf("%d", &choice);
     
        if (choice == 1 && square[1] == '1')
            square[1] = 'O';
            
        else if (choice == 2 && square[2] == '2')
            square[2] = 'O';
            
        else if (choice == 3 && square[3] == '3')
            square[3] = 'O';
            
        else if (choice == 4 && square[4] == '4')
            square[4] = 'O';
            
        else if (choice == 5 && square[5] == '5')
            square[5] = 'O';
            
        else if (choice == 6 && square[6] == '6')
            square[6] = 'O';
            
        else if (choice == 7 && square[7] == '7')
            square[7] = 'O';
            
        else if (choice == 8 && square[8] == '8')
            square[8] = 'O';
            
        else if (choice == 9 && square[9] == '9')
            square[9] = 'O';
            
        else
        {
            printf("Invalid move ");    
        } */
        i = checkwin('X', 'X');
        if (i == 0)
        {    printf ("Computer is winning!");
             break;
        }
        i = checkwin('O', 'X');

        if (i == -1)
        {
              if (square[3] == '3')
                    square[3] = 'X';
              else if (square[1] == '1')
                    square[1] = 'X';
              else if (square[9] == '9')
                    square[9] = 'X';
              else if (square[2] == '2')
                    square[2] = 'X';
              else if (square[4] == '4')
                    square[4] = 'X';
             else if (square[5] == '5')
                    square[5] = 'X';
              else if (square[6] == '6')
                    square[6] = 'X';
              else if (square[8] == '8')
                    square[8] = 'X';
          }
    }while (i ==  -1 || i == 2);
    
    board();
    printf ("Game over :)");
    return 0;
}

/*********************************************

FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 **********************************************/

int checkwin(char check, char mark)
{
    int a;
    if (square[1] == check && square[2] == check && square[3] == '3')
    {
        square[3] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    } 
    else if (square[2] == check && square[3] == check && square[1] == '1')
    {
        square[1] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[1] == check && square[3] == check && square[2] == '2')
    {
        square[2] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[4] == check && square[5] == check && square[6] == '6')
    {
        square[6] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[4] == check && square[6] == check && square[5] == '5')
    {
        square[5] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[5] == check && square[6] == check && square[4] == '4')
    {
        square[4] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[7] == check && square[8] == check && square[9] == '9')
    {
        square[9] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[7] == check && square[9] == check && square[8] == '8')
    {
        square[8] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[8] == check && square[9] == check && square[7] == '7')
    {
        square[7] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[1] == check && square[4] == check && square[7] == '7')
    {
        square[7] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[1] == check && square[7] == check && square[4] == '4')
    {
        square[4] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[4] == check && square[7] == check && square[1] == '1')
    {
        square[1] = mark;
        a = (check == 'X')? 0 : 2;
        return a;
    }
    else if (square[2] == check && square[5] == check && square[8] == '8')
    {
        square[8] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[2] == check && square[8] == check && square[5] == '5')
    {
        square[5] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[5] == check && square[8] == check && square[2] == '2')
    {
        square[2] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[3] == check && square[6] == check && square[9] == '9')
    {
        square[9] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[3] == check && square[9] == check && square[6] == '6')
    {
        square[6] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[6] == check && square[9] == check && square[3] == '3')
    {
        square[3] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[1] == check && square[5] == check && square[9] == '9')
    {
        square[9] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[1] == check && square[9] == check && square[5] == '5')
    {
        square[5] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[5] == check && square[9] == check && square[1] == '1')
    {
        square[1] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[3] == check && square[5] == check && square[7] == '7')
    {
        square[7] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[3] == check && square[7] == check && square[5] == '5')
    {
        square[5] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else if (square[5] == check && square[7] == check && square[3] == '3')
    {
        square[3] = mark;
        a = (check == 'X'? 0 : 2);
        return a;
    }
    else
        return  -1;
}

void board()
{

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Computer (X)  -  Player (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

void test()
{
    int b;
    int c;
    if (square[1] == '1')
       square[1] = 'O';
    else if (square[2] == '2')
       square[2] = 'O';
    else if (square[4] == '4')
       square[4] = 'O';
    else if (square[3] == '3')
       square[3] = 'O';
    else if (square[5] == '5')
       square[5] = 'O';
    else if (square[6] == '6')
       square[6] = 'O';
    else if (square[7] == '7')
       square[7] = 'O';
    else if (square[8] == '8')
       square[8] = 'O';
    else if (square[9] == '9')
       square[9] = 'O';
    else 
    {
       /* do nothing */
    }
}
/*******************************************************************
END OF PROJECT
 ***********************************/
