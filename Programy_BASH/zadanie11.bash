#skrypt dla zadania nr.12
#sprawdza czy uzytkownik o podanym id jako parametr wejsiowu jest zalogowany w systemnie wiecej niz jeden raz... dla kazdego uzytkownika nalezy wyswietlic identywikator i liste terminali na ktorych pracuje



if [ -e $1 ]  
then 
    echo "podany użytkownik jest zalogowany w systemie wiecej niz jeden raz"
else 
    echo "podany użytkownik zalogowal sie tylko raz"
fi

who $1 | cut -f1

exit 0
