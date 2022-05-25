#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include<vector>

using namespace std;

double money = 250;
int cart = 0;
//int indic = -1;
int nr_category, nr_fruit, nr_vegetable, nr_drink, nr_meat;



void printWelcome() {

    system("color 6");
    cout << "\n\t\t  =========================================" << endl;
    cout << "\t\t  =========================================" << endl;
    cout << "\t\t    ||   WELCOME TO THE GROCERY STORE   ||" << endl;
    cout << "\t\t  =========================================" << endl;
    cout << "\t\t  ========================================\n\n" << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2);
    cout << "\t\t  $Wallet$: " << money;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE);
    cout << "\t\t  Shopping Cart: " << cart << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);

}





class foodTypes{
    const char* fructe[4] = { "1)Apple - 1$/kg ", "2)Banana - 4$/kg", "3)Pineapple - 10$/kg", "4)Pomelo - 13$/kg" };
    const char* legume[4] = { "1)Tomato - 1$/kg ", "2)Carrot - 4$/kg", "3)Potato - 10$/kg", "4)Onion - 13$/kg" };
    const char* bauturi[4] = { "1)Water - 1$ ", "2)Juice - 2$", "3)Milk - 4$", "4)Beer - 3$" };
    const char* carne[4] = { "1)Beef - 12$/kg ", "2)Chicken - 6$/kg", "3)Pork - 8$/kg", "4)Turkey - 10$/kg" };
    //vector<string> produse;

    int apple_need, banana_need, pineapple_need, pomelo_need;
    int appleCounter = 0;
    int bananaCounter = 0;
    int pineappleCounter = 0;
    int pomeloCounter = 0;

    int tomato_need, carrot_need, potato_need, onion_need;
    int tomatoCounter = 0;
    int carrotCounter = 0;
    int potatoCounter = 0;
    int onionCounter = 0;

    int juice_need, water_need, milk_need, beer_need;
    int juiceCounter = 0;
    int waterCounter = 0;
    int milkCounter = 0;
    int beerCounter = 0;

    int beef_need, chicken_need, pork_need, turkey_need;
    int beefCounter = 0;
    int chickenCounter = 0;
    int porkCounter = 0;
    int turkeyCounter = 0;
    

    int appleGrams;
    int bananaGrams;
    int pineappleGrams;
    int pomeloGrams;
    double apple_Grams = 0;
    double banana_Grams = 0;
    double pineapple_Grams = 0;
    double pomelo_Grams = 0;

    int tomatoGrams;
    int carrotGrams;
    int potatoGrams;
    int onionGrams;
    double tomato_Grams = 0;
    double carrot_Grams = 0;
    double potato_Grams = 0;
    double onion_Grams = 0;

    int beefGrams;
    int chickenGrams;
    int porkGrams;
    int turkeyGrams;
    double beef_Grams = 0;
    double chicken_Grams = 0;
    double pork_Grams = 0;
    double turkey_Grams = 0;

public:
    
    void showFruitsCategory() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n\n ===================" << endl;
        cout << " = FRUITS CATEGORY =" << endl;
        cout << " ===================" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n Choose whatever you want to buy : \n" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
        for (int i = 0; i < 4; i++) {
            cout << fructe[i] << "\n";
        }
        cout << "\n";
        cout << "\n Enter '0' to go back...\n" << endl;
    }


    void showVegetablesCategory() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n\n ===================" << endl;
        cout << " = VEGETABLES CATEGORY =" << endl;
        cout << " ===================" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n Choose whatever you want to buy : \n" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
        for (int i = 0; i < 4; i++) {
            cout << legume[i] << "\n";
        }
        cout << "\n";
        cout << "\n Enter '0' to go back...\n" << endl;
    }


    void showDrinksCategory() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n\n ===================" << endl;
        cout << " = DRINKS CATEGORY =" << endl;
        cout << " ===================" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n Choose whatever you want to buy : \n" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
        for (int i = 0; i < 4; i++) {
            cout << bauturi[i] << "\n";
        }
        cout << "\n";
        cout << "\n Enter '0' to go back...\n" << endl;
    }


    void showMeatCategory() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n\n ===================" << endl;
        cout << " = MEAT CATEGORY =" << endl;
        cout << " ===================" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n Choose whatever you want to buy : \n" << endl;      
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
        for (int i = 0; i < 4; i++) {
            cout << carne[i] << "\n";
        }
        cout << "\n";
        cout << "\n Enter '0' to go back...\n" << endl;
    }

    /************************************************************************************************************/

    void buyFruits() {

        switch (nr_fruit)
        {
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many apples ? \n" << endl;
            cin >> apple_need;
            appleCounter += apple_need;
            srand((int)time(0));
            for (int i = 0; i <= apple_need; i++)
            {
                appleGrams = (rand() % 50) + 150;
                apple_Grams += appleGrams;
            }
            money -= (apple_Grams * 1) / 1000;
            cart += apple_need;

            /////////////////****ABORTED******/////////////////
            /////////// Functionality of the Shopping Cart ////
            /*produse.push_back("Apples : ");
            produse.push_back(to_string(apple_need));*/
            /////////////////****ABORTED******/////////////////
            
            system("CLS");
            printWelcome();
            showFruitsCategory();
            cin >> nr_fruit;
            buyFruits();
            break;
        case 2:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many bananas ? \n" << endl;
            cin >> banana_need;
            bananaCounter += banana_need;
            srand((int)time(0));
            for (int i = 0; i <= banana_need; i++)
            {
                bananaGrams = (rand() % 50) + 150;
                banana_Grams += bananaGrams;
            }
            money -= (banana_Grams * 4) / 1000;
            cart += banana_need;
            system("CLS");
            printWelcome();
            showFruitsCategory();
            cin >> nr_fruit;
            buyFruits();
            break;
        case 3:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many pineapples ? \n" << endl;
            cin >> pineapple_need;
            pineappleCounter += pineapple_need;
            srand((int)time(0));
            for (int i = 0; i <= pineapple_need; i++)
            {
                pineappleGrams = (rand() % 200) + 700;
                pineapple_Grams += pineappleGrams;
            }
            money -= (pineapple_Grams * 10) / 1000;
            cart += pineapple_need;
            system("CLS");
            printWelcome();
            showFruitsCategory();
            cin >> nr_fruit;
            buyFruits();
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many pomelos ? \n" << endl;
            cin >> pomelo_need;
            pomeloCounter += pomelo_need;
            srand((int)time(0));
            for (int i = 0; i <= pomelo_need; i++)
            {
                pomeloGrams = (rand() % 200) + 600;
                pomelo_Grams += pomeloGrams;
            }
            money -= (pomelo_Grams * 13) / 1000;
            cart += pomelo_need;
            system("CLS");
            printWelcome();
            showFruitsCategory();
            cin >> nr_fruit;
            buyFruits();
            break;
        case 0:
            system("CLS");
            printWelcome();
            foodCategory();
        }
    }


    void buyVegetables() {

        switch (nr_vegetable)
        {
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many tomatoes ? \n" << endl;
            cin >> tomato_need;
            tomatoCounter += tomato_need;
            srand((int)time(0));
            for (int i = 0; i <= tomato_need; i++)
            {
                tomatoGrams = (rand() % 50) + 150;
                tomato_Grams += tomatoGrams;
            }
            money -= (tomato_Grams * 6) / 1000;
            cart += tomato_need;
            system("CLS");
            printWelcome();
            showVegetablesCategory();
            cin >> nr_vegetable;
            buyVegetables();
            break;
        case 2:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many carrots ? \n" << endl;
            cin >> carrot_need;
            carrotCounter += carrot_need;
            srand((int)time(0));
            for (int i = 0; i <= carrot_need; i++)
            {
                carrotGrams = (rand() % 50) + 100;
                carrot_Grams += carrotGrams;
            }
            money -= (carrot_Grams * 1) / 1000;
            cart += carrot_need;
            system("CLS");
            printWelcome();
            showVegetablesCategory();
            cin >> nr_vegetable;
            buyVegetables();
            break;
        case 3:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many potatoes ? \n" << endl;
            cin >> potato_need;
            potatoCounter += potato_need;
            srand((int)time(0));
            for (int i = 0; i <= potato_need; i++)
            {
                potatoGrams = (rand() % 50) + 150;
                potato_Grams += potatoGrams;
            }
            money -= (potato_Grams * 2) / 1000;
            cart += potato_need;
            system("CLS");
            printWelcome();
            showVegetablesCategory();
            cin >> nr_vegetable;
            buyVegetables();
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many onions ? \n" << endl;
            cin >> onion_need;
            onionCounter += onion_need;
            srand((int)time(0));
            for (int i = 0; i <= onion_need; i++)
            {
                onionGrams = (rand() % 50) + 100;
                onion_Grams += onionGrams;
            }
            money -= (onion_Grams * 1) / 1000;
            cart += onion_need;
            system("CLS");
            printWelcome();
            showVegetablesCategory();
            cin >> nr_vegetable;
            buyVegetables();
            break;
        case 0:
            system("CLS");
            printWelcome();
            foodCategory();
        }
    }



    void buyDrinks() {

        switch (nr_drink)
        {
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many water bottles ? \n" << endl;
            cin >> water_need;
            waterCounter += water_need;
            money -= waterCounter * 1;
            cart += water_need;
            system("CLS");
            printWelcome();
            showDrinksCategory();
            cin >> nr_drink;
            buyDrinks();
            break;
        case 2:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many juice bottles ? \n" << endl;
            cin >> juice_need;
            juiceCounter += juice_need;
            money -= juiceCounter * 2;
            cart += juice_need;
            system("CLS");
            printWelcome();
            showDrinksCategory();
            cin >> nr_drink;
            buyDrinks();
            break;
        case 3:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many milk bottles ? \n" << endl;
            cin >> milk_need;
            milkCounter += milk_need;
            money -= milkCounter * 4;
            cart += milk_need;
            system("CLS");
            printWelcome();
            showDrinksCategory();
            cin >> nr_drink;
            buyDrinks();
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How many beer cans ? \n" << endl;
            cin >> beer_need;
            beerCounter += beer_need;
            money -= beerCounter * 3;
            cart += beer_need;
            system("CLS");
            printWelcome();
            showDrinksCategory();
            cin >> nr_drink;
            buyDrinks();
            break;
        case 0:
            system("CLS");
            printWelcome();
            foodCategory();
        }
    }


    void buyMeat() {

        switch (nr_meat)
        {
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How much beef ? (in grams) \n" << endl;
            cin >> beef_Grams;
            beefCounter++;
            money -= (beef_Grams * 12) / 1000;
            cart += beefCounter;
            system("CLS");
            printWelcome();
            showMeatCategory();
            cin >> nr_meat;
            buyMeat();
            break;
        case 2:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How much chicken ? (in grams) \n" << endl;
            cin >> chicken_Grams;
            chickenCounter++;
            money -= (chicken_Grams * 6) / 1000;
            cart += chickenCounter;
            system("CLS");
            printWelcome();
            showMeatCategory();
            cin >> nr_meat;
            buyMeat();
            break;
        case 3:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How much pork ? (in grams) \n" << endl;
            cin >> pork_Grams;
            porkCounter++;
            money -= (pork_Grams * 8) / 1000;
            cart += porkCounter;
            system("CLS");
            printWelcome();
            showMeatCategory();
            cin >> nr_meat;
            buyMeat();
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
            cout << "\n How much turkey ? (in grams) \n" << endl;
            cin >> turkey_Grams;
            turkeyCounter++;
            money -= (turkey_Grams * 10) / 1000;
            cart += turkeyCounter;
            system("CLS");
            printWelcome();
            showMeatCategory();
            cin >> nr_meat;
            buyMeat();
            break;
        case 0:
            system("CLS");
            printWelcome();
            foodCategory();
        }
    }


    void foodCategory() {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4);
        cout << "\n\n Choose a category of food :" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6);
        cout << "\n 1)Fruits \n 2)Vegetables \n 3)Drinks \n 4)Meat \n" << endl;
        cin >> nr_category;

        switch (nr_category) {
        case 1:
            system("CLS");
            printWelcome();
            showFruitsCategory();
            cout << "\n";
            cin >> nr_fruit;
            buyFruits();
            break;
        case 2:
            system("CLS");
            printWelcome();
            showVegetablesCategory();
            cout << "\n";
            cin >> nr_vegetable;
            buyVegetables();
            break;
        case 3:
            system("CLS");
            printWelcome();
            showDrinksCategory();
            cout << "\n";
            cin >> nr_drink;
            buyDrinks();
            break;
        case 4:
            system("CLS");
            printWelcome();
            showMeatCategory();
            cout << "\n";
            cin >> nr_meat;
            buyMeat();
            break;
            
        }

    }

    

};


int main()
{
    
    //system("mode con COLS=700");
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

    //SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);  ***f11***

    static CONSOLE_FONT_INFOEX  fontex;
    fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetCurrentConsoleFontEx(hOut, 0, &fontex);
    fontex.FontWeight = 500;
    fontex.dwFontSize.X = 30;
    fontex.dwFontSize.Y = 30;
    SetCurrentConsoleFontEx(hOut, NULL, &fontex);

    

    foodTypes produse;

    printWelcome();
    produse.foodCategory();
   
    
    


    return 0;
};
   
