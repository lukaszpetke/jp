#skrypt dla zadania nr.1
#program sprawdza czy w katalogu w którym się znajdujemy istnieje plik zadanie2.bash

if [ -e zadanie2.bash ]  # -e służy do sprawdzenia czy podany plik istnieje 
then echo "Masz plik zadanie2.bash"
else echo "Nie masz pliku zadanie2.bash"
fi

exit 0
