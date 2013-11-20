#Posortować i wypisać z pliku /etc/passwd loginy wszystkich użytkowników. 

BEGIN {FS=":"} {print $1} # |sort
