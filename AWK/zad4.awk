#Z pliku /etc/passwd wypisać wszystkie wpisy o innych użytkownikach niż root, których UID jest równy 0, w przeciwnym przypadku wypisać test informujący, że takich użytkowników nie znaleziono.

BEGIN {FS=":"}
$1!="root" && $3=="0"{brak++;print $1}
END {if(brak==0) print"brak uzytkownikow"}
