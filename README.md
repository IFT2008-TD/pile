# pile_squelette_projet
Comme son nom l'indique, ce dépôt contient un squelette de projet utilisé dans le premier TD du cours IFT-2008.  Le but du projet est d'implanter une pile rudimentaire.

## Liste des méthodes

- Constructeur
  - Construit une pile initialement vide ayant une capacité maximale donnée
  
- push  
    - Ajoute un élément sur le dessus de la pile
- pop
  - Retire l'élément sur le dessus de la pile
- vide
  - Indique que la pile est vide
- pleine
  - Indique que la pile est complement remplie

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
  - Retourne true sur une pile pleine
  - Retourne false sur une pile non-pleine