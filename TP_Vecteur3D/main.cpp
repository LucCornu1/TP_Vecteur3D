#include "Vecteur_3D.h"
#include "Vecteur_2D.h"
#include "Conteneur_Vecteur.h"

int main()
{
	// Travail 1 version 1
	/*cout << "Travail 1 version 1 :" << endl << endl;


	Vecteur_3D<float> V1(1.14f, 2.3f, 3.f), V2(4.54f, 5.11f, 6.2f);

	V1.affiche();
	cout << endl << endl;
	V2.affiche();
	cout << endl << endl;

	cout << "V1 = V2 ? ";
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
	cout << endl << endl << endl << endl;




	// Travail 1 version 2
	cout << "Travail 1 version 2 :" << endl << endl;


	cout << V1 << endl << endl;
	cout << V2 << endl << endl;

	cout << "V1 = V2 ? ";
	if (V1 == V2)
	{
		cout << "TRUE" << endl << endl;
	}
	else {
		cout << "FALSE" << endl << endl;
	}

	Vecteur_3D<float> V4;
	V4 = V1 + V2;

	cout << "Addition :" << endl;
	cout << V4 << endl << endl;

	V4 = V1 - V2;

	cout << "Soustraction :" << endl;
	cout << V4 << endl << endl;

	V4 = V1 * 10.f;

	cout << "Multiplication par un scalaire :" << endl;
	cout << V4 << endl << endl;

	cout << "Produit scalaire :" << endl;
	cout << V1 * V2 << endl << endl;

	V4 = V1 ^ V2;

	cout << "Produit vectoriel :" << endl;
	cout << V4 << endl << endl << endl << endl;



	// Travail 2
	cout << "Travail 2 :" << endl << endl;


	Vecteur_2D<float> V10(1.14f, 2.3f), V11(1.14f, 2.3f);

	V10.affiche();
	cout << endl << endl;
	cout << V11 << endl << endl;

	cout << "V10 = V11 ? ";
	if (V10 == V11)
	{
		cout << "TRUE" << endl << endl;
	}
	else {
		cout << "FALSE" << endl << endl;
	}

	cout << "V10 = V11 ? ";
	if (coincide(V10, V11))
	{
		cout << "TRUE" << endl << endl;
	}
	else {
		cout << "FALSE" << endl << endl;
	}

	Vecteur_2D<float> V5;
	V5 = V10 + V11;

	cout << "Addition :" << endl;
	cout << V5 << endl << endl;

	V5 = V10 - V11;

	cout << "Soustraction :" << endl;
	cout << V5 << endl << endl;

	V5 = V10 * 10.f;

	cout << "Multiplication par un scalaire :" << endl;
	cout << V5 << endl << endl;

	cout << "Produit scalaire :" << endl;
	cout << V10 * V11 << endl << endl;

	V5 = V10 ^ V11;

	cout << "Produit vectoriel :" << endl;
	cout << V5 << endl << endl;*/




	// Travail 3


	Vecteur_3D<float> V01(1.14f, 2.3f, 3.f), V02(4.54f, 5.11f, 6.2f), V03(2.39f, 15.f, 7.3f);

	Vecteur_2D<float> V001(1.14f, 2.3f), V002(4.54f, 6.2f), V003(15.f, 7.3f);


	Conteneur_Vecteur<Vecteur_3D<float>, 3> tab3D;

	tab3D[0] = V01;
	tab3D[1] = V02;
	tab3D[2] = V03;

	cout << tab3D << endl << endl;


	Conteneur_Vecteur<Vecteur_2D<float>, 3> tab2D;

	tab2D[0] = V001;
	tab2D[1] = V002;
	tab2D[2] = V003;

	cout << tab2D << endl << endl;
}