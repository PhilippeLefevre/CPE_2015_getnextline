# CPE_2015_getnextline

01 - Static / Buffering: 3/3
* 01 - Lecture de la premiere ligne: OK
* 02 - Lecture compléte d'un petit fichier: OK
* 03 - Lecture compléte d'un gros fichier: OK

02 - Utilisation de la macro READ_SIZE: 7/7
* 01 - Taille 1: OK
* 02 - Taille inférieur à la longueur de la ligne: OK
* 03 - Taille égale à la longueur de la ligne: OK
* 04 - Taille supérieure à la longueur de la ligne: OK
* 05 - Taille inférieur à la longueur du fichier: OK
* 06 - Taille égale à la longueur du fichier: OK
* 07 - Taille supérieure à la longueur du fichier: OK

03 - Cas particuliers: 4/4
* 01 - Une seule ligne vide: OK
* 02 - Plusieurs lignes vides: OK
* 03 - Une seule ligne sans \n: OK
* 04 - Fichier vide: OK

04 - Gestion d'erreurs: 2/2
* 01 - File descriptor invalide: OK
* 02 - Malloc failure: OK

Tests passed: 100% (16/16)
