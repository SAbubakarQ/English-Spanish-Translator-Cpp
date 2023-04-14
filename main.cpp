#include <iostream>
using namespace std;

int main() {

    bool menu = true;
    int choice;
    string engWord;
    string spanWord;

    // Creating the dictionaries
    string englishDICT [] = {"animals", "ant", "antler", "ape", "aquarium", "barn", "beak", "bear", "beaver", "bee", "beetle", "blackbird", "bug", "bunny", "butterfly", "bull", "cage", "camel", "canary", "cat", "caterpillar", "chick", "chicken", "cicada", "claw", "cocoon", "cow", "coyote", "crab", "crane", "crocodile", "crow", "deer", "dinosaur", "dog", "donkey", "dove", "duck", "duckling", "eel", "egg", "elephant", "elk", "feather", "fin", "fish", "flamingo", "fly", "fox", "frog", "gazelle", "giraffe", "goat", "goose", "gorilla", "grasshopper", "hamster", "hedgehog", "hen", "hive", "hog", "horse", "hyena", "hoof", "insect", "jaguar", "jay", "jellyfish", "kangaroo", "kitten", "koala", "ladybug", "lamb", "lizard", "llama", "lobster", "macaw", "mammoth", "marsupial", "mermaid", "mole", "monkey", "monster", "moose", "mosquito", "moth", "mutt", "octopus", "ostrich", "otter", "parrot", "pig", "pigeon", "puppy", "quail", "quetzal", "rabbit", "raccoon", "rat", "reindeer", "rhinoceros", "roach", "roadrunner", "robin", "rooster", "seal", "sheep", "shrimp", "snail", "snake", "squid", "sponge", "squirrel", "stable", "swan", "tadpole", "tiger", "toad", "toucan", "turtle", "unicorn", "vulture", "walrus", "wasp", "weasel", "whale", "wolf", "worm", "zebra"};
    string spanishDICT [] = {"los animales", "la hormiga", "el asta", "el mono", "el acuario", "el establo", "el pico", "el oso", "el castor", "la abeja", "el escarabajo", "el mirlo", "el insecto", "el conejito", "la mariposa", "el toro", "la jaula", "el camello", "el canario", "el gato", "la oruga", "el pollito", "el pollo", "la cigarra", "la zarpa", "el capullo", "la vaca", "el coyote", "el cangrejo", "la grulla", "el cocodrilo", "el cuervo", "el venado", "el dinosaurio", "el perro", "el burro", "la paloma", "el pato", "el patito", "la anguila", "el huevo", "el elefante", "el alce", "la pluma", "la aleta", "el pez", "el flamenco", "la mosca", "el zorro", "la rana", "la gacela", "la jirafa", "la cabra", "el ganso", "el gorila", "el saltamontes", "la marmota", "el erizo", "la gallina", "la colmena", "el cerdo", "el caballo", "la hiena", "el casco", "el insecto", "el jaguar", "el arrendajo", "la medusa", "el canguro", "el gatito", "el koala", "la mariquita", "el cordero", "la lagartija", "la llama", "la langosta", "el guacamayo", "el mamut", "el marsupial", "la sirena", "el topo", "el mono", "el monstruo", "el alce", "el mosquito", "la polilla", "el bobo", "el pulpo", "el avestruz", "la nutria", "el loro", "el cerdo", "la paloma", "el cachorro", "la codorniz", "el quetzal", "el conejo", "el mapache", "la rata", "el reno", "el rinoceronte", "la cucaracha", "el correcamino", "el petirrojo", "el gallo", "la foca", "la oveja", "el camaron", "el caracol", "la culebra", "el calamar", "la esponja", "la ardilla", "el establo", "el cisne", "el renacuajo", "el tigre", "el sapo", "el toucan", "la tortuga", "el unicornio", "el buitre", "el walrus", "la avispa", "la comadreja", "la ballena", "el lobo", "el gusano", "la cebra"};

    // Checking size of array for English Dictionary
    int e = sizeof(englishDICT)/sizeof(englishDICT[0]);
    int s = sizeof(spanishDICT)/sizeof(spanishDICT[0]);

    cout << "Size of English Dictionary is: " << e << "\n";
    cout << "Size of Spanish Dictionary is: " << s << "\n";

    while (menu){
        cout << "\nWelcome! What would you like to do?\n";
        cout << "0) QUIT\n";
        cout << "1) English -> Spanish\n";
        cout << "2) Spansih -> English\n";
        cout << "\n";

        cin >> choice;

        // Quit option
        if (choice == 0){
            cout << "Thank you for using Madiha's Translator!\n";
            cout << "Have a nice day! :\n";
            menu = false;
        }

        // Converting English to Spanish
        else if (choice == 1){
            bool matchEng = false;
            cout << "You have selected: English -> Spanish\n";
            cout << "Enter an English word: ";
            cin >> engWord;
            for (int i = 0; i < e; i++){
                if (engWord == englishDICT[i]){
                    cout << spanishDICT[i] << endl;
                    matchEng = true;
                }
            }
            if (!matchEng){
                cout << engWord << " does not exist.\n";
            }
        }

        // Converting Spanish to English
        else if (choice == 2) {
            bool matchSpan = false;
            cout << "You have selected: Spanish -> English\n";
            cout << "Enter a Spanish word: ";
            cin.ignore();
            getline(cin, spanWord);
            for (int i = 0; i < s; i++){
                if (spanWord == spanishDICT[i]){
                    cout << englishDICT[i] << endl;
                    matchSpan = true;
                }
            }
            if (!matchSpan){
                cout << spanWord << " does not exist.\n";
            }
        }

        // Error statement
        else {
            cout << "That is not an option, please try again :)\n";
        }
    }

    return 0;
}