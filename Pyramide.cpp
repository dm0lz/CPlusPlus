void pyramide()
{
	int choixUti=0, nbreEspace=0 ,init=1;
	cout << "\nEntrez votre choix: ";
	cin>>choixUti;
	cout << "\n\n";
	nbreEspace= choixUti;

	for(int i = 0;i<nbreEspace; i++)
	{
		afficheEspaces(nbreEspace-i);		
		afficheNombresCroissants(init);
		afficheNombresDecroissants(init);
		afficheEspaces(nbreEspace-i);
		init++;
		cout <<endl;
	}
}