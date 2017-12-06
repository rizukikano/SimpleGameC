#include<iostream>
#include<string.h>

using namespace std;

int main()
{	
	string answer;
	
  string words[] = {
    "DOTA 2",
    "DEVIL MY CRY",
    "POKEMON GO",
    "ICEFROG",
    "ASSASSIN CREED"
  };

  string hint[] = {
    "Sebuah permainan multiplayer online battle arena, \n merupakan sekuel dari Defense of the Ancients mod pada Warcraft 3: Reign of Chaos \n dan Warcraft 3: The Frozen Throne",
    "Game series yang dikembangkan CAPCOM",
    "Game yang booming dengan teknologi AR nya ",
    "Pencetus DOTA 2",
    "Game yang dikembangkan oleh UBISOFT "
  };
	
	for (int i = 0; i < words[0].length(); i++)
	{	
		if (i % 2 != 0)
		{
			cout << "_";
		} else {
			cout << words[0][i];
		}
		
		cout << " ";
	}
	
	cout << endl << endl << "Kata yang benar = ";
	getline(cin, answer);
	
	if (answer == words[0])
	{
		cout << "Anda Benar";
	} else {
		cout << "Anda Salah";
	}
}
