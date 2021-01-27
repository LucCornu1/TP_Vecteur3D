#pragma once
#include <iostream>

using namespace std;

template <class T> class Vecteur_3D
{
private:
	T m_tX;
	T m_tY;
	T m_tZ;

public:
	// Constructeur
	Vecteur_3D(T x = 0.f, T y = 0.f, T z = 0.f);

	// Constructeur par copie
	Vecteur_3D(const Vecteur_3D&);

	// Destructeur
	~Vecteur_3D();


	// Fonctions membres
	Vecteur_3D addition(Vecteur_3D);

	Vecteur_3D soustraction(Vecteur_3D);

	Vecteur_3D multiplication_scalaire(T sca);

	T produit_scalaire(Vecteur_3D);

	Vecteur_3D produit_vectoriel(Vecteur_3D);

	void affiche();


	// Fonctions amies
	friend bool coincide(Vecteur_3D V, Vecteur_3D W)
	{
		return V.m_tX == W.m_tX && V.m_tY == W.m_tY && V.m_tZ == W.m_tZ;
	}
};


// Constructeur
template <class T> inline Vecteur_3D<T>::Vecteur_3D(T tX, T tY, T tZ)
{
	this->m_tX = tX;
	this->m_tY = tY;
	this->m_tZ = tZ;
}

// Constructeur par copie
template <class T> inline Vecteur_3D<T>::Vecteur_3D(const Vecteur_3D& vect)
{
	this->m_tX = vect.m_tX;
	this->m_tY = vect.m_tY;
	this->m_tZ = vect.m_tZ;
}

// Destructeur
template <class T> inline Vecteur_3D<T>::~Vecteur_3D()
{
	// Objet d�truit
}


// Fonctions membres
template <class T> inline Vecteur_3D<T> Vecteur_3D<T>::addition(Vecteur_3D vect)
{
	Vecteur_3D<T> V;

	V.m_tX = this->m_tX + vect.m_tX;
	V.m_tY = this->m_tY + vect.m_tY;
	V.m_tZ = this->m_tZ + vect.m_tZ;

	return V;
}

template <class T> inline Vecteur_3D<T> Vecteur_3D<T>::soustraction(Vecteur_3D vect)
{
	Vecteur_3D<T> V;

	V.m_tX = this->m_tX - vect.m_tX;
	V.m_tY = this->m_tY - vect.m_tY;
	V.m_tZ = this->m_tZ - vect.m_tZ;

	return V;
}

template <class T> inline Vecteur_3D<T> Vecteur_3D<T>::multiplication_scalaire(T t_Sca)
{
	Vecteur_3D<T> V;

	V.m_tX = this->m_tX * t_Sca;
	V.m_tY = this->m_tY * t_Sca;
	V.m_tZ = this->m_tZ * t_Sca;

	return V;
}

template <class T> inline T Vecteur_3D<T>::produit_scalaire(Vecteur_3D vect)
{
	return this->m_tX * vect.m_tX + this->m_tY * vect.m_tY + this->m_tZ * vect.m_tZ;
}

template <class T> inline Vecteur_3D<T> Vecteur_3D<T>::produit_vectoriel(Vecteur_3D vect)
{
	Vecteur_3D<T> V;

	V.m_tX = this->m_tY * vect.m_tZ - this->m_tZ * vect.m_tY;
	V.m_tY = this->m_tZ * vect.m_tX - this->m_tX * vect.m_tZ;
	V.m_tZ = this->m_tX * vect.m_tY - this->m_tY * vect.m_tX;

	return V;
}

template <class T> inline void Vecteur_3D<T>::affiche()
{
	cout << "X : " << this->m_tX << ", Y : " << this->m_tY << ", Z : " << this->m_tZ;
}