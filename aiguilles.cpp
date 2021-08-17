#include"aiguilles.h"
#include<graphics.h>
#include<math.h>

aiguilles::aiguilles(int cx,int cy,int r):graphicprincipal(cx,cy,r){
}

//position d'aiguille d'heure
void aiguilles::aiguille_heure(graphicprincipal C){
	 setlinestyle(0, 0, 3);
    	line(centrex,centrey,centrex+C.getheurscrdnx(),centrey+C.getheurscrdny());	
}
//position d'aiguille de minute
void aiguilles::aiguille_min(graphicprincipal C){
	 setlinestyle(0, 0, 1);
	line(centrex,centrey,centrex+C.getmin_crdnx(),centrey+C.getmin_crdny());
}


//position d'aiguille de second
void aiguilles::aiguille_second(graphicprincipal C){
	setlinestyle(0, 0, 1);
	line(centrex,centrey,centrex+C.getsec_mincrdnx(),centrey+C.getsec_mincrdny());
}

