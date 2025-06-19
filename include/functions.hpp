#include <iostream>

int quantum; //número máximo de apostas
int players[12]; //quantidade total de jogadores permitidos
int total_players; //saber a quantidade total de jogadores jogando a rodada
using namespace std;

void number_of_bets() {
    int total_bets;

    for(int i = 1; i <= total_players; i++) {
        cout << "Número de apostas que o jogador " << i << " irá realizar: " << endl;
        cin >> total_bets;
        players[i] = total_bets; //quantidade de apostas de cada jogador
    }
}

void bet() {
   int moves = total_players;
   int placed_bets = 1; //jogador apostou
   cout << "=== Rotação das apostas ===" << endl;
    while(moves != 0) {
        if(players[placed_bets] <= 0) {
            placed_bets++;
        }
        cout << "Jogador " << placed_bets << " realizou " << players[placed_bets] << " apostas" << endl;
        players[placed_bets] = players[placed_bets] - quantum;
        if(players[placed_bets] <= 0) {
            cout << "Apostou tudo" << endl;
            moves--;

        } else {
            cout << "Resta/restam " << players[placed_bets] << " aposta(s)" << endl;
        }
        placed_bets++; //vai para o próximo jogador 
            if(placed_bets > total_players) { //manda o jogador que apostou para o final da fila
                placed_bets = 0;
            }

    }
}