#include <iostream>
#include "functions.hpp"

using namespace std;

int main() {
   
    cout << "===== Programa de apostas no formato Round Robin =====" << endl; 
    cout << "Número máximo de apostas para cada jogador: " << endl;
    cin >> quantum;
    cout << "Número total de jogadores: " << endl;
    cin >> total_players;
    number_of_bets();
    bet();
    return 0;
}

