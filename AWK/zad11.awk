#Z pliku telefony.txt wypisać imiona i nazwiska wszystkich osób, których telefony zaczynają się od 058.

$NF ~ /^058/ {print $2" "$1}
