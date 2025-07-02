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
    cout << "1. Bulbasaur" << endl;
    cout << "2. Squrtle" << endl;
    cout << "3. Charmander" << endl;
    cin >> pokemon_selection;

    switch (pokemon_selection) {
         case 1:
            cout << "great choice, Bulbasaur is the only right option!" << endl;
            break;
         case 2:
            cout << "squirtle is always a great option!" << endl;
            break;
         case 3: 
            cout << "Charmander is a firey choice!" << endl;
            break;
         default: 
            cout << "Invalid input select 1-3" << endl;
    }

    cout << "But beware, Trainer," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold." << endl;
    cout << "Now let's see if you've got what it takes to keep going!" << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;
        
    return 0;
}
