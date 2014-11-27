/**
* Fichier Sujet.hpp
* @author Pierre Gaultier & Theo Dolez
*/

#ifndef Sujet_HPP
#define Sujet_HPP
#include <string> // pour le type std::string
#include "Observer.hpp" 



/******************************************************************************/

class Sujet
{

	private:
		
	
	public:
		
		void virtual enregistrerObs(Observer* O)= 0;
		void virtual supprimerObs(Observer* O)= 0;
		void virtual notifierObs()= 0;
		
		
		
		
};

#endif // Observer_HPP		
