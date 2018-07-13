Cerinta:
	Se da lista muchiilor unui graf neorientat cu n varfuri, etichetate de la 1 la n.
Din acest graf se elimina toate varfurile etichetate cu valori prime. Sa se determine cate muchii
va avea subgraful obtinut.

Date de intrare:
	Fisierul "fisier" contine pe prima linie numarul n, reprezentand numarul de varfuri ale
grafului. Fiecare dintre urmatoarele linii contine cate o pereche x, y cu semnificatia ca exista
muchie intre x si y.

Date de iesire:
	Pe ecran se vor afisa nr de muchii ramase ale subgrafului obtinut dupa eliminarea varfurilor
cu eticheta prima.

Implementare:
	Voi "altera" matricea de adiacenta a grafului si voi pune in aceasta doar nodurile care NU sunt
valori prime. Apoi voi creste valoarea vectorului "vizitat" pentru fiecare nod. La final voi aduna aceste valori
(dupa care le impart la 2) pentru a rezulta numarul de muchii al subgrafului.

Explicatie pentru exemplul din fisier:
	Voi elimina varfurile 2 3 5. Subgraful astfel contine varfurile (1 4) cu o singura muchie.