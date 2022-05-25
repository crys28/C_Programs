#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using namespace std;

//Functie care printeaza mesajul de întâmpinare
void mesaj_menu() {

    cout << "\n\t    ************************" << endl;
    cout << "\t    || Închirieri Mașini  ||" << endl;
    cout << "\t    ************************" << endl;
    cout << "\t    ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓\n\n" << endl;

    

}

//Clasa ce contine toate variabilele și funcțiile necesare rulării programului
class masini {
    string culoare;
    int nr_model;
    int answer;
    double timp_ales;
    //Array ce conține modelele de mașini disponibile
    const char* modele[4] = { "[1] BMW F31 (15$/oră)", "[2] Opel Astra J (10$/oră)", "[3] Toyota Camry VII (12$/oră)", "[4] Dacia Logan 2 (8$/oră)" };
    //Mai mulți vectori ce conțin detaliile despre mașinile disponibile
    const char* bmw_info[4] = { "● Anul fabricației - 2014", "● Greutate - 2125kg", "● Cai putere - 306", "● Tip carburant - Benzina"};
    const char* opel_info[4] = { "● Anul fabricației - 2015", "● Greutate - 1925kg", "● Cai putere - 165", "● Tip carburant - Diesel" };
    const char* toyota_info[4] = {"● Anul fabricației - 2014", "● Greutate - 2100kg", "● Cai putere - 150", "● Tip carburant - Diesel"};
    const char* dacia_info[4] = { "● Anul fabricației - 2013", "● Greutate - 1505kg", "● Cai putere - 75", "● Tip carburant - Benzina" };

    
public:
    //Funcția care afișează modelul de mașină ales
    void arata_masini() {
        cout << "Alegeți modelul mașinii care doriți să-l închiriați :\n\n" << endl;
        for (int i = 0; i < 4; i++) {
            cout << modele[i] << "\n";
        }
        cout << "\n";
        cin >> nr_model;

        //În dependență de cifra aleasă vom intra în case-ul corespunzător
        switch (nr_model)
        {
        case 1:
            //Ștergem ecranul
            system("cls");
            //Afișăm din nou meniul principal
            mesaj_menu();
            cout << "\nModelul mașinii alese : BMW F31\n" << endl;
            //Folosim un ciclu For pentru a afișa detaliile despre mașină
            for (int i = 0; i < 4; i++) {
                cout << bmw_info[i] << "\n";
            }
            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;
            //Dacă alegem '1' vom merge la urmatorul meniu, altfel ne întoarcem la meniul principal
            if (answer == 1) {
                system("cls");
                mesaj_menu();
                color();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }

            break;
        case 2:
            system("cls");
            mesaj_menu();
            cout << "\nModelul mașinii alese : Opel Astra J\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << opel_info[i] << "\n";
            }
            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                color();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }

            break;
        case 3:
            system("cls");
            mesaj_menu();
            cout << "\nModelul mașinii alese : Toyota Camry VII\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << toyota_info[i] << "\n";
            }
            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                color();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }

            break;
        case 4:
            system("cls");
            mesaj_menu();
            cout << "\nModelul mașinii alese : Dacia Logan 2\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << dacia_info[i] << "\n";
            }
            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1){
                system("cls");
                mesaj_menu();
                color();
            } else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }

            break;
        }

    }

    //Functia care stabileste culoarea aleasă de noi mașinii
    void color() {
        cout << "\nCe culoare doriți să fie mașina ?\n" << endl;
        cin >> culoare;
        system("cls");
        mesaj_menu();
        
        //La această etapă în funție de modelul mașinii alese precedent vom avea afișate din nou toate datele plus culoarea aleasă 
        if (nr_model == 1){
            cout << "\nModelul mașinii alese : BMW F31\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << bmw_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare <<"\n"<< endl;

            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            //Dacă alegem '1' vom merge la urmatorul meniu, altfel ne întoarcem la meniul principal
            if (answer == 1) {
                system("cls");
                mesaj_menu();
                timp();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }else if (nr_model == 2) {
            cout << "\nModelul mașinii alese : Opel Astra J\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << opel_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;

            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                timp();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }
        else if (nr_model == 3) {
            cout << "\nModelul mașinii alese : Toyota Camry VII\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << toyota_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;

            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                timp();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }
        else{
            cout << "\nModelul mașinii alese : Dacia Logan 2\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << dacia_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;

            cout << "\nDoriți să mergeți mai departe?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                timp();
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }


       
    }

    //Funcția care stabilește timpul de închiriere a mașinii 
    void timp() {
        cout << "\nPe cât timp doriți să închiriați mașina ? (specificați vă rog în ore)\n" << endl;
        cin >> timp_ales;
        system("cls");
        mesaj_menu();

        //La această etapă în funție de modelul mașinii alese precedent vom avea afișate din nou toate datele plus timpul ales 
        if (nr_model == 1) {
            cout << "\nModelul mașinii alese : BMW F31\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << bmw_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;
            cout << "● Timp de închiriere(în ore) - " << timp_ales << "\n" << endl;
            cout << "● Prețul fnal - " << timp_ales * 15<< "$" << "\n" << endl;
            cout << "\nDoriți să efectuați comanda?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            //Dacă alegem '1' se va finisa programul, altfel ne întoarcem la meniul principal
            if (answer == 1) {
                system("cls");
                mesaj_menu();
                cout << "Comanda a fost plasată !!!\n\n" << endl;
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }
        else if (nr_model == 2) {
            cout << "\nModelul mașinii alese : Opel Astra J\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << opel_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;
            cout << "● Timp de închiriere(în ore) - " << timp_ales << "\n" << endl;
            cout << "● Prețul fnal - " << timp_ales * 10 << "$" << "\n" << endl;
            cout << "\nDoriți să efectuați comanda?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                cout << "Comanda a fost plasată !!!\n\n" << endl;
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }
        else if (nr_model == 3) {
            cout << "\nModelul mașinii alese : Toyota Camry VII\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << toyota_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;
            cout << "● Timp de închiriere(în ore) - " << timp_ales << "\n" << endl;
            cout << "● Prețul fnal - " << timp_ales * 12 << "$" << "\n" << endl;
            cout << "\nDoriți să efectuați comanda?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                cout << "Comanda a fost plasată !!!\n\n" << endl;
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }
        else {
            cout << "\nModelul mașinii alese : Dacia Logan 2\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << dacia_info[i] << "\n";
            }
            cout << "● Culoarea aleasa - " << culoare << "\n" << endl;
            cout << "● Timp de închiriere(în ore) - " << timp_ales << "\n" << endl;
            cout << "● Prețul fnal - " << timp_ales * 8<< "$" << "\n" << endl;
            cout << "\nDoriți să efectuați comanda?\n" << endl;
            cout << "\n[1] Yes\n[2] No\n" << endl;
            cin >> answer;

            if (answer == 1) {
                system("cls");
                mesaj_menu();
                cout << "Comanda a fost plasată !!!\n\n" << endl;
            }
            else {
                system("cls");
                mesaj_menu();
                arata_masini();
            }
        }

    }




};   


int main()
{
    //Declaram un obiect de tipul clasei noastre 
    masini A;

    //Apelăm funcția de afișare a meniului
    mesaj_menu();

    //Apelăm funcția de afișare a modelelor de mașini
    A.arata_masini();




	return 0;
}

