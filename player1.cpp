#include "player1.h"

//jucator 1 stanga-sus

player1::player1()
{
    xposition=0;
    yposition=0;
    status=0;
}

player1::player1(int x,int y,map &harta)
{
    xposition=x;
    yposition=y;
    status=1;
    harta.matrice[x][y]='1';
}

void player1::move(map &harta)
{
    if(xposition==0 && yposition==19)
    {
        harta.matrice[xposition][yposition]='#';
        xposition++;
        cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
        harta.matrice[xposition][yposition]='1';
        return;
    }
    if(harta.matrice[xposition+1][yposition]=='*')
        {
            status=2;
            harta.matrice[xposition+1][yposition]='#';
            harta.matrice[xposition][yposition]='#';
            cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition+1<<" "<<yposition<<" si a gasit comoara."<<endl;
            return;
        }
    if(harta.matrice[xposition-1][yposition]=='*')
        {
            status=2;
            harta.matrice[xposition-1][yposition]='#';
            harta.matrice[xposition][yposition]='#';
            cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition-1<<" "<<yposition<<" si a gasit comoara."<<endl;
            return;
        }
    if(harta.matrice[xposition][yposition-1]=='*')
        {
            status=2;
            harta.matrice[xposition][yposition-1]='#';
            harta.matrice[xposition][yposition]='#';
            cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition-1<<" si a gasit comoara."<<endl;
            return;
        }
    if(harta.matrice[xposition][yposition+1]=='*')
        {
            status=2;
            harta.matrice[xposition][yposition+1]='#';
            harta.matrice[xposition][yposition]='#';
            cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition+1<<" si a gasit comoara."<<endl;
            return;
        }

    if(xposition<harta.linii/2)
        {
            if(harta.matrice[xposition+1][yposition]==0 && xposition+1<harta.linii)
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition+1][yposition]='1';
                xposition++;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            if(harta.matrice[xposition][yposition-1]==0 && yposition-1>=0)
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition][yposition-1]='1';
                yposition--;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            if(harta.matrice[xposition-1][yposition]==0 && xposition-1>=0)
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition-1][yposition]='1';
                xposition--;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            if(harta.matrice[xposition][yposition+1]==0 && yposition+1<harta.coloane)
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition][yposition+1]='1';
                yposition++;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            else
            {
                status=0;
                harta.matrice[xposition][yposition]='#';
                cout<<"jucatorul 1 a ramas blocat si a pierdut."<<endl;
                return;
            }
         }
    else
        {
            if(harta.matrice[xposition][yposition-1]==0 && yposition-1>=0)

            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition][yposition-1]='1';
                yposition--;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            if(harta.matrice[xposition-1][yposition]==0 && xposition-1>=0)
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition-1][yposition]='1';
                xposition--;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            if(harta.matrice[xposition][yposition+1]==0 && yposition+1<harta.coloane)
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition][yposition+1]='1';
                yposition++;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            if(harta.matrice[xposition+1][yposition]==0 && xposition+1<harta.linii )
            {
                harta.matrice[xposition][yposition]='#';
                harta.matrice[xposition+1][yposition]='1';
                xposition++;
                cout<<"jucatorul 1 s-a mutat pe pozitia "<<xposition<<" "<<yposition<<"."<<endl;
                return;
            }
            else
            {
                status=0;
                harta.matrice[xposition][yposition]='#';
                cout<<"jucatorul 1 a ramas blocat si a pierdut."<<endl;
                return;
            }
         }
}
