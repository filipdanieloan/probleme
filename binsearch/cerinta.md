<h1>BinSearch (Oancea F.)</h1>

<h2>Enunț</h2>

Se dă un vector v cu n numere întregi. Se primesc apoi q întrebări, fiecare sub forma unei perechi (t, x).

Pentru fiecare întrebare trebuie să răspunzi astfel:
•	Dacă t = 1, să afișezi câte elemente din vector sunt strict mai mici decât x.
•	Dacă t = 2, să afișezi de câte ori apare exact x în vector.
•	Dacă t = 3, să afișezi câte elemente sunt strict mai mari decât x.
•	Dacă t = 4, să afișezi câte elemente sunt mai mici sau egale cu x.
•	Dacă t = 5, să afișezi câte elemente sunt mai mari sau egale cu x.

Dacă nu există niciun element care să satisfacă condiția, se va afișa -1.

⸻

<h2>Date de intrare</h2>

Fișierul de intrare binsearch.in conține:
*	Pe prima linie: numărul întreg n, reprezentând numărul de elemente ale vectorului.
*	Pe a doua linie: n numere întregi v₁, v₂, ..., vₙ.
*	Pe a treia linie: numărul întreg q, reprezentând numărul de întrebări.
*	Următoarele q linii conțin câte o pereche de numere întregi (t, x), reprezentând o întrebare.

⸻

<h2>Date de ieșire</h2>

Fișierul de ieșire binsearch.out va conține q linii. Pe fiecare linie se va scrie răspunsul la întrebarea corespunzătoare. (Dacă nu există numere care respectă condițiile se va afișa -1)

⸻

Restricții
*	1 ≤ n ≤ 10^5
*	-10^6 ≤ vᵢ ≤ 10^6
*	1 ≤ q ≤ 10^5
*	1 ≤ t ≤ 5
*	-10^6 ≤ x ≤ 10^6

⸻

Exemplu

binsearch.in

10 <br>
3 7 2 5 7 1 4 5 6 8 <br>
10 <br>
1 4 <br>
2 5 <br>
3 6 <br>
4 5 <br>
5 5 <br>
2 9 <br>
3 8 <br>
1 1 <br>
4 2 <br>
5 9 <br>

binsearch.out

3<br>
2<br>
3<br>
6<br>
6<br>
-1<br>
-1<br>
-1<br>
2<br>
-1<br>


⸻

Indicații de rezolvare

Problema se rezolva cu ajutorul cautarii binare (este si in titlu), complexitatea algoritmului fiind O(log n). Eu am folosit cautarea binara din STL, iar rezolvarea mea este <a href = "https://pastebin.com/Ff5wunr1">aici</a>.

Vezi <a href = "https://www.pbinfo.ro/articole/3633/cautarea-binara">cautarea binara pe pbinfo.ro (articol)</a>!

⸻

Exercitii similare (le-am pus crescator in functie de dificultate):

<ol>
    <li><a href="https://www.pbinfo.ro/probleme/508/cautare-binara">Problema #508 de pe pbinfo.ro (Cautare Binara)</a></li>
    <li><a href="https://www.pbinfo.ro/probleme/661/triunghiuri1">Problema #661 de pe pbinfo.ro (Triunghiuri1)</a> sau <a href="https://www.infoarena.ro/problema/nrtri">nrtri de pe infoarena.ro</a> (aproape identice)</li>
    <li><a href="https://www.pbinfo.ro/probleme/2276/cb">Problema #2276 de pe pbinfo.ro (cb)</a></li>
    <li><a href="https://www.infoarena.ro/problema/cautbin">cautbin de pe infoarena.ro</a></li>
</ol>






