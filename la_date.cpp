#include<graphics.h>
#include<stdio.h>
#include"la_date.h"

la_date::la_date(int cx,int cy,int r):graphicprincipal(cx,cy,r){
}
//************************************************
char* la_date::mois(){
	
	  char* les_mois[12]={"Janvier","Février","Mars","Avril","Mai","Juin","Juillet","Août","Septembre","Octobre","Novembre","Décembre"};
	  return les_mois[mois_];		
}


//********************************************************
int la_date::annee(){
	                int l=annee_+1900;
                	return l;

	
}
//******************************************************
int la_date::nbr_jour(){

                        return semaine;	
}


//*********************************************************
char* la_date::jour_de_sem(){

		char* nbjr[7]={"Dimanche","Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi"};
		return nbjr[nb_jour];
	
}


//fct pour la date
void la_date::dessiner(){
setcolor(WHITE);
	
	char e[100];
	sprintf(e,"%s %d %s %d",jour_de_sem(),nbr_jour(),mois(),annee());
	int width_txt=textwidth(e);
	int height_cdr=textheight(e);
	outtextxy(centrex-width_txt/2,centrey+rayon+(0.3*rayon),e);
	rectangle(centrex-width_txt/2-(0.2*rayon),centrey+rayon+(0.2*rayon),centrex+width_txt/2+(0.2*rayon),centrey+rayon+(0.3*rayon)+height_cdr+(0.1*rayon));	
	
	
	
}



