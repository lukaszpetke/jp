#skrypt dla zadania nr.1
#program sprawdza czy w katalogu w którym się znajdujemy istnieje plik skrypt2.bash

if [ -e skrypt2.bash ]
then echo "Masz plik skrypt2.bash"
else echo "Nie masz pliku skrypt2.bash"
fi

exit 0