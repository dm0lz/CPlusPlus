#include <iostream>

//exo 1
double choixUti=0;
do{
	cout << "donner un nbre positif";
	cin>>choixUti;
	if(choixUti>0)
	{
		cout<<"la racine carre est"<<sqrt(choixUti);
	}else if (choixUti<0) 
		{
cout>>"sup positif";
		}
		}while(choixUti !=0)
		cout<<"au revoir";
		
//exo 2
		float calcul (float nb1,nb2 ; char caractere)
		{
			float resultat=0;
			
			if (caractere=='+') {
				resultat=nb1+nb2;
			}else if (caractere=='-') {
				resultat=nb1-nb2;
			}else if (caractere=='/') {
				if (nb2==0) {
					resultat=0;
				}else{
				
					resultat=nb1/nb2;}
			}else{
				resultat=nb1+nb2;
			}
			return resultat;
		}
		
		//autre possiblite
		float resultat=0;
		switch ('caractere') {
			case '+':
				resultat=nb1+nb2;
				break;
			
			case '-':
				resultat=nb1-nb2;
				break;

			default:
				resultat=nb1+nb2;
				break;
		}
	
//exo3
		
		
		
		/*	declarer struct
		
		 struct Date {
			int jour;
			int mois;
			int annee;
		}
		 */
		
void afficherDate (Date dateRecu)
		{
			cout << dateRecu jour<<"/"<<dateRecu mois<<"/"<<dateRecu annee;
		}
void afficherPersonne (Personne personneRecu)
		{
			cout<< personneRecu.nom <<endl;
			cout<<"date d'embauche"<<afficheDate (personneRecu.dateEmbauche)<<endl;
			cout<<"en poste depuis le"<<afficheDate(personneRecu.datePoste);
		}



//exo4

Personne creerpersonne()
		{
			Personne personne1;
cout<<"entrer votre nom";
			cin>>personne1.nom;
cout<<" quelle est votre date embauche";
			cin>>personne1.dateEmbauche.jour>>personne1.dateEmbauche.mois>>personne1.dateEmbauche.annee<<endl;

			char reponse;
cout <<"la date d'embuache et celle du poste sont elles identiques";
			cin>>reponse;
			if(reponse=='y')
			{personne1.dateEmbauche=personne1.datePoste
			}else 
			{cout<< "date poste ??";
				cin>>personne1.datePoste.jour<<personne1.datePoste.mois<<personne1.datePoste.annee;
			}
			return peronne1;
		}