#skrypt dla zadania nr.3
#program kopiuje wszystkie pliki txt do podanego jako argument katalogu.. jeżeli takiego katalogu niema to zostaje on stworzony

if [ -e $1 ]  # -e sprawdza czy podana wartość(katalog) istnieje
then 
    echo "skopiowałem wszystkie pliki o rozszerzeniu .txt z katalogu $PWD  do katalogu $1" #jeżeli istnieje to kopiuje wszystkie pliki o rozszerzeniu .txt
else 
    echo "Niestety podany katalog nie istnieje, ale stworzę go za Ciebie i skopiuję wszystkie pliki o rozszerzeniu .txt" #jeżeli nie to tworzy katalog i wtedy kopiuje wszystko
mkdir $1
cp *.txt $1 
    echo "Trwa kopiowanie..."
sleep 5     #zbędny dodatek zatrzymujący program na 5 sekund
    echo "OK. Katalog $1 został utworzony i przekopiowałem do niego wszystkie pliki"

fi

exit 0
