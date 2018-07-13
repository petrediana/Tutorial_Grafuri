Cerinta:
	Se da lista muchiilor unui graf neorientat. Sa se afiseze componentele conexe ale grafului

Date de intrare:
	Fisierul "fisier" contine pe prima linie numarul n, reprezentand numarul de varfuri ale grafului.
Fiecare dintre urmatoarele linii contine cate o pereche de numere x, y cu semnificatia ca exista muchie 
intre x si y.

Date de iesire:
	Pe ecran va fi afisat numarul de componente conexe ale grafului. Pe urmatoarele linii se vor afisa
componentele conexe in ordinea lexicografica.

Implementare:
	Parcurg in adancime graficul folosind DFS. In functia pentru parcurgere parametrul "contor" va contoriza
componentele conexe ale grafului. Vectorul "vizitat" va retine aceste valori, fiecare nod "i" avand valoarea
"contor". Apoi la final le afisam.