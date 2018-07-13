Cerinta:
	Se da lista muchiilor unui graf neorientat. Sa se verifice daca graful este conex.

Date de intrare:
	Fisierul "fisier" contine pe prima linie numarul n, reprezentat numarul de noduri al grafului.
Fiecare dintre urmatoarele linii contine cate o pereche de numere x, y cu semnificatia ca exista muchie
intre x si y.

Implementare:
	In functia de citire voi citi datele si voi initializa matricea de adiacenta in conformitate cu muchiile.
	Voi parcurge graful in adancime folosind DFS si voi numara cate noduri reies din parcurgere, daca numarul
de noduri al grafului este egal cu cel folosit la parcurgere atunci graful este conex deoarece exista o legatura
intre toate nodurile grafului.
    Spunem ca un graf este conex daca intre oricare doua varfuri(noduri) ale acestuia exista cel putin un drum.
