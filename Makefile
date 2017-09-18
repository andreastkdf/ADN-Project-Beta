adn :
	gcc Distance.c  DistanceMinIter.c  DistanceMinRec.c  main.c  Minimum.c  SequenceAleatoire.c  -o adn

clean : 

	rm -f adn *~

init:
	touch resultatsite.txt resultatsrec.txt
