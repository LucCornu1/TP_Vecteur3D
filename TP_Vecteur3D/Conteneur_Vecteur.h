#pragma once
#include "Vecteur_2D.h"

template <class V, int n> class Conteneur_Vecteur
{
private:
	V m_tab[n];

public:
	// Constructeur
	Conteneur_Vecteur();

	// Destructeur
	~Conteneur_Vecteur();


	// Fonctions membres
	// V operator[](const int i) const;

	V& operator[](const int i);


	// Fonctions amies
	friend ostream& operator<<(ostream& os, Conteneur_Vecteur& tab)
	{
		for (int i = 0; i < n; i++)
		{
			os << tab[i] << endl;
		}
		return os;
	}
};


// Constructeur
template <class V, int n> inline Conteneur_Vecteur<V, n>::Conteneur_Vecteur()
{
	// Constructeur vide
}

// Destructeur
template <class V, int n> inline Conteneur_Vecteur<V, n>::~Conteneur_Vecteur()
{
	// Destructeur vide
}


// Fonctions membres
/*template <class V, int n> inline V Conteneur_Vecteur<V, n>::operator[](const int i) const
{
	if ((i >= 0) && (i < n))
	{
		return this->m_tab[i];
	}
	else {
		cout << "Vous êtes hors du tableau" << endl;
		return this->m_tab[0];
	}
}*/

template <class V, int n> inline V& Conteneur_Vecteur<V, n>::operator[](const int i)
{
	if ((i >= 0) && (i < n))
	{
		return this->m_tab[i];
	}
	else {
		cout << "Vous êtes hors du tableau" << endl;
		return this->m_tab[0];
	}
}
