#include"tempt.h"
 #include"graphicprincipal.h"
 #ifndef date_
 #define date_



class la_date:public tempt,public graphicprincipal{
	
	public:
		
	       la_date(int,int,int);
	       char* jour_de_sem();
           char* mois();
	       int annee();
	       int nbr_jour();
	       void virtual dessiner();
};


#endif
