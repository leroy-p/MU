# Le jeu de carte

Un jeu de carte (qui s'appelle 'MU') contient des cartes de 5 couleurs​ ​: rouge jaune bleu vert noir. Chaque couleur a des cartes allant de 1 à 12 (donc 5 couleurs de 12 cartes: 60 cartes). 

On peut jouer à 3-4-5 ou 6 joueurs.  Dans tous les cas, la totalité du paquet de cartes est distribuée de façon aléatoire et partagée en fonction du nombre de joueurs.

Le but de l’exercice est de concevoir un système orienté objet qui permet, à la base, de garder en mémoire (avec des objets, sans nécessité de persistance) la distribution des cartes entre les joueurs. 

Le langage de programmation utilisé est laissé à votre choix, mais doit être orienté objet. Choisissez Ruby seulement si vous êtes à l’aise dans le langage.

Pour l’exercice, il n’est pas nécessaire d’avoir d’interface (ni d’affichage console) pour utiliser le jeu codé. L’important est la conception des objets et leurs interactions. Imaginez que quelqu’un d’autre va s’occuper de créer la vue et donc d’ajouter une interface graphique par la suite. 

# Attentes minimales: 
On s'attend à avoir au moins 3 objets et des interactions entre les objets. 
On veut pouvoir garder au moins 2 parties en mémoire en même temps.
On veut pouvoir demander d’afficher la main de chaque joueurs à l'aide d'une méthode.
Code en anglais (variables, classes, noms de fonctions, etc.)

=======================================================================================================================================

Développé en C++.

La classe MU contient deux parties.
La classe Game contient une liste de joueurs (entre 3 et 6) et une liste de 60 cartes prètes a être distribuées.
La classe Player contient une liste de cartes (de taille variable selon le nombre de joueurs et l'état de la partie)
La classe Card contient une couleur et une valeur entre 1 et 12.
