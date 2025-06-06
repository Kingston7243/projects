#include <iostream>
#include <ctime>
int main(){
    int again;
    do{srand(time(0));
    int num = (rand() % 100) + 1;
    int guess;
    int mode;
    std::cout <<"Welcome to number guessing game select your mode\n";
    std::cout << " 1-Easy (5 tries)\n 2-Medium (3 tries)\n 3-Hard (1 try)\n 4-Endless (Endless tries)\n";
    std::cout << "type the number for your mode\n";
    std::cin >> mode;
    //End of introduction
    switch (mode)
     {
     case 1:{
     for (int i = 1; i <=5; i++){
     std::cout <<"Guess a number between 0 to 100\n";
     std::cin >>guess;
     if (guess < 0 || guess > 100)
     {
     std::cout <<"please type a number between 1 to 100\n";    
     }
     else if (guess==num)
     {
     std::cout <<"congratulation you won\n";
        break;
     }
     else if (guess>num)
     {
     std::cout <<"wrong, the number is lesser than your guess\n";    
     }
     else if (guess<num)
     {
     std::cout <<"wrong, the number is greater than your guess\n";    
     }}}
     std::cout << "You lose the number was:"<< num;
        break;
    //End of case 1    
    case 2:{
     for (int i = 1; i <=3; i++){
     std::cout <<"Guess a number between 0 to 100\n";
     std::cin >>guess;
     if (guess < 0 || guess > 100)
     {
     std::cout <<"please type a number between 1 to 100\n";    
     }
     else if (guess==num)
     {
     std::cout <<"congratulation you won\n";
        break;
     }
     else if (guess>num)
     {
     std::cout <<"wrong, the number is lesser than your guess\n";    
     }
     else if (guess<num)
     {
     std::cout <<"wrong, the number is greater than your guess\n";    
     }}}
     std::cout << "You lose the number was:"<< num;
        break;
    //end of case 2
    case 3:
     for (int i = 1; i <=1; i++){
     std::cout <<"Guess a number between 0 to 100\n";
     std::cin >> guess;
     if (guess < 0 || guess > 100)
     {
     std::cout <<"please type a number between 1 to 100\n";    
     }
     else if (guess==num)
     {
     std::cout <<"congratulation you won\n";
     }
     }
     std::cout << "You lose the number was:"<< num;
        break;
    //End of case 3
    case 4:{
     do{
     std::cout <<"Guess a number between 0 to 100\n";
     std::cin >>guess;
     if (guess < 0 || guess > 100)
     {
     std::cout <<"please type a number between 1 to 100\n";    
     }
     else if (guess>num)
     {
     std::cout <<"wrong, the number is lesser than your guess\n";    
     }
     else if (guess<num)
     {
     std::cout <<"wrong, the number is greater than your guess\n";    
     }}while (guess!=num);
     std::cout <<"congratulation you won\n";
     }
        break;
    //End of case 4    
    default:{
    std::cout <<"Please type a valid number";
        break;
    }}
    std::cout << "\nPress 1 to play the game again  ";
    std::cin >> again;
}while(again==1);
return 0;
}