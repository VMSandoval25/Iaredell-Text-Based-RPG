#if _WIN32
#include "WinGame.hpp"
#elif
#include "UnixGame.hpp"
#endif

#include <iomanip>




int main(int argc, char* argv[]){
       std::cout << std::fixed << std::showpoint << std::setprecision(2);
       newGame* GameClient = new newGame();
       if (GameClient->mainMenu())
       {
              GameClient->playerSelection();
              GameClient->tutorial();
              GameClient->scene1();
              GameClient->scene2();
       }
       return 0;
}