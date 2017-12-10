#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
bool randBool();
void createWord(string, string);
void printWord(string);
 
string answer;
 
int main()
{
  string words[] = {
    "DOTA 2",
    "DEVIL MY CRY",
    "POKEMON GO",
    "ICEFROG",
    "ASSASSIN CREED"
  };
 
  string hints[] = {
    "Sebuah permainan multiplayer online battle arena, merupakan sekuel dari Defense of the Ancients mod pada Warcraft 3: Reign of Chaos dan Warcraft 3: The Frozen Throne",
    "Game series yang dikembangkan CAPCOM",
    "Game yang booming dengan teknologi AR nya ",
    "Pencetus DOTA 2",
    "Game yang dikembangkan oleh UBISOFT "
  };
 
  int size = sizeof(words) / sizeof(words[0]);
  srand(time(NULL));
 
  for (int i = 0; i < size; i++) {
    createWord(words[i], hints[i]);
  }
}
 
bool randBool()
{
  return (rand() % 2 == 0) ? true : false;
}
 
void createWord(string word, string hint)
{
  int nullCount = 0, wordCount = 0, limit;
  string temp = word, replace;
 
  wordCount = word.length();
  limit = wordCount / 3;
  nullCount = 0;
 
  while (nullCount < limit) {
    for (int j = 0; j < wordCount; j++)
    {
      if (randBool() && nullCount < limit && temp[j] != ' ' && temp[j] != '_')
      {
        temp.replace(j, 1, "_");
        nullCount++;
      }
    }
  }
 
  printWord(temp);
 
  cout << endl << endl << "Hint : " << hint << endl;
  cout << endl << endl << "Kata yang benar = ";
  getline(cin, answer);
 
  if (answer == word)
  {
    cout << "Anda Benar" << endl << endl;
  } else {
    cout << "Anda Salah" << endl << endl;
  }
}
 
void printWord(string word)
{
  for (int i = 0; i < word.length(); i++) {
    cout << word[i] << " ";
  }
}
