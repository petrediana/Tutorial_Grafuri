Cerinta:
	Se da lista muchiilor unui graf neorientat cu n varfuri, etichetate de la 1 la n.
Din acest graf se elimina toate muchiile cu proprietatea ca ambele extremitati au aceeasi paritate.
Sa se determine cate muchii va avea graful partial obtinut.

Date de intrare:
	Fisierul text "fisier" contine pe prima linie numarul n, reprezentand numarul de varfuri ale
grafului. Fiecare dintre urmatoarele linii contine cate o pereche de numere x, y cu semnificatia ca
exista muchie intre x si y.

Date de iesire:
	Pe ecran se va afisa numarul de muchii al grafului partial obtinut.

Implementare:
	Verific daca muchiile citite sunt de paritate diferita. Voi construi matricea de adiacenta doar
cu varfurile grafului care sunt de paritate diferita, defiecare data cand 2 noduri indeplinesc aceasta conditie
va exista o muchie intre acestea (variabila nr_muchii retine acest lucru). La final afisez numarul de muchii.

Explicatie:
	Se elimina muchiile (3 5), (4 2), (1 3). Astfel graful partial va avea 3 muchii respectiv muchiile
(1 4), (2 3), (2 1)