Cerinta:
	Se da lista muchiilor unui graf neorientat cu n varfuri si un varf p. Sa se determine un ciclu
elementar care contine varful p.

Date de intrare:
	Fisierul "fisier" contine pe prima linie numerele naturale n si m cu semnificatia ca n este numarul
de noduri al grafului iar m este numarul de muchii. Urmatoarele m linii contin cate o pereche de numere
x si y cu semnificatia ca exista muchie intre x y.

Date de iesire:
	Pe ecran se va afisa un singur ciclu elementare care incepe cu varful p si se termina tot cu
varful p.

Implementare:
	Parcurg graful in adancime cu ajutorul DFS. In momentul in care pargurgem mai departe cate un nod,
vectorul "vizitat" va prelua valoarea nodului care intra mai departe. "Alterez" matricea de adiacenta pentru
a "elimina" muchia dintre nodul anterior si cel care a intrat mai departe in parcurgere, apoi continui cautarea.
La sfarsitul functiei "repar" matricea de adiacenta.
	In functia de afisare voi afisa pe ecran la inceput nodul din care plecam, apoi pe celelalte pana cand
ajung la el din nou. Apoi il vom afisa din nou pentru a reprezenta un ciclu.
	Daca vectorul "vizitat" are valoarea 0 pentru nodul din care vrem sa plecam atunci nu putem forma un ciclu.