#include <bits/stdc++.h>
#include <SDL.h>

using namespace std;

const string wordToGuess[] = {"angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm"};
const int numWords = sizeof(wordToGuess) / sizeof(string);

mt19937 rng;
int ran(int l, int r)
{
    return rng() % (r - l + 1);
}

struct Hangman
{
    string guessWord;
    string hiddenWord;
    vector<vector<int>> wordPos;
    int badGuesses;

    void randomWord()
    {
        int idx = ran(0, numWords - 1);
        hiddenWord = wordToGuess[idx];
    }

    void init()
    {
        randomWord();
        guessWord = "";
        int sz = hiddenWord.size();
        for (int i = 0; i < sz; i++)
            guessWord += '_';

        badGuesses = 0;
//        hiddenWord = s;
        wordPos.assign(26, vector<int>());

        for (int i = 0; i < sz; i++)
            wordPos[hiddenWord[i] - 'a'].push_back(i);

        cout << guessWord << "\n";

    }

    char getInput()
    {
        cout << "Guess: ";
        char c;
        cin >> c;

        cout << "\n";
        return c;
    }

    void update(char input) {
        input -= 'a';
        if (wordPos[input].size()) {
            for (auto x : wordPos[input])
                guessWord[x] = char(input + 'a');
        }
        else {
            badGuesses++;
        }
    }


    bool isOver() {
        if (badGuesses >= 6) {
            cout << "DM THANG NGU\n";
            cout << hiddenWord << "\n";
            return 1;
        }
        return 0;
    }

    bool Won() {
        return (guessWord == hiddenWord);
    }
};

void render(Hangman& game)
{
    cout << "Bad Guesses: " << game.badGuesses << "\n";
    cout << "Guess word: " << game.guessWord << "\n";
//    cout << game.Won() << "\n";
}

int main(int arge, char** argv)
{
    rng.seed(time(nullptr));
    Hangman game;
    game.init();
    do {
        char input = game.getInput();
        game.update(input);
        render(game);
    }
    while(!game.isOver() && game.Won() == 0);
    return 0;
}
