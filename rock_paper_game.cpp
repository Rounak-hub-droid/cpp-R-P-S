#include<iostream>
#include<ctime>

    char getUserChoice();
    char getComputerChoice();
    void showChoice(char choice);
    void chooseWinner(char player, char computer);

    int main(){
        char player;
        char computer;

        player = getUserChoice();
        std::cout<<"Your choice: ";
        showChoice(player);

        computer = getComputerChoice();
        std::cout<<"Computer's choice: ";
        showChoice(computer);

        chooseWinner(player, computer);

        return 0;
    }

    char getUserChoice(){
        char player;

        std::cout<<"Rock-Paper-Scissors Game"<<std::endl;
        std::cout<<"************************"<<std::endl;

        do
        {
        std::cout<<"Choose one of the following: "<<std::endl;
        std::cout<<"'r'-rock"<<std::endl;
        std::cout<<"'p'-paper"<<std::endl;
        std::cout<<"'s'-scissors"<<std::endl;
        std::cout<<"Enter your choice: "<<std::endl;
        std::cin>>player;   
        } 
        while (player != 'r' && player != 'p' && player != 's');
        
       return player;
    }
    char getComputerChoice(){

        srand(time(NULL));
        int num = (rand() % 3)+1; 
       // std::cout<<num<<std::endl;  

       switch (num)
       {
       case 1 : return 'r';
        break;
       
       case 2 : return 'p';
        break;
       
       case 3 : return's';
        break;
       } 
        return 0;
    }
    void showChoice(char choice){
    //char choice;
       switch(choice)
       {
       case 'r': std::cout<<"Rock"<<std::endl;
        break;
       
       case 'p': std::cout<<"paper"<<std::endl;
        break;
       
       case 's': std::cout<<"scissors"<<std::endl;
        break;
       }
    }
    void chooseWinner(char player, char computer){
         
         switch (player)
         {
         case 'r' : if (computer ==  'r')
                    {
                       std::cout<<"It's a TIE"<<std::endl;
                    }
                    else if (computer == 'p')
                    {
                        std::cout<<"You LOOSE"<<std::endl;
                    }
                    else{
                        std::cout<<"You WIN"<<std::endl;
                    }
            break;
        case 'p' : if (computer ==  'r')
                    {
                       std::cout<<"You WIN"<<std::endl;
                    }
                    else if (computer == 'p')
                    {
                        std::cout<<"It's a TIE"<<std::endl;
                    }
                    else{
                        std::cout<<"You LOOSE"<<std::endl;
                    }
            break;    
        case 's' : if (computer ==  'r')
                    {
                       std::cout<<"You LOOSE"<<std::endl;
                    }
                    else if (computer == 'p')
                    {
                        std::cout<<"You WIN"<<std::endl;
                    }
                    else{
                        std::cout<<"It's a TIE"<<std::endl;
                    }
            break; 
         }
    }
