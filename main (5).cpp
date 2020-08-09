#include <iostream>
#include "player.h"
#include "player1.h"
#include "player2.h"
#include "player3.h"
#include "player4.h"
#include "map.h"

using namespace std;

int main()
{
    map harta(20,20);          //declar o harta de 20 x 20
    player1 ss(0,0,harta);     //declar un jucator de tip player1 in colt stanga sus
    player2 ds(0,19,harta);    //declar un jucator de tip player2 in colt dreapta sus
    player3 sj(19,0,harta);    //declar un jucator de tip player3 in cont stanga jos
    player4 dj(19,19,harta);   //declar un jucator de tip player4 in colt dreapta jos
    int nrplayers=4;
    int nrcomori=3;
    cout<<"START"<<endl;
    cout<<harta;

    while(nrplayers>0 && nrcomori>0)//jocul merge pana cand nu mai sunt comori sau nu mai sunt jucatori
    {
        //pentru jucatorul 1
        if(ss.getstatus()==1)     //daca inca este in joc
            ss.move(harta);       //apelez functia de mutare
        else if(ss.getstatus()==2)//daca a castigat in tura trecuta
        {
            ss.makestatus(3);//schimb statusul in 3
            nrcomori--;      //scad numarul de comori
            nrplayers--;     //scad numarul de jucatori
            if (nrplayers==0 || nrcomori==0)//daca numarul de jucatori sau nuamrul de comori=0
                break;       //end game
        }
        else if(ss.getstatus()==0)//daca tura trecuta jucatorul a ramas blocat
            {
            nrplayers--;        //scad numarul de jucatori
            ss.makestatus(3);   //fac statusul 3
            if(nrplayers==0)    //daca nr de jucatori=0
                break;//end game
            }
        //la fel ca pentru jucatorul 1
        if(dj.getstatus()==1)dj.move(harta);
        else if(dj.getstatus()==2)
        {
            dj.makestatus(3);
            nrcomori--;
            nrplayers--;
            if (nrplayers==0 || nrcomori==0)
                break;
        }
        else if(dj.getstatus()==0)
        {
            nrplayers--;
            dj.makestatus(3);
            if(nrplayers==0)
                break;
        }
        //la fel ca pentru jucatorul 1
        if(sj.getstatus()==1)sj.move(harta);
        else if(sj.getstatus()==2)
        {
            sj.makestatus(3);
            nrcomori--;
            nrplayers--;
            if (nrplayers==0 || nrcomori==0)
                break;
        }
        else if(sj.getstatus()==0)
        {
            sj.makestatus(3);
            nrplayers--;
            if(nrplayers==0)
                break;
        }
        //la fel ca pentru jucatorul 1
        if(ds.getstatus()==1)ds.move(harta);
        else if(ds.getstatus()==2)
        {
            ds.makestatus(3);
            nrcomori--;
            nrplayers--;
            if (nrplayers==0 || nrcomori==0)
                break;
        }
        else if(ds.getstatus()==0)
        {
            ds.makestatus(3);
            nrplayers--;
            if(nrplayers==0)
                break;
        }
        cout<<harta<<endl;
    }
    cout<<"END GAME";
}
