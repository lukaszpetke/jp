#Z pliku /etc/passwd wyświetlić nazwy tych użytkowników, którzy nie mają wypełnionego pola numer 5 (dodatkowe informacje o użytkowniku).

BEGIN {FS=":"} $5 =="" {print $1}
