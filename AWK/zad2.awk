#Z pliku /etc/passwd wyliczyć sumę i średnią arytmetyczną wszystkich numerów UID.

BEGIN{FS=":"; s=0;} #FS - separator pól
{s=s+$3} #$3 jest naszym /etc/passwd
END{srednia=s/NR; print "srednia:", srednia", suma", s;} #NR - liczba przeczytanych rekordów
