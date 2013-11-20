#zad1
#Z pliku /etc/passwd wyświetlić nazwy tych użytkowników, którzy korzystają z interpretera tcsh.

BEGIN {FS=":"}
/tcsh/ {print $1} 
