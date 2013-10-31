#include "Menu.h"
#include <iostream>;
using namespace std;


Menu::Menu(void)
{
}


Menu::~Menu(void)
{
}

int Menu::AfficherMenu()
{
	int choix=0;
	// Menu 
	do
	{
	cout<<"1) Ouvrir une caisse "<<endl
		<<"2) Mettre un client en attente "<<endl
		<<"3) Un client termine a une caisse "<<endl
		<<"4) Fermer une caisse ";
	
	cout<<"Indiquer votre choix";
	cin>>choix;
	}
	while(choix !=1 || choix !=2 || choix!=3 || choix !=4);

	return choix;
	
}

void Menu::FonctionMenu()
{
	int choix = AfficherMenu();

	switch(choix)
	{
	case 1:
		{
			break;
		}
	case 2:
		{

			break;
		}
	case 3:
		{
			break;
		}
	case 4:
		{
			break;
		}
	}

}