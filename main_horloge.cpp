#include"la_date.h"
#include"graphicprincipal.h"
#include"aiguilles.h"
#include<graphics.h>
#include<time.h>
#include"tempt.h"
#include<iostream>
#include<windows.h>



using namespace std;

int main(){
	int x,y,r;
	cout<<"entre les coordonnes de position d'horloge : \n";
	cout<<"entre le coordonnes de x : \n";
	cin>>x;
	cout<<"entre le coordonnes de y : \n";
	cin>>y;
	cout<<"entre le rayon r : \n";
	cin>>r;
	
	initwindow(600,600,"horloge mini projet");
	
	
    //	int page=0;			
	POINT cursorPosition;
			
	while(1){

              //setactivepage(page);
              //setvisualpage(1-page);
                setlinestyle(0, 0, 2);//le style d'horloge
 
 //******************************************************
 
      //des fonction pour controler l'horloge a l'aide de souris et button up et down      
               if(GetAsyncKeyState(VK_RBUTTON)){
                                               	GetCursorPos(&cursorPosition);
                                                x=cursorPosition.x;
                                                y=cursorPosition.y;
                }
                
                if(GetAsyncKeyState(VK_LBUTTON)){
                                                int maxx=getmaxx();
                                                int maxy=getmaxy();
                                                x=maxx/2;
                                                y=maxy/2;
                                                r=((maxx/10)*2+(maxy/10)*2)/2;
				} 



                if(GetAsyncKeyState(VK_UP)){
	                                        GetCursorPos(&cursorPosition);
                                            r=r+10;
                }

                if(GetAsyncKeyState(VK_DOWN)){
	                                        GetCursorPos(&cursorPosition);
                                            r=r-10;
                                             }


 //definer des objet
	   aiguilles aiguille(x,y,r);//objet de class aiguilles
	   graphicprincipal g(x,y,r);//objet de class graphicprincipal
	   la_date date(x,y,r);//objet de class la_date
	   tempt t;//objet de class tempt
	   graphicprincipal *listgraph[2];//
 
 
 //*****************************************
  	   
       listgraph[0]=&g;//les nombre dans l'horloge
       listgraph[1]=&date;	//la date et le cadre
       for(int i=0;i<2;i++){
                        	listgraph[i]->dessiner();
       }


	 
	   
	   //cercle principale
	   setcolor(WHITE);//colore de cercle principale
	  g.princpcercle();
	   
	   //cercle de centre
	   setcolor(WHITE);//color de cercle de centre
	   g.centr_cercle();
	   
	   
	   
	   	
	   	//*****************************************************
	   	//l'aiguille de minute
		g.setsec_mincrdnx_calcul(t.getminute());
		g.setsec_mincrdny_calcul(t.getminute());
		
	   setcolor(GREEN);//colore de l'aiguille de minute
	   aiguille.aiguille_min(g);
	   
	   
	//*********************************************************	
	//l'aiguille de second
	    g.setsec_mincrdnx_calcul(t.getsecond());
		g.setsec_mincrdny_calcul(t.getsecond());
		
	   setcolor(RED);//colore d'aiguille de second
	   aiguille.aiguille_second(g);
	   
	   
	   //******************************************************
	   //l'aiguille d'heure
		g.heurscrdnx_calcul(t.getheur());
		g.heurscrdny_calcul(t.getheur());

	   
	   setcolor(WHITE);//colore de l'aiguille d'heure
	   aiguille.aiguille_heure(g);
	   
	  //********************************************************
	 
	   //page=1-page;
	   delay(1000);
	   cleardevice();
	}
	
	
	getch();
	return 0;
}



