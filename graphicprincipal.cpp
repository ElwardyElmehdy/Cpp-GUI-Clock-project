#include"graphicprincipal.h"
#include<graphics.h>
#include<math.h>

//constructeur par defaut
graphicprincipal::graphicprincipal(){
      centrex=399;
      centrey=299;	
	  rayon=100;				
}

//constructeur par defaut par argement
graphicprincipal::graphicprincipal(int cx,int cy,int r){
	 centrex=cx;
	 centrey=cy;	
	 rayon=r;
}


//fonction qui calcule le coordonne de x des aiguilles de second et min
void graphicprincipal::setsec_mincrdnx_calcul(int m_s_x){
		
	
	  float pi=3.14,ang=(2*pi)/60;
	  sec_mincrdnx=sin( m_s_x*ang)*(0.85*rayon);
	  min_crdnx=sin( m_s_x*ang)*(0.75*rayon);
					
			
		}
		
//fonction qui calcule le coordonne de y des aiguilles de second et min		
void graphicprincipal::setsec_mincrdny_calcul( int m_s_y)	{
		
		float pi=3.14,ang=(2*pi)/60;
		sec_mincrdny=-cos( m_s_y*ang)*(0.85*rayon);
		min_crdny=-cos( m_s_y*ang)*(0.75*rayon);
					
						
		}
		
		
		

//fonction qui calcule le coordonne de x des aiguilles de heure	
void graphicprincipal::heurscrdnx_calcul(int h_x){
	
		float pi=3.14,ang=(2*pi)/12;
		heurscrdnx=sin(h_x*ang)*(0.5*rayon);
						
		}
	
//fonction qui calcule le coordonne de y des aiguilles de heure
void graphicprincipal::heurscrdny_calcul(int h_y){
	
			
		float pi=3.14,ang=(2*pi)/12;
		heurscrdny=-cos(h_y*ang)*(0.5*rayon);		
			
		}
	
	
	

	
//deconstrecteur
graphicprincipal::~graphicprincipal(){
}
    
    
    
/// ensemble des getter
int graphicprincipal::getcentrx(){
	return centrex;
}
//**********************************************
int graphicprincipal::getcentry(){
	return centrey;
}  
///****************************************

int graphicprincipal::getsec_mincrdnx(){
	return sec_mincrdnx;	
}
//**********************************************
int graphicprincipal::getsec_mincrdny(){
	return sec_mincrdny;
}
//***********************************************
int graphicprincipal::getmin_crdnx(){
	return min_crdnx;
}
//**********************************************
int graphicprincipal::getmin_crdny(){
	return min_crdny;
}

//**********************************************
int graphicprincipal::getheurscrdnx(){
return heurscrdnx;
}
//**********************************************
int graphicprincipal::getheurscrdny(){
return	heurscrdny;
}

//fonction pour cerlce exterieur
void graphicprincipal::princpcercle(){
	circle(centrex,centrey,rayon);
}  

//fonction pour cercle central
void graphicprincipal::centr_cercle(){
	fillellipse(centrex,centrey,0.1*rayon,0.1*rayon);
}

//fonction pour les nombre d'horloge
void graphicprincipal::dessiner(){
   	float pi=3.14,ang=(2*pi)/12;
    int font=(rayon-20)/20;
    
    //boucle if pour maximizer le taille des nombre d'horloge
    if(rayon>180){
	font=8;
	}
	setcolor(WHITE);
	settextstyle(2, HORIZ_DIR ,1+(rayon-20)/20 );//la taille d'horloge en fct de rayon
	
	char* nomb[12]={"12","1","2","3","4","5","6","7","8","9","10","11"};
    

     for(int i=0;i<12;i++){
                           	int width=textwidth(nomb[i]);
                            int height=textheight(nomb[i]);
                          	outtextxy(centrex+(rayon*0.85)*sin(i*ang)-width/2,centrey-(rayon*0.85)*cos(ang*i)-height/2,nomb[i]);
   }

}







		



