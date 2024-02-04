# Pile
Comme son nom l'indique, ce dépôt contient un squelette de projet utilisé dans le premier TD du cours IFT-2008.  Le but du projet est d'implanter une pile rudimentaire.

## Objectifs de l'activité

- Savoir utiliser l'IDE CLion afin de développer un projet
- Se familiariser avec la structure de données vector
- Utiliser les tests unitaires afin de faciliter le développement
- Se familiariser avec le concept de pile
- Se familiariser avec l'utilisation des classes paramétrées (class templates) afin de rendre la programmation générique 

## Étapes à suivre

- Bien lire le README
- Cloner le projet dans la VM avec l'instruction 
  ```git clone https://github.com/IFT2008-TD/Pile.git```
- Étape 1: Réfléchir...
  - Comprendre le mécanisme de la pile
  - Comprendre les comportements attendus de chaque méthode
  - Bien analyser le fichier Pile.h, il contient l'interface de la classe ainsi qu'un modèle d'implantation avec la structure de données vector.
- Étape 2: Écrire les tests appropriés correspondant aux comportements attendus
  - Les tests seront dans le fichier tests_pile.cpp.  Une série de tests est suggérée afin de vous inspirer.
  - Notez que ces tests sont bidon et vous devez les remplacer par les vôtres
- Étape 3: Constatez que les tests plantent
  - C'est normal vous n'avez encore rien programmé...
- Étape 4: Faites passer tous les tests en complétant l'implantation des méthodes dans PileImplementation.h
  - Vous faites progresser votre implantation test par test. 

## Liste des méthodes

- Constructeur
  - Construit une pile initialement vide ayant une capacité maximale donnée 
- push  
  - Ajoute un élément sur le dessus de la pile
- top
  - Lit l'élément sur le dessus de la pile, mais ne le retire pas
- pop
  - Retire l'élément sur le dessus de la pile, mais ne le lit pas
- vide
  - Indique que la pile est vide
- pleine
  - Indique que la pile est complement remplie
- disponible
  - Compte le nombre d'insertions encore possible avant saturation
- redimensionner
  - Augmente ou diminue la capacité de la pile

## Comportements attendus

- Constructeur
  - Lance une exception si on tente de construire une pile de capacité maximale 0
  - Ne lance pas d'exception autrement
  - La pile est vide lorsqu'elle est créée.
- push
  - Si la pile est initialement vide, après push, elle ne l'est plus
  - Après push(valeur), l'élément sur le dessus de la pile est valeur.
  - Lance une exception si la pile est pleine
- pop
  - Retourne la valeur de l'élément sur le dessus de la pile
  - Après pop sur le dernier élément, la pile est de nouveau vide
  - Lance une exception si la pile est vide
  - Si des éléments sont insérés dans l'ordre sur la pile, ils sont retirés dans l'ordre inverse, en LIFO
- vide
  - Retourne true sur une pile vide
  - Retourne false sur une pile non-vide
- pleine
  - Retourne true sur une pile pleine: une tentative de push résultera en une exception
  - Retourne false sur une pile non-pleine