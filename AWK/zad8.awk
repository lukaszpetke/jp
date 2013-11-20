#Przepisz plik wejściowy puste_linie.txt zastępując kolejne puste wiersze, jednym pustym wierszem.

NF == 0 {a++}
NF > 0 {if (a > 0) print " " ; a =0; print $0;}
