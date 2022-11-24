# AISD_1_Z4

Treść zadania:
 
Napisz program, który wykonuje poniższe zadania:

Wprowadzanie liczb z danego zakresu: użytkownik wprowadza do 6-elementowej tablicy typu double liczby z przedziału <0, 10>. Użytkownik wprowadza kolejne liczby. Jeżeli podana liczba mieści się w zadanym przedziale to jest zapisywana do tablicy. Jeżeli podana liczba nie mieści się w przedziale, to program czeka na ponowne podanie liczby aż do momentu podania prawidłowej liczby. Wynikiem działania programu jest wyświetlenie wprowadzonej tablicy w formacie "Resulting array: x0 x1 x2 x3 x4 x5",  gdzie symbole x0-x5 oznaczają kolejne elementy tablicy.

Porównywanie tablic: należy sprawdzić czy dwie 5-elementowe tablice typu int wprowadzone przez użytkownika zwierają identyczne wartości. Elementy w tablicach nie muszą być ustawione w tej samej kolejności oraz mogą się powtarzać. Użytkownik w pierwszym kroku wprowadza wszystkie elementy pierwszej tablicy, a następnie wszystkie elementy drugiej tablicy. Jeżeli użytkownik wprowadził błędne znaki zamiast liczb, to program czeka na ponowne podanie liczby aż do momentu podania prawidłowej liczby. W przypadku podania przez użytkownika liczby zmiennoprzecinkowej, podaną liczbę należy rzutować na liczbę całkowitą. Program ma wyświetlić "Equal." w przypadku, gdy tablice zawierają te same elementy lub "Different." w przypadku, gdy zwierają różne elementy.
W zadaniu nie wolno korzystać z funkcji typu cin.good(), cin.fail(), itp. Program powinien być napisany z wykorzystaniem dotychczas poznanych elementów języka C++. Dopuszczalne jest wykorzystanie funkcji zamieniającej tekst na wartość rzeczywistą lub całkowitą.

Rzymskie na arabskie: należy zamienić liczbę zapisaną w systemie rzymskim na liczbę w systemie arabskim. Liczba w systemie rzymskim jest wprowadzana przez użytkownika i zapisana w tablicy typu char (można wykorzystać zmienną typu string). Program ma wyświetlać TYLKO komunikat "Converted <romanNumber> to <arabicNumber>.". Sprawdzanie poprawności wprowadzanych danych jest wymagane. W przypadku podania nieprawidłowej liczby na ekran należy wypisać: "Wrong input data.". Zakres liczb wynosi od 1 do 3999. Dozwolone są jedynie wielkie litery alfabetu.
Wybór zadania obywa się poprzez wprowadzenie numeru zadania przez użytkownika BEZ poprzedzającego komunikatu wykorzystując instrukcję switch. W przypadku błędnego wprowadzenia numeru zadania na ekran należy wyświetlić "Wrong task number."

Przykładowo:

1. Dla poniższych danych wejściowych

1 1 2 20 35 2 12.5 36.1 0.1 11 8 1

program powinien wyświetlić

Resulting array: 1 2 2 0.1 8 1

2. Dla poniższych danych wejściowych

2 1 2 3 4 5 5 4 1 2 3

program powinien wyświetlić

Equal.

3. Dla poniższych danych wejściowych

3 XIV
program powinien wyświetlić

Converted XIV to 14.
