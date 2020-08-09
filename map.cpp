#include "map.h"

#include <cstdlib>

map::map()
{
    linii=0;
    coloane=0;
    matrice=NULL;
}

map::map(int linie,int col)
{
    int i,j,r1,r2,r3;
    linii=linie;
    coloane=col;

    matrice=new char *[linii];
    for(i=0; i<linii; i++)
        matrice[i]=new char[col];

    for(i=0; i<linii; i++)
        for(j=0; j<coloane; j++)
            matrice[i][j]=0;

    //generez 3 nr random intre 0 si 396

    r1 = (rand() % (i*j-4)) + 1;
    r2 = (rand() % (i*j-4)) + 1;
    r3 = (rand() % (i*j-4)) + 1;

    int nr=0;
    for(i=0; i<linii; i++)
        for(j=0; j<coloane; j++)
        {
            if(!(i==0&&j==0)||!(i==linii&&j==0)||!(i==linii&&j==coloane)||!(i==0&&j==coloane))  //parcurge matricea fara colturi
            {
                if(nr==r1||nr==r2||nr==r3)  //daca pozitia curenta este unul din cele 3 numere generate atunci plantez o comoara
                    matrice[i][j]='*';
                nr++;
            }
        }
}

map::map(const map &a)
{
    linii=a.linii;
    coloane=a.coloane;
    matrice=a.matrice;
}

map::~map()
{
    int i;
    for(i=0; i<linii; i++)
        delete [] matrice[i];
    delete [] matrice;
}

ostream& operator<<(ostream& out,const map &a)
{
    int i,j;
    for(j=0; j<a.coloane*4+1; j++)
            out<<"-";
        out<<endl;
    for(i=0; i<a.linii; i++)
    {
        for(j=0; j<a.coloane; j++)
            if(j!=0)out<<a.matrice[i][j]<<" | ";
                else out<<"| "<<a.matrice[i][j]<<" | ";
        out<<endl;
        for(j=0; j<a.coloane*4+1; j++)
            out<<"-";
        out<<endl;
    }
    return out;
}