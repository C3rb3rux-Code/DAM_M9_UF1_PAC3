#include <iostream>
#include <unistd.h>

using namespace std;

vector<String> names;

int main() {
    pid_t pid = fork(); 
    int process = 0;

    cout << "Escull quants processos vols tenir actius:";
    cin >> process;
    cout << "\n";

    for (size_t i = 0; i < process; i++)
    {
        if (pid == 0)
        {
            string nom;
            cout << "Procés " << i + 1 << ": Introdueix un nom: ";
            cin >> nom;
            vector_de_noms.push_back(nom);

            if (!vector_de_noms.empty()) {
                int index_aleatori = rand() % vector_de_noms.size();
                cout << "Hola, " << vector_de_noms[index_aleatori] << "\n";
            } else {
                cout << "No hi ha cap nom a la llista.\n";
            }

            _exit(0);

        }
        else
        {
            wait(NULL);
            break;
        }
        
    }
    
}