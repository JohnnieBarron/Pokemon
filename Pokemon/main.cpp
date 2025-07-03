#include <iostream>
using namespace std;

string player_name = "";
int pokemon_selection = 0;
enum class PokemonChoice {
    InvalidChoice,
    Charmander,
    Bulbasaur,
    Squirtle
};
string starter_pokemon = "";

int main() {
    cout << "Trainer! Before you embark on your journey," << endl;
    cout << "the Pokémon world needs to know who you are!" << endl;
    cin >> player_name;

    cout << "Welcome to the world of pokemon, I am Professor Oak!" << endl;
    cout << "Before your jouney can begin select a pokemon!" << endl;
    cout << "1. Bulbasaur " << endl;
    cout << "2. Squirtle " << endl;
    cout << "3. Charmander " << endl;
    PokemonChoice chosen_pokemon = InvalidChoice;
    int choice = 0;

    cin >> choice;

    switch (choice) {
    case 1:
        chosen_pokemon = Bulbasaur;
        break;
    case 2:
        chosen_pokemon = Squirtle;
        break;
    case 3:
        chosen_pokemon = Charmander;
        break;
    default:
        chosen_pokemon = InvalidChoice;
        break;
    }

    switch (chosen_pokemon) {
    case Bulbasaur:
        cout << "great choice, Bulbasaur  is the only right option!" << endl;
        starter_pokemon = "Bulbasaur ";
        break;
    case Squirtle:
        cout << "Squirtle  is always a great option!" << endl;
        starter_pokemon = "Squirtle ";
        break;
    case Charmander:
        cout << "Charmander  is a firey choice!" << endl;
        starter_pokemon = "Charmander ";
        break;
    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you..." << endl;
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
        starter_pokemon = "Pikachu";
        break;
    }

    cout << "But beware, Trainer," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold." << endl;
    cout << "Now let's see if you've got what it takes to keep going!" << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;
        
    return 0;
}
