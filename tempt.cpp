#include"tempt.h"
#include<time.h>
#include<graphics.h>

tempt::tempt(){
	       //*****************************************
             	time_t t = time( NULL );
                struct tm temp= *localtime( &t );
            //******************************************    
                heure=temp.tm_hour;//fonction qui afficher l'heure actual de 0 vers 11
                minute=temp.tm_min;//fonction qui afficher minute actual de 0 vers 59
	            second=temp.tm_sec;//fonction qui afficher second actual de 0 vers 59
             	semaine=temp.tm_mday;//fonction qui afficher le nombre de jour de semaine de 0 a 6
             	mois_=temp.tm_mon;//fonction qui afficher le mois actual  au forme de nombre de 0 vers 11
	            nb_jour=temp.tm_wday;//fonction qui afficher le jour d'aujordhui 
	            annee_=temp.tm_year;//fonction qui afficher l'annee actual
	
}
//les getter pour les afficher les attrib
int tempt::getheur(){
	                 return heure;
}

int tempt::getminute(){
                	return minute;
}

int tempt::getsecond(){
                 	return second;
} 


int tempt::getsemaine(){
	                return semaine;
}


int tempt::getnb_jour(){
	                return nb_jour;
}


int tempt::getmois(){
	                return mois_;
}


int tempt::getannee(){
                	return annee_;
}





