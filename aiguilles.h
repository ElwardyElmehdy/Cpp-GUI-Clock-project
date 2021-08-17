#include"tempt.h"
 #include"graphicprincipal.h"
 #ifndef aiguilles_
 #define aiguilles_
 
 class aiguilles:public tempt,public graphicprincipal{
 	
 	
	 public:
 		aiguilles(int,int,int);
 		void aiguille_heure(graphicprincipal);//l'aiguille d'heure
 		void aiguille_min(graphicprincipal);//l'aiguille de minute
 		void aiguille_second(graphicprincipal);//l'aiguille de second	
 };
 
 #endif

