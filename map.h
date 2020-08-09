#ifndef MAP_H
#define MAP_H

#include <iostream>

using namespace std;

class map
{
public:
  map ();			        //constructorul nul
    map (int, int);	    	//constructorul cu parametrii
    map (const map &);		//constructorul de copiere
   ~map ();		        	//destructor
  friend ostream & operator<< (ostream &, const map &);	//supraincarcarea operatorului de afisare
  friend class player;
  friend class player1;
  friend class player2;
  friend class player3;
  friend class player4;
protected:
  int linii;			//nr de linii
  int coloane;			//nr de coloane
  char **matrice;		//harta reprezentata de o matrice
};


#endif // MAP_H
