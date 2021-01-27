#pragma once
#include "Vecteur_3D.h"

template <class T> class Vecteur_2D : public Vecteur_3D<T>
{
public:
	// Constructeur
	Vecteur_2D(T x = 0.f, T z = 0.f);

	// Constructeur par copie
	Vecteur_2D(const Vecteur_2D&);

	// Destructeur
	~Vecteur_2D();


	// Fonctions membres
	void affiche();


	// Surcharge operator
	void operator=(const Vecteur_2D);

	bool operator==(const Vecteur_2D);

	Vecteur_2D operator+(const Vecteur_2D);

	Vecteur_2D operator-(const Vecteur_2D);

	Vecteur_2D operator*(const T scalaire);

	T operator*(const Vecteur_2D);

	Vecteur_2D operator^(const Vecteur_2D);
};


// Constructeur
template <class T> inline Vecteur_2D<T>::Vecteur_2D(T tX, T tZ) : Vecteur_3D<T>(tX, static_cast <T>(1.f), tZ)
{
	// Construction du vecteur 2D
}

// Constructeur par copie
template <class T> inline Vecteur_2D<T>::Vecteur_2D(const Vecteur_2D& vect)
{
	// Construction du vecteur 2D
}

// Destructeur
template <class T> inline Vecteur_2D<T>::~Vecteur_2D()
{

}


// Fonctions membres
template <class T> inline void Vecteur_2D<T>::affiche()
{
	Vecteur_3D<T>::affiche();
}


// Surcharge operator
template <class T> inline void Vecteur_2D<T>::operator=(const Vecteur_2D vect)
{
	this->m_tX = vect.m_tX;
	this->m_tZ = vect.m_tZ;
}


template <class T> inline bool Vecteur_2D<T>::operator==(const Vecteur_2D vect)
{
	return this->m_tX == vect.m_tX && this->m_tZ == vect.m_tZ;
}

template <class T> inline Vecteur_2D<T> Vecteur_2D<T>::operator+(const Vecteur_2D vect)
{
	Vecteur_2D<T> V;

	V.m_tX = this->m_tX + vect.m_tX;
	V.m_tZ = this->m_tZ + vect.m_tZ;

	return V;
}

template <class T> inline Vecteur_2D<T> Vecteur_2D<T>::operator-(const Vecteur_2D vect)
{
	Vecteur_2D<T> V;

	V.m_tX = this->m_tX - vect.m_tX;
	V.m_tZ = this->m_tZ - vect.m_tZ;

	return V;
}

template <class T> inline Vecteur_2D<T> Vecteur_2D<T>::operator*(const T t_Sca)
{
	Vecteur_2D<T> V;

	V.m_tX = this->m_tX * t_Sca;
	V.m_tZ = this->m_tZ * t_Sca;

	return V;
}

template <class T> inline T Vecteur_2D<T>::operator*(const Vecteur_2D vect)
{
	return this->m_tX * vect.m_tX + this->m_tZ * vect.m_tZ;
}

template <class T> inline Vecteur_2D<T> Vecteur_2D<T>::operator^(const Vecteur_2D vect)
{
	/*Vecteur_2D<T> V;

	V.m_tX = this->m_tY * vect.m_tZ - this->m_tZ * vect.m_tY;
	V.m_tZ = this->m_tX * vect.m_tY - this->m_tY * vect.m_tX;

	return V;*/
	return vect;
}
