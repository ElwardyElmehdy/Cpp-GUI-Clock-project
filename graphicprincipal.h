#ifndef grph_
#define grph_

class graphicprincipal{
	protected:
		      int centrex;
	          int centrey;
	          int rayon;
		      int sec_mincrdnx;
		      int sec_mincrdny;
		     int min_crdnx;
		     int min_crdny;
		      int heurscrdnx;
	          int heurscrdny;
	public:
		      graphicprincipal();
		      graphicprincipal(int,int,int);
		      ~graphicprincipal();
	          void setsec_mincrdnx_calcul(int);
          	  void setsec_mincrdny_calcul(int);
	          void heurscrdnx_calcul(int);
	          void heurscrdny_calcul(int);
		
		
		
	         int getcentrx();
             int getcentry();
	         int getsec_mincrdnx();
	         int getsec_mincrdny();
	         int getmin_crdnx();
		     int getmin_crdny();
	         int getheurscrdnx();
	         int getheurscrdny();
		     void princpcercle();//le cercle exterieur
		     void virtual dessiner();//les nombre dans l'hologe
		     void centr_cercle();//cercle dans centre
		
			
};
#endif
