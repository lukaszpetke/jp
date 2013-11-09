#skrypt dla zadania nr.4
#program ktory usuwa wszystkie pliki z katalogow 'podkatalog1' 'podkatalog2'... przez usunięciem pojawia sie nazwa pliku i przed usunieciem pojawia sie pytanie o potwierdzenie

    echo "Za chwilę usunę wszystkie pliki z dwóch podkatalogów 'podkatalog1' i 'podkatalog2', ale przed usunięciem spójrz co w nich się znajduje" #jeżeli istnieje to kopiuje wszystkie pliki o rozszerzeniu .txt

ls ./podkatalog1 ./podkatalog2
rm -i ./podkatalog1/* ./podkatalog2/*

exit 0
