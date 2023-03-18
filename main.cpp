#include <bits/stdc++.h>
#include "LinkedList.h"
#include <windows.h>

using namespace std;

int main() {
    char option;
    char band;
    bool isBack = true;
    int a;

    LinkedList list{};

    SetConsoleCP(1252); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para máquinas Windows
    system("color 0c");

    do {
        system("cls");
        cout << "\t\t" << "+---------------++------------------++----------------------+" << endl;
        cout << "\t\t" << "|---------------||     MENU     ||--------------------------|" << endl;
        cout << "\t\t" << "+----------++---++------------------++---++-----------------+" << endl;
        cout << "\t\t" << "|----------|| A) - a) Insertar ini             ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| B) - b) Insertar end             ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| C) - c) Eliminar ini             ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| D) - d) Eliminar end             ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| E) - e) Eliminar todo            ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| F) - f) Mostrar                  ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| G) - g) Eliminar Múltiplos de    ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| H) - h) Insertar Array           ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl;
        cout << "\t\t" << "|----------|| Q) - q) SALIR                    ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------------+" << endl << endl;
        cout << "\tOPCIÓN A ELEGIR: ";
        cin >> option;

        switch (option) {
            case 'A': case 'a':
                cin.ignore(numeric_limits<int>::max(), '\n');
                system("cls");
                list.insertar_ini();
                cout << endl;
                system("pause");
                break;
            case 'B': case 'b':
                cin.ignore(numeric_limits<int>::max(), '\n');
                list.insertar_final();
                cout << endl;
                system("pause");
                break;
            case 'C': case 'c':
                cin.ignore(numeric_limits<int>::max(), '\n');
                list.eliminar_inicio();
                cout << endl;
                system("pause");
                break;
            case 'D': case 'd':
                cin.ignore(numeric_limits<int>::max(), '\n');
                list.eliminar_final();
                system("pause");
                cout << endl;
                break;
            case 'E': case 'e':
                cin.ignore(numeric_limits<int>::max(), '\n');
                list.eliminar_todo();
                system("pause");
                cout << endl;
                break;
            case 'F': case 'f':
                cin.ignore(numeric_limits<int>::max(), '\n');
                list.mostrar();
                cout << endl;
                system("pause");
                break;
            case 'G': case 'g':
                cin.ignore(numeric_limits<int>::max(), '\n');
                do {
                    cout << "Ingrese el número: ";
                    if (!(cin >> a) || a < 1) {
                        cin.clear();
                        cin.ignore(numeric_limits<int>::max(), '\n');
                        cout << "\nError... Valor incorrecto...\n";
                        continue;
                    }else {
                        break;
                    }
                }while (true);
                list.eliminar_multiplos_de(a);
                cout << endl;
                system("pause");
                break;
            case 'H': case 'h':
                cin.ignore(numeric_limits<int>::max(), '\n');
                list.insertar_Array();
                cout << endl;
                system("pause");
                break;
            case 'Q': case 'q':
                isBack = false;
                break;
            default:
                cin.ignore(numeric_limits<int>::max(), '\n');
                cout << "Opción incorrecta, verifique las opciones a seleccionar en el inicio del programa.\n\n";
                system("pause");
                continue;
        }

        system("cls");
        if (isBack) {
            cout << "Desea regresar al programa? S o s para SI, cualquier otra tecla para no." << endl;
            cin >> band;
            if (band == 'S' || band == 's') {
                cin.ignore(numeric_limits<int>::max(), '\n');
                continue;
            } else {
                cout << "\n\n BYE!!!";
                return 0;
            }
        }
    }while(isBack);

    return 0;
}
