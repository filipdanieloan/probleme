import sys

def citeste_linii(nume_fisier):
    try:
        with open(nume_fisier) as f:
            return [linie.strip() for linie in f.readlines()]
    except FileNotFoundError:
        print(f"Fișierul {nume_fisier} nu a fost găsit.")
        sys.exit(1)

def compara(output, expected):
    if len(output) != len(expected):
        return False, f"Lungimi diferite: output={len(output)} vs expected={len(expected)}"
    for i, (a, b) in enumerate(zip(output, expected), 1):
        if a != b:
            return False, f"Linia {i} diferă: output='{a}' vs expected='{b}'"
    return True, "OK"

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Utilizare: python checker.py <fisier_output_utilizator> <fisier_output_corect>")
        sys.exit(1)

    user_output = citeste_linii(sys.argv[1])
    correct_output = citeste_linii(sys.argv[2])

    ok, mesaj = compara(user_output, correct_output)
    if ok:
        print("✔ Corect:", mesaj)
        sys.exit(0)
    else:
        print("❌ Greșit:", mesaj)
        sys.exit(1)
