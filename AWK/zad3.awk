#Z pliku /etc/passwd wypisać dane użytkowników należących do grupy pracown (zobacz w /etc/group).

BEGIN {FS=":"}
/home/pracown/ {print $1} 
