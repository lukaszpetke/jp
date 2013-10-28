#skrypt dla zadania nr.2
#program sprawdza czy w katalogu w którym się znajdujemy istnieje plik skrypt102.bash jeżeli nie, to tworzy go i wpisuje w pierwszej lini wpisuje napis "To jest nowy plik"

kopiuje=`echo 'To jest nowy plik' >>  skrypt102.bach`
if [ -e skrypt102.bash ]
then 
    echo "skopiowałem wszystkie pliki o rozszerzeniu .txt z katalogu $PWD  do katalogu $1"
else 
    echo "Niestety podany katalog nie istnieje, ale stworzę go za Ciebie $kopiuje"
    echo "Trwa kopiowanie..."
sleep 5
    echo "OK. Katalog $1 został utworzony i przekopiowałem do niego wszystkie pliki

fi

exit 0