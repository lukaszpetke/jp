#skrypt dla zadania nr.12
#sprawdza czy uzytkownik o podanym id jako parametr jest zalogowany w systemie wiecej niz jeden raz
#dodatkowo wyswietla jego identyfikator i liste terminali, na ktorych pracuje

warun=0
warun=  $[who -a | grep $1 | wc -l] 

if $warun=2 
   then
    who -u -H | grep $1
fi
