#include <iostream>
using namespace std;

string player_name = "";
int pokemon_selection = 0;

int main() {
    cout << "Trainer! Before you embark on your journey," << endl;
    cout << "the Pokémon world needs to know who you are!" << endl;
    cin >> player_name;

    cout << "Welcome to the world of pokemon, I am Professor Oak!" << endl;
    cout << "Before your jouney can begin select a pokemon!" << endl;
    cout << "1. Bulbasour" << endl;
    cout << "2. Squrtle" << endl;
    cout << "3. Charmander" << endl;
    cin >> pokemon_selection;

    if (pokemon_selection == 1)
    {
        cout << "great choice, Bulbasour is the only right option!" << endl;
    } else if (pokemon_selection == 2) {
        cout << "squirtle is always a great option!" << endl;
    } else if (pokemon_selection == 3) {
        cout << "Charmander is a firey choice!" << endl;
    } else {
        cout << "invalid input select 1-3" << endl;
    }

    
    return 0;
}
