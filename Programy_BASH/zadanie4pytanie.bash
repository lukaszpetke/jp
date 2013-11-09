#skrypt dla zadania nr.4
#program ktory usuwa wszystkie pliki z katalogow 'podkatalog1' 'podkatalog2'... przez usunięciem pojawia sie nazwa pliku i przed usunieciem pojawia sie pytanie o potwierdzenie

tworze=`mkdir podkatalog1 podkatalog2`
pokazuje=`ls ./podkatalog1 ./podkatalog2`
kasuje=`rm -i ./podkatalog1 ./podkatalog2`

    echo "$tworze Za chwilę usunę wszystkie pliki z dwóch podkatalogów 'podkatalog1' i 'podkatalog2', ale przed usunięciem spójrz co w nich się znajduje $pokazuje $kasuje" #jeżeli istnieje to kopiuje wszystkie pliki o rozszerzeniu .txt


exit 0
