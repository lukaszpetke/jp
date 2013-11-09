#skrypt dla zadania nr.2
#program sprawdza czy w katalogu w którym się znajdujemy istnieje plik skrypt102.bash jeżeli nie, to tworzy go i wpisuje w pierwszej lini wpisuje napis "To jest nowy plik"

tworze=`echo 'To jest nowy plik' >>  skrypt102.bash`
if [ -e skrypt102.bash ]
then echo "Masz plik skrypt102.bash"
else echo "Nie masz pliku skrypt102.bash, ale stworzę, go dla Ciebie :) $tworze"  #jeżeli nie mamy pliku, to dzięki echo tworzy nam plik i napisaem
fi

exit 0
