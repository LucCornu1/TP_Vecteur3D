#include "Vecteur_3D.h"

int main()
{
	Vecteur_3D<float> V1(1.14f, 2.3f, 3.f), V2(4.54f, 5.11f, 6.2f);

	/*V1.affiche();
	cout << endl << endl;
	V2.affiche();
	cout << endl << endl;

	bool b = coincide(V1, V2);
	if (b)
	{
		cout << "TRUE" << endl << endl;
	}
	else {
		cout << "FALSE" << endl << endl;
	}

	Vecteur_3D<float> V3;
	V3 = V1.addition(V2);

	cout << "Addition :" << endl;
	V3.affiche();
	cout << endl << endl;

	V3 = V1.soustraction(V2);

	cout << "Soustraction :" << endl;
	V3.affiche();
	cout << endl << endl;

	V3 = V1.multiplication_scalaire(10.f);

	cout << "Multiplication par un scalaire :" << endl;
	V3.affiche();
	cout << endl << endl;

	cout << "Produit scalaire :" << endl;
	cout << V1.produit_scalaire(V2) << endl << endl;

	V3 = V1.produit_vectoriel(V2);

	cout << "Produit vectoriel :" << endl;
	V3.affiche();
	cout << endl << endl;*/


	cout << V1 << endl << endl;
	cout << V2 << endl << endl;

	Vecteur_3D<float> V3;
	V3 = V1 + V2;

	cout << "Addition :" << endl;
	cout << V3 << endl << endl;

	V3 = V1 - V2;

	cout << "Soustraction :" << endl;
	cout << V3 << endl << endl;

	V3 = V1 * 10.f;

	cout << "Multiplication par un scalaire :" << endl;
	cout << V3 << endl << endl;

	cout << "Produit scalaire :" << endl;
	cout << V1 * V2 << endl << endl;

	V3 = V1 ^ V2;

	cout << "Produit vectoriel :" << endl;
	cout << V3 << endl << endl;
}