#Przepisz z pliku wejściowego liczby.txt linie, które są liczbami rzeczywistymi.

#BEGIN {cyfry="^[0-9]+$" }; $0 ~cyfry 


{printf "%f\n", $1}
