#include <iostream>
#include <windows.h>
#include <time.h>


using namespace std;


int main()
{
    system("mode 110");

    string username; // user name...
    int menuchoice; // menu change...
    int optchoice; // name change...
    int orderchoice; // Order in items menu change...
    int items = 3; //Available options for the menu limit...
    int storechoice; // Store items selection...
    int salary = 150; // User salary...
    int cups=0; // amount of cups wanted...
    int ingredients=0; //amount of ingredients wanted...
    int power=0; // water and power wanted...
    int upgrades;// Upgrades choice...
    int employchoice; // Employees choice...
    int day = 0; // Day number...
    int customers = 0; // Counts total customers...
    int currentcups = 0; //Cups available...
    int currentingredients = 0; // ingredients available...
    int currentpower = 0; // Power available...
    int min = 1;
    int max = 1;
    int earning = 0;
    int tips = 0;
    int darkvader = 0; // DarkVader Random Appearance generator...
    int startchoice = 0;
    int esp = 2;
    int capp = 3;
    int mocha = 3;
    int hot = 2;
    int frap = 3;
    int cost = 0;
    bool espresso(false);
    bool cappuccino(false);
    bool IcedMocha(false);
    bool HotChocolate(false);
    bool FrappuccinoCoffee(false);
    bool electricity(false);
    bool bingredient(false);
    bool utensils(false);
    bool appliances(false);
    bool solarpanels(false); // Upgrade for solar panels...
    bool ads(false); // Upgrade for advertisement...
    bool wash(false); // upgrade for washroom...
    bool safe(false); // Upgrade for safe..
    bool r2(false); // Employee R2-D2...
    bool cp(false); // Employee C-3PO...
    char namechange = 'y';
    char solarchoice = 'y';
    char advertisementschoice = 'y';
    char washchoice = 'y';
    char safechoice = 'y';



//Welcome screen....

    cout << "___________________________________________________________________________________________________\n";
    cout << "\t               _________________      ____         __________                 \n";
    cout << "\t .       .    )                 |    (    )    .  |          )                \n";
    cout << "\t     .       )    ______   _____| . (      )      |    ___    |     .     .   \n";
    cout << "\t             )    )    |   |       (   ()   )     |   (___)   |               \n";
    cout << "\t           .  )    )   |   |      (   (__)   )  . |         _)               .\n";
    cout << "\t .     ________|    |  |   | .   (            )   |   |)    )_______    .     \n";
    cout << "\t      |            )   |   |    (    ______    )  |   | )           |         \n";
    cout << "\t      |___________)    |___|   (____(      )____) |___|  )__________|    .    \n";
    cout << "\t  .     ____    __  . _____   ____      .  __________   .  _________          \n";
    cout << "\t       (    (  )  (  )    )  (    )       |          )    /         |      .  \n";
    cout << "\t        (    ()    ()    )  (      )      |    ___    |  /    ______|  .      \n";
    cout << "\t         (              )  (   ()   ) .   |   |___|   |  )    )               \n";
    cout << "\t   .      (            )  (   (__)   )    |         _).   )    )              \n";
    cout << "\t           (    )(    )  (            )   |   |)    )______|    |   .         \n";
    cout << "\t            (  )  (  )  (    ______    )  |   | )              )          .   \n";
    cout << "\t .       .   ()    ()  (____(      )____) |___|  )____________)               \n";
    cout << "\t     .                           .         .               .                  \n";
    cout << "\t           .              'COFFEE LOUNGE TYCOON GAME'                         \n";
    cout << "\t                 .               .                                 .          \n";
    cout << "\t                        MAY THE  Frappuccino BE WITH YOU!   .            .    \n";
    cout << "___________________________________________________________________________________________________\n";

    //Take User Name:

    cout << "Enter Your Name: ";
    cin >> username;

    //User Pause/Begin:

    system("pause");
    system("cls");

    //Game main instructions and background:

    cout << "Hi " << username << ", welcome to star wars lounge! Here is some basic info to begin with: \n";
    cout << endl;
    cout << "___________________________________________________________________________________________________ \n";
    cout << "\t\t\t\tInstructions\n";
    cout << endl;
    cout << "* Numbers like 1, 2, 3, 4, 5... serve as controls." << endl;
    cout << "* 0 is always the return key in the menu." << endl;
    cout << "* To buy any item enter the amount and press enter." << endl;
    cout << "* Buy Inventory from the store before stating the game, so you have something to sell!" << endl;
    cout << endl;
    cout << endl;
    cout << "___________________________________________________________________________________________________ \n";
    cout << "\t\t\t\tGame Background\n";
    cout << endl;
    cout << "   Welcome to the Star Wars Lounge Tycoon game. In this game you will \n";
    cout << "start as a basic coffee shop owner who will work to level up and become \n";
    cout << "the best in the universe. Buy inventory and upgrades to succeed throughout \n";
    cout << "the game. There will be visitors from star wars, so you may get bonuses \n";
    cout << "from them and sometimes if you are unlucky Dark Vader will raid your lounge. \n";
    cout << "So Good Luck! \n";
    cout << "May the frappuccino be with you!\n";
    cout << endl;
    cout << endl;
    cout << "___________________________________________________________________________________________________ \n";
    cout << "\t\t\t\tYour Goal\n";
    cout << endl;
    cout << "   Your goal of the game will be to earn $10,000 and have your lounge \n";
    cout << "upgraded to its' elitist! Throughout the game, if at any point you run \n";
    cout << "out of a certain commodity and don't have enough money to restock and start\n";
    cout << "your day, you will be declared bankrupt and you will ultimately lose the \n";
    cout << "game.\n";
    cout << endl;
    cout << "___________________________________________________________________________________________________ \n";
    system("pause");

//Main Game Loop

do
{
    system("cls");

    //main Menu:

    cout << "___________________________________________________________________________________________________ \n";
    cout << endl;
    cout << " 8888     8888        88888 8888888 8888    888    8888     8888 8888888888 8888    888 888     888 \n";
    cout << " 88888   88888       888888   888   88888   888    88888   88888 888        88888   888 888     888 \n";
    cout << " 888888 888888      8888888   888   888888  888    888888 888888 888        888888  888 888     888 \n";
    cout << " 8888888888888     8888 888   888   8888888 888    8888888888888 8888888    8888888 888 888     888 \n";
    cout << " 888 88888 888    8888  888   888   888 8888888    888 88888 888 888        888 8888888 888     888 \n";
    cout << " 888  888  888   8888   888   888   888  888888    888  888  888 888        888  888888 888     888 \n";
    cout << " 888       888 88888    888 8888888 888   88888    888       888 8888888888 888   88888  888888888  \n";
    cout << "___________________________________________________________________________________________________ \n";
    cout << endl;
    cout << "\t\t\t\tWelcome to your home screen " << username << "!\n";
    cout << endl;
    cout << "1. Add items to your Menu.                                      _______              _______             \n";
    cout << "2. Visit the store.                                            /\\\:::::/\\\            /\\\:::::/\\\    \n";
    cout << "3. Add Upgrades.                                              /::\\\:::/::\\\          /::\\\:::/::\\\   \n";
    cout << "4. Hire Employees.                                           /::::\\\_/::::\\\   .--. /::::\\\_/::::\\\  \n";
    cout << "5. Change Settings and view stats.                          /_____/ \\\_____\\\-' .-.`-----' \\\_____\\\ \n";
    cout << "6. Help.                                                    \\\:::::\\\_/:::::/-. `-'.-----._/:::::/     \n";
    cout << "7. Start the day.                                            \\\::::/:\\\::::/   `--' \\\::::/:\\\::::/  \n";
    cout << "0. Quit the game.                                             \\\::/:::\\\::/          \\\::/:::\\\::/   \n";
    cout << "                                                               \\\/:::::\\\/            \\\/:::::\\\/    \n";
    cout << "--------[]--     ----    -----   ----      --- --   --------    ^^^^^^^   ---------  ^^^^^^^ ------      \n";
    cout << endl;
    cout << "Money = $" << salary << endl;
    cout << "Utensils = " << currentcups << endl;
    cout << "Ingredients = " << currentingredients << endl;

    if(solarpanels == (false))
    {
        cout << "Power = " <<  currentpower << endl;
        cout << endl;
    }

    cout << "___________________________________________________________________________________________________\n";

    if(solarpanels == (true) || ads == (true) || wash == (true) || safe == (true))
    {
        cout << endl;
        cout << "Upgrades: \n";
        cout << endl;
    }

    // Solar Panel Stats:

    if(solarpanels == (true))
    {
        cout << "# Solar Panels are up and running!\n";
        currentpower = 1;
    }

    // Advertisements Stats:

    if(ads == (true))
    {
        cout << "# Advertisements are put up!\n";
    }

    // Washrooms Stats:

    if(wash == (true))
    {
        cout << "# Washrooms are usable!\n";
    }

    // Secure Safe Stats:

    if(safe == (true))
    {
        cout << "# Safe is secure!\n";
    }

    cout << "___________________________________________________________________________________________________\n";
    cout << endl;

    // Game Over Checker:

    if(salary < 4 && (currentcups == 0 || currentingredients == 0 || currentpower == 0))
    {
        system("cls");

        cout << "___________________________________________________________________________________________________ \n";
        cout << "___________________________________________________________________________________________________ \n";
        cout << endl;
        cout << "  88888888         88888 8888     8888 8888888888      888888888  888     888 8888888888 88888888.  \n";
        cout << " 8888  8888       888888 88888   88888 888            8888   8888 888     888 888        888   8888 \n";
        cout << " 888    888      8888888 888888.888888 888            888     888 888     888 888        888    888 \n";
        cout << " 888            8888 888 8888888888888 8888888        888     888 8888   8888 8888888    888   8888 \n";
        cout << " 888  88888    8888  888 888 88888 888 888            888     888  8888 8888  888        88888888|  \n";
        cout << " 888    888   8888   888 888  888  888 888            888     888   888o888   888        888 8888   \n";
        cout << "  8888888    888     888 888       888 8888888888       8888888       888     8888888888 888   8888 \n";
        cout << endl;
        cout << "___________________________________________________________________________________________________ \n";
        cout << "___________________________________________________________________________________________________ \n";
        return 0;
    }

    // Win Checker:

    if(salary > 10000 && solarpanels == (true) && ads == (true) && safe == (true) && wash == (true))
    {
        system("cls");

        cout << "___________________________________________________________________________________________________ \n";
        cout << "___________________________________________________________________________________________________ \n";
        cout << endl;
        cout << "   8888   8888  888888888  888     888       888       888 8888888 8888    888       888 \n";
        cout << "    8888 8888  88888 88888 888     888       888   o   888   888   88888   888       888 \n";
        cout << "     888o888   888     888 888     888       888  888  888   888   888888  888       888 \n";
        cout << "      88888    888     888 888     888       888 88888 888   888   8888888 888       888 \n";
        cout << "       888     888     888 888     888       8888888888888   888   888 8888888       888 \n";
        cout << "       888     888     888 888     888       888888 888888   888   888  888888       888 \n";
        cout << "       888     88888 88888 88888 88888       88888   88888   888   888   88888        8  \n";
        cout << "       888      888888888   888888888        8888     8888 8888888 888    8888       888 \n";
        cout << endl;
        cout << "___________________________________________________________________________________________________ \n";
        cout << "___________________________________________________________________________________________________ \n";
        return 0;
    }

    do
    {
        //Take the user's choice:
        cin >> menuchoice;

        if ( !cin.good() )
        {
            //Error:
            cin.clear ();
            cin.ignore( 128, '\n' );
            menuchoice = -1;
        }

    }while(!cin.good() || (menuchoice < 0 || menuchoice > 8));




    // Cheat for Salary:

    if(menuchoice == 21)
    {
        salary = 10000;
    }

    //Menu and Price Selection Page:

    if(menuchoice == 1)
    {
        do
        {
            system("cls");

            cout << "___________________________________________________________________________________________________\n";
            cout << "___________________________________________________________________________________________________\n";
            cout << endl;
            cout << " 88      888888888 88     88 888    88 88888888  8888888    888     888 8888888 888    88 88     88 \n";
            cout << " 88      8888 8888 88     88 8888   88 888  8888 88         8888   8888 888     8888   88 88     88 \n";
            cout << " 88      88     88 88     88 88888  88 88    888 88         88888888888 888     88888  88 88     88 \n";
            cout << " 88      88     88 88     88 888888 88 88        888888     88888888888 888888  888888 88 88     88 \n";
            cout << " 88      88     88 88     88 88 888888 88  88888 88         88 88888 88 888     88 888888 88     88 \n";
            cout << " 88      88     88 88     88 88  88888 88    888 88         88  888  88 888     88  88888 88     88 \n";
            cout << " 88      8888 8888 8888 8888 88   8888 888  8888 88         88   8   88 888     88   8888 8888 8888 \n";
            cout << " 8888888 888888888  8888888  88    888 88888888  8888888    88       88 8888888 88    888  8888888  \n";
            cout << "___________________________________________________________________________________________________\n";
            cout << "___________________________________________________________________________________________________\n";
            cout << endl;
            cout << "You can choose any 3 options to add to your menu:\n";
            cout << endl;
            cout << "___________________________________________________________________________________________________\n";
            cout << endl;
            cout << "1. Espresso                                                (      (               (      )     )    \n";
            cout << "2. Cappuccino                                               )      )               )     (     (    \n";
            cout << "3. Iced Caffè Mocha                                       _____________           (      )     )    \n";
            cout << "4. Hot Chocolate Classic                                 (             )          )      (     )    \n";
            cout << "5. Frappuccino Blended Coffee                             (           )--)        (      )     (    \n";
            cout << "0. Exit to the menu.                                       (         )  /       .-**^***^**^***^**-.\n";
            cout << "                                                            (       )--)       (//\\\\\\//\\\\\\//\\\\\\//\\\\\\)\n";
            cout << "                                                             (     )            \\\^^^^^^^^^^^^^^^^^^/\n";
            cout << "        __________       ________     ____________________  __'==='__________    `================`   \n";
            cout << endl;
            cout << "___________________________________________________________________________________________________\n";

            do
            {
                cin >> orderchoice;

                if ( !cin.good() )
                {
                    //Error:
                    cin.clear ();
                    cin.ignore( 128, '\n' );
                    orderchoice = -1;
                }

            }while(!cin.good() || (orderchoice < 0 || orderchoice > 5));



            //Espresso:

            if(orderchoice == 1 && espresso == (false) && items >= 1)
            {
                cout << "You have chosen Espresso!\n";
                cout << endl;
                cout << "Espresso will bring $2 per customer!\n";

                //Add the item:

                espresso = (true);
                items--;

                //Earning Calculator:
                cost = cost +2;

                system("pause");

            }

            else if(orderchoice == 1 && espresso == (true) && items >= 1)
            {
                cout << "You have already added Espresso to the menu!\n";
                system("pause");
            }

            else if(orderchoice == 1 && items < 1)
            {
                cout << "You can only add three items to your lounge menu!\n";
                system("pause");
            }

            // Cappuccino:

            if(orderchoice == 2 && cappuccino == (false) && items >= 1)
            {
                cout << "You added cappuccino to the menu!" <<endl;
                cout << endl;
                cout << "Cappuccino will bring you $3 per customer!\n";

                //Add the item:

                cappuccino = (true);
                items--;

                //Calculating Costs:
                cost = cost + 3;

                system("pause");
            }

            else if(orderchoice == 2 && cappuccino == (true) && items >= 1)
            {
                cout << "You have already added Cappuccino to the menu!\n";
                system("pause");
            }

            else if(orderchoice == 2 && items < 1)
            {
                cout << "You can only add three items to your lounge menu!\n";
                system("pause");
            }

            //Iced Caffè Mocha:

            if(orderchoice == 3 && IcedMocha == (false) && items >= 1)
            {
                cout << "You added Iced Caffè Mocha to the menu!" <<endl;
                cout << endl;
                cout << "Iced Mocha will bring you $3 per customer!\n";

                //Add the item:

                IcedMocha = (true);
                items--;

                //Calculating Costs:
                cost = cost + 3;

                system("pause");
            }

            else if(orderchoice == 3 && IcedMocha == (true) && items >= 1)
            {
                cout << "You have already added Iced Mocha to the menu!\n";
                system("pause");
            }

            else if(orderchoice == 3 && items < 1)
            {
                cout << "You can only add three items to your lounge menu!\n";
                system("pause");
            }

            //Hot Chocolate Classic:

            if(orderchoice == 4 && HotChocolate == (false) && items >= 1)
            {
                cout << "You added Hot Chocolate Classic to the menu!" <<endl;
                cout << endl;
                cout << "Hot Chocolate will bring you $2 per customer!\n";

                //Add the item:

                HotChocolate = (true);
                items--;

                //Calculating Cost:
                cost = cost + 2;
                system("pause");

            }

            else if(orderchoice == 4 && HotChocolate == (true) && items >= 1)
            {
                cout << "You have already added Hot Chocolate to the menu!\n";
                system("pause");
            }

            else if(orderchoice == 4 && items < 1)
            {
                cout << "You can only add three items to your lounge menu!\n";
                system("pause");
            }

            //Frappuccino Blended Coffee:

            if(orderchoice == 5 && FrappuccinoCoffee == (false) && items >= 1)
            {
                cout << "You added Frappuccino Blended Coffee to the menu!" <<endl;
                cout << endl;
                cout << "Frappuccino will bring you $3 per customer!\n";

                //Add the item:

                FrappuccinoCoffee = (true);
                items--;

                //Calculating Costs:
                cost = cost + 3;

                system("pause");
            }

            else if(orderchoice == 5 && FrappuccinoCoffee == (true) && items >= 1)
            {
                cout << "You have already added Frappuccino to the menu!\n";
                system("pause");
            }

            else if(orderchoice == 5 && items < 1)
            {
                cout << "You can only add three items to your lounge menu!\n";
                system("pause");
            }

        }while(orderchoice != 0);

    }

    // Visit to the Store:

    else if(menuchoice == 2) // store to buy supplies for the lounge;
    {

        do
        {
            system("cls");

            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "                      888888888 88888888888 88888888888 8888888888 888888888 \n";
            cout << "                      8888  8888    888     88888 88888 888    888 888       \n";
            cout << "                      88888         888     888     888 888    888 888       \n";
            cout << "                       8888888      888     888     888 888    888 8888888   \n";
            cout << "                          888888    888     888     888 8888888888 888       \n";
            cout << "                            8888    888     888     888 888 8888   888       \n";
            cout << "                      8888  8888    888     88888 88888 888  8888  888       \n";
            cout << "                       88888888     888     88888888888 888   8888 888888888 \n";
            cout <<endl;
            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "1. Buy Kitchen Stove and Appliances ($50) #Compulsory to Brew Coffee...         '-||__/___________  \n";
            cout << "2. Buy Utensils and Cups ($5 for 25 cups).                                         |==/|_|_|_|_|_/  \n";
            cout << "3. Buy Ingredients ($10 for up to 25 orders).                                      |=/_|_|_|_|_|/   \n";
            cout << "4. Buy Power and Water supply ($10 per day).                                       |/|_|_|_|_|_/    \n";
            cout << "0. Return to Home screen.                                                          |_|_|_|_|_|/     \n";
            cout << "                                                                                   )_____(_         \n";
            cout << "                                                                                   [--------|       \n";
            cout << "___________________ __________           ______________   ________  _______________(o)^^^^(o)_______\n";
            cout << endl;

            do
            {
                // Take user's choice...
                cin >> storechoice;

                if ( !cin.good() )
                {
                    //Error:
                    cin.clear ();
                    cin.ignore( 128, '\n' );
                    storechoice = -1;
                }

            }while(!cin.good() || (storechoice < 0 || storechoice > 4));



            //Buy appliances:

            if(storechoice == 1 && appliances == (false) && salary > 50)
            {
                cout << "You bought your appliances!" << endl;
                cout << endl;

                //Add appliances:

                appliances=(true);

                //Deducting costs of appliances:

                 salary -= 50;
                 cout << salary << endl;

                 system("pause");
            }

            else if(storechoice == 1 && appliances == (true))
            {
                cout << "You already bought appliances!\n";
                system("pause");
            }

            // buy cups:

            if(storechoice == 2 && salary > 5)
            {
                 cout << "How many utensils and cups do you want to buy? ";
                 do
                 {
                     cin >> cups;

                     if ( !cin.good() )
                     {
                         //Error:
                         cin.clear ();
                         cin.ignore( 128, '\n' );
                         cups = -1;
                     }

                }while(!cin.good() || (cups < 0));


                 cout << endl;

                 if(cups*5 < salary)
                 {
                     //Add cups:

                     utensils=(true);

                     // Deducting costs of cups:

                    salary = salary - cups*5;
                    cout << salary << endl;

                    currentcups = currentcups + (cups * 25);

                    cout << "You now have " << currentcups << " cups / utensils. \n";
                    cout << "Your salary is $" << salary << "." << endl;
                    cout << endl;
                    system("pause");
                }

                else if(cups*5 > salary)
                {
                    cout << "You don't have enough money to buy the chosen dishes!\n";
                    system("pause");
                }

            }

            // Buy ingredients:

            if(storechoice == 3)
            {
                cout << "How many ingredients do you want to purchase? ";
                do
                {
                    cin >> ingredients;

                    if ( !cin.good() )
                    {
                        //Error:
                        cin.clear ();
                        cin.ignore( 128, '\n' );
                        ingredients = -1;
                    }

                }while(!cin.good() || (ingredients < 0));

                cout << endl;

                if(ingredients*10 < salary)
                {
                    //Add ingredients:

                    bingredient=(true);

                    // Deducting costs of ingredients:

                    salary = salary - ingredients*10;
                    cout << salary << endl;

                    currentingredients = currentingredients + (ingredients*25);

                    cout << "You now have " << currentingredients << " ingredients. \n";
                    cout << "Your salary is $" << salary << "." << endl;
                    cout << endl;
                    system("pause");

                }

                else if(ingredients*10 > salary)
                {
                    cout << "You don't have enough money to buy the amount of ingredients!\n";
                    system("pause");
                }
            }

            //Buy electricity:

            if(storechoice == 4)
            {
                cout << "How many days of power will you like to purchase? \n";
                do
                {
                    cin >> power;

                    if ( !cin.good() )
                    {
                        //Error:
                        cin.clear ();
                        cin.ignore( 128, '\n' );
                        power = -1;
                    }

                }while(!cin.good() || (power < 0));

                cout << endl;

                if(power*10 < salary && solarpanels == (false))
                {
                    //Add power:

                    electricity=(true);

                    // Deducting costs of ingredients:

                    salary = salary - power*10;

                    currentpower = currentpower + (power*1);

                    cout << "You now have " << currentpower << " days of power supply. \n";
                    cout << "Your salary is $" << salary << "." << endl;
                    cout << endl;
                    system("pause");
                }

                else if(power*10 > salary && solarpanels == (false))
                {
                    cout << "You don't have enough money to buy the chosen days of power!\n";
                    system("pause");
                }

                else if(solarpanels == (true))
                {
                    cout << "You don't need to buy power any more as you have the solar-panels upgrade!\n";
                    cout << endl;

                    currentpower = 1;
                    system("pause");
                }


            }

        }while(storechoice != 0);


    }

    //Upgrades:

    else if(menuchoice == 3)
    {
        do
        {
            system("cls");

            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "      888     888 888888888   88888888  888888888         88888 8888888888 8888888888  88888888    \n";
            cout << "      888     888 888   8888 888    888 888   8888       888888 888    888 888        8888  8888   \n";
            cout << "      888     888 888   8888 888    888 888   8888      8888888 888    888 888        88888        \n";
            cout << "      888     888 888   8888 888        888   8888     8888 888 888    888 8888888     8888888     \n";
            cout << "      888     888 888888888  888  88888 888888888     8888  888 888    888 8888888        888888   \n";
            cout << "      888     888 888        888    888 888 8888     8888   888 888    888 888              8888   \n";
            cout << "      8888   8888 888         888  8888 888  8888   88888888888 888    888 888        8888  8888   \n";
            cout << "       888888888  888          8888888  888   8888 8888     888 8888888888 8888888888  88888888    \n";
            cout << endl;
            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << "                                                                        __________      __________  \n";
            cout << "1. Buy Solar Panels ($500) - Free energy upgrade.                      /_/_//_/_/|     /_/_//_/_/|  \n";
            cout << "2. Advertisements ($850) - Attracts 50% more customers.               /_/_//_/_/ |    /_/_//_/_/ |  \n";
            cout << "3. Public washroom ($700)- Increases tips.              _____________/_/_//_/_/__|___/_/_//_/_/__|_ \n";
            cout << "4. Secure Safe ($400)- Stops raids by Dark Vader.      /            /_/_//_/_/   |  /_/_//_/_/   |  \n";
            cout << "0. Return to home screen.                             /            /_/_//_/_/    | /_/_//_/_/    |  \n";
            cout << "                                                     /_____________________________________________ \n";
            cout << "                                                     | [----]      [----]      [----]      [----] | \n";
            cout << "                                                     | [----]      [----]      [----]      [----] | \n";
            cout << "                                                     | [----]      [----]      [----]      [----] | \n";
            cout << "                                                     |                                            | \n";
            cout << "___________________________________________________________________________________________________ \n";

            do
            {
                // User Input:

                cin >> upgrades;

                if ( !cin.good() )
                {
                    //Error:
                    cin.clear ();
                    cin.ignore( 128, '\n' );
                    upgrades = -1;
                }

            }while(!cin.good() || (upgrades < 0 || upgrades > 4));


            //Solar Panels:

            if(upgrades == 1)
            {
                cout << "Are you sure you want to buy the solar panels upgrade? ( 'y' or 'n' ) ";
                cin >> solarchoice;

                if(solarchoice == 'y' && salary >= 500 && solarpanels == (false))
                {
                    cout << "You Successfully bought solar panels!\n";

                    salary = salary - 500;
                    cout << "Your current Salary is " << salary << endl;

                    solarpanels=(true);
                    system("pause");
                }

                else if(solarchoice == 'y' && salary < 500 && solarpanels == (false))
                {
                    cout << "You don't have enough money to buy the upgrade!\n";
                    cout << "You can always buy it later when u got the cash!  :p \n";
                    system("pause");
                }

                else if(solarpanels==(true))
                {
                    cout << "You have already bought Solar Panels!\n";
                    system("pause");
                }

            }

            if(upgrades == 2)
            {
                cout << "Are you sure you want to buy advertisements? ( 'y' or 'n' ) ";
                cin >> advertisementschoice;

                 if(solarchoice == 'y' && salary > 250 && ads == (false))
                {
                    cout << "You Successfully bought advertisements!\n";

                    salary = salary - 250;
                    cout << "Your current Salary is " << salary << endl;

                    ads=(true);
                    system("pause");
                }

                else if(solarchoice == 'y'  && salary < 250 && ads == (false))
                {
                     cout << "You don't have enough money to buy the upgrade!\n";
                     cout << "You can always buy it later when u got the cash!  :p \n";
                     system("pause");
                }

                else if(ads == (true))
                {
                    cout << "You already bought advertisements!\n";
                    system("pause");
                }
            }

            if(upgrades == 3)
            {
                cout << "Do you want to build a public washroom at your lounge? ( 'y' or 'n' ) ";
                cin >> washchoice;

                 if(solarchoice == 'y' && salary > 700 && wash == (false))
                {
                    cout << "You Successfully built a Public washroom!\n";

                    salary = salary - 700;
                    cout << "Your current Salary is " << salary << endl;

                    wash=(true);
                    system("pause");
                }

                else if(solarchoice == 'y' && salary < 700 && wash == (false))
                {
                    cout << "You don't have enough money to buy the upgrade!\n";
                    cout << "You can always buy it later when u got the cash!  :p \n";
                    system("pause");
                }

                else if(wash == (true))
                {
                    cout << "You already bought washrooms!\n";
                    system("pause");
                }
            }

            if(upgrades == 4)
            {
                cout << "Do you want to buy the Safe? ( 'y' or 'n' ) ";
                cin >> safechoice;

                 if(solarchoice == 'y' && salary > 400 && safe == (false))
                {
                    cout << "You Successfully bought a safe!\n";

                    salary = salary - 400;
                    cout << "Your current Salary is " << salary << endl;

                    safe=(true);
                    system("pause");
                }

                else if(solarchoice == 'y' && salary < 400 && safe == (false))
                {
                    cout << "You don't have enough money to buy the upgrade!\n";
                    cout << "You can always buy it later when u got the cash!  :p \n";
                    system("pause");
                }

                else if(safe == (true))
                {
                    cout << "You already bought the secure safe!\n";
                    system("pause");
                }
            }


        }while(upgrades != 0);

    }

    //Employees:

    else if(menuchoice == 4)
    {
        do
        {
            system("cls");

            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "  888888888 888     888 888888888 888       888888888 8888   8888 8888888888 8888888888  88888888   \n";
            cout << "  888       8888   8888 88    888 888      88888 88888 8888 8888  888        888        8888  8888  \n";
            cout << "  888       88888888888 88    888 888      888     888  8888888   888        888        88888       \n";
            cout << "  8888888   88888888888 88    888 888      888     888   88888    8888888    8888888     8888888    \n";
            cout << "  888       88 88888 88 888888888 888      888     888    888     888        888            888888  \n";
            cout << "  888       88  888  88 888       888      888     888    888     888        888              8888  \n";
            cout << "  888       88   8   88 888       888      88888 88888    888     888        888        8888  8888  \n";
            cout << "  888888888 88       88 888       88888888  888888888     888     8888888888 8888888888  88888888   \n";
            cout << endl;
            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "1. Droid R2-D2 - ($750) Increases customers and tips by 20%      .-==-.           __                  \n";
            cout << "2. Robot C-3PO - ($900) Increases customers and tips by 40%     ( []  -)         /  \\\               \n";
            cout << "0. Return to Home Screen.                                       |__O R2|        /____\\\              \n";
            cout << "                                                               _|--    |_      ___[]_______________   \n";
            cout << "                                                              / | ==== | \\\    |  o  | ,----------, |\n";
            cout << "                                                              [=| ==== |=]    |_____| |_===___O__| |  \n";
            cout << "                                                               || ' !! ||     |  o  | | ... ### .| |  \n";
            cout << "                                                               ||-D2---||     |_____|_|_O__ooo___|_|  \n";
            cout << "_________________________________   _______________   ____  __/__]____[__\\\_____(_)______________(_)_\n";
            cout << endl;

            do
            {
                cin >> employchoice;

                if ( !cin.good() )
                {
                    //Error:
                    cin.clear ();
                    cin.ignore( 128, '\n' );
                    employchoice = -1;
                }

            }while(!cin.good() || (employchoice < 0 || employchoice > 2));


            if(employchoice == 1)
            {
                if(salary > 750 && r2 == (false))
                {
                    cout << "You hired R2-D2! \n";
                    cout << endl;

                    salary = salary - 750;

                    r2 = (true);

                    cout << "Money: $" << salary << endl;

                    system("pause");

                }

                else if(r2 == (true))
                {
                    cout << "You have already bought R2-D2!\n";
                    cout << endl;
                    system("pause");
                }

                else if(salary < 750 && r2 == false)
                {
                    cout << "You don't have enough money to hire Droid R2-D2!\n";
                    cout << "You can buy it when u got the cash!  :p \n";
                    system("pause");
                }

            }

            if(employchoice == 2)
            {
                if(salary > 900 && cp == (false))
                {
                    cout << "You hired C-3PO! \n";
                    cout << endl;

                    salary = salary - 900;

                    cout << "Money: $" << salary << endl;
                    cp = (true);


                    system("pause");
                }

                else if(salary < 900 && cp == (false))
                {
                    cout << "You don't have enough money to hire robot C-3PO!\n";
                    cout << "You can buy it when u got the cash!  :p \n";
                    system("pause");
                }

                else if(cp == (true))
                {
                    cout << "You have already bought C-3PO!\n";
                    cout << endl;
                    system("pause");
                }

            }

        }while (employchoice != 0);
    }

    // Profile Settings:

    else if(menuchoice == 5)
    {
        do
        {
            system("cls");

            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "        88888888  8888888888 88888888888 88888888888 8888888 8888    888  88888888   88888888       \n";
            cout << "       8888  8888 888            888         888       888   88888   888 8888  8888 8888  8888      \n";
            cout << "       88888      888            888         888       888   888888  888 888    888 88888           \n";
            cout << "        8888888   8888888        888         888       888   8888888 888 888         8888888        \n";
            cout << "           888888 888            888         888       888   888 8888888 888  88888     888888      \n";
            cout << "             8888 888            888         888       888   888  888888 888    888       8888      \n";
            cout << "       8888  8888 888            888         888       888   888   88888 8888  8888 8888  8888      \n";
            cout << "        88888888  8888888888     888         888     8888888 888    8888  888888888  88888888       \n";
            cout << endl;
            cout << "___________________________________________________________________________________________________ \n";
            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "Your Profile Name is: " << username << endl;
            cout << endl;
            cout << "Do you want to change your profile name? ('y' or 'n') : ";
            cin >> namechange;
            cout << endl;

            // Change Name:

            if(namechange == 'y')
            {
                cout << "Please enter a new name: ";
                cin >> username;
                cout << endl;
                cout << "Your profile name has been changed to " << username << "!" << endl;
            }

            //Stats View:

            cout << "Your current stats: \n";
            cout << endl;
            cout << "Salary: " << salary << endl;
            cout << "Day: " << day << endl;
            cout << "Cups: " << currentcups << endl;
            cout << "Customers: " << customers << endl;

            // Back to menu:

            cout << endl;
            cout << "0. to return." << endl;

            cin >> optchoice;

        }while(optchoice != 0);

    }

    if(menuchoice == 6)
    {
        system("cls");

        //Game main instructions and background:

        cout << "Hi " << username << ", welcome to star wars lounge! Here is some basic info to begin with: \n";
        cout << endl;
        cout << "___________________________________________________________________________________________________ \n";
        cout << "\t\t\t\tInstructions\n";
        cout << endl;
        cout << "* Numbers like 1, 2, 3, 4, 5... serve as controls." << endl;
        cout << "* 0 is always the return key in the menu." << endl;
        cout << "* To buy any item enter the amount and press enter." << endl;
        cout << "* Buy Inventory from the store before stating the game, so you have something to sell!" << endl;
        cout << endl;
        cout << endl;
        cout << "___________________________________________________________________________________________________ \n";
        cout << "\t\t\t\tGame Background\n";
        cout << endl;
        cout << "   Welcome to the Star Wars Lounge Tycoon game. In this game you will \n";
        cout << "start as a basic coffee shop owner who will work to level up and become \n";
        cout << "the best in the universe. Buy inventory and upgrades to succeed throughout \n";
        cout << "the game. There will be visitors from star wars, so you may get bonuses \n";
        cout << "from them and sometimes if you are unlucky Dark Vader will raid your lounge. \n";
        cout << "So Good Luck! \n";
        cout << "May the frappuccino be with you!\n";
        cout << endl;
        cout << endl;
        cout << "___________________________________________________________________________________________________ \n";
        cout << "\t\t\t\tYour Goal\n";
        cout << endl;
        cout << "   Your goal of the game will be to earn $10,000 and have your lounge \n";
        cout << "upgraded to its' elitist! Throughout the game, if at any point you run \n";
        cout << "out of a certain commodity and don't have enough money to restock and start\n";
        cout << "your day, you will be declared bankrupt and you will ultimately lose the \n";
        cout << "game.\n";
        cout << endl;
        cout << "___________________________________________________________________________________________________ \n";
        system("pause");

    }

    // Start the Day:

    else if(menuchoice == 7)
    {
        do
        {
            system("cls");

            cout << "___________________________________________________________________________________________________ \n";
            cout << endl;
            cout << "\t\t            ________   ___   ____                                              " << endl;
            cout << "\t\t           / __   __| / _ \\\ |  _ \\\                                         " << endl;
            cout << "\t\t     ______> \\\ | |   |  _  ||    /_____________________________              " << endl;
            cout << "\t\t    / _______/ |_|   |_| |_||_|\\\______________________________ \\\           " << endl;
            cout << "\t\t   / /                                                        \\\ \\\          " << endl;
            cout << "\t\t  | |                                                          | |             " << endl;
            cout << "\t\t  | |   ____    __   _  _    ____  ____  ___  ____  _  _  ___  | |             " << endl;
            cout << "\t\t  | |  (  _ \\\  /__\\\ ( \\\/ )  (  _ \\\( ___)/ __)(_  _)( \\\( )/ __) | |   " << endl;
            cout << "\t\t  | |   )(_) )/(__)\\\ \\\  /    ) _ < )__)( (_-. _)(_  )  ( \\\__ \\\ | |     " << endl;
            cout << "\t\t  | |  (____/(__)(__)(__)   (____/(____)\\\___/(____)(_)\\\_)(___/ | |         " << endl;
            cout << "\t\t  | |                                                          | |             " << endl;
            cout << "\t\t  | |                                                          | |             " << endl;
            cout << "\t\t  | |                                                          | |             " << endl;
            cout << "\t\t  | |                                                          | |             " << endl;
            cout << "\t\t   \\\ \\\____________________________    _   ___   ____   _______/ /          " << endl;
            cout << "\t\t    \\\___________________________  |  | | / _ \\\ |  _ \\\ / _______/         " << endl;
            cout << "\t\t                                | |/\\\| ||  _  ||    / > \\\                  " << endl;
            cout << "\t\t                                 \\\_/\\\_/ |_| |_||_|\\\_\\\|__/              " << endl;
            cout << endl;

            //Customer Generation:

            if(utensils == false || appliances == false || ingredients == false || electricity ==false)
            {
                cout << "You don't have enough inventory or appliances to sell anything! \n";
                cout << "0. Return to Home and buy inventory from the store. \n";
                cout << endl;
                cin >> startchoice;
            }

            if(items > 1)
                {
                    cout << "You still need to add items to your lounge menu!\n";
                    system("pause");
                }

            else
            {
                if(customers < currentcups && currentpower >= 1 && customers < currentingredients)
                {
                    if(ads == (false))
                        max = 15;

                    if(ads == (true))
                        max = 30;

                    //Average Cost calculator depending on menu items chosen:
                    if(cost >= 8)
                        cost = 3;

                    //Average Cost calculator depending on menu items chosen:
                    if(cost < 8)
                        cost = 2;


                    day++;
                    earning = 0;
                    tips = 0;

                    srand(time(0));
                    int customers = rand()%(max-min+1) + min;

                    if(r2 == (true))
                        customers = customers + (customers *.2);

                    if(cp == (true))
                        customers = customers + (customers *.4);

                    cout << "___________________________________________________________________________________________________ \n";
                    cout << "___________________________________________________________________________________________________ \n";
                    cout << endl;
                    cout << "Day " << day << endl;
                    cout << "You got " << customers << " customers. \n";
                    cout << "___________________________________________________________________________________________________ \n";
                    cout << endl;

                    while(customers > 0 && currentcups != 0 && currentingredients != 0 )
                    {
                        currentcups--;
                        currentingredients--;

                        if(wash == (false))
                            tips++;

                        if(wash == (true))
                            tips= tips+3;

                        if(r2 == (true))
                            tips = tips + 4;

                        if(cp == (true))
                            tips = tips + 6;

                        if(ads == (false) && wash == (false))
                            earning = earning+(cost);

                        if(ads == (true) && wash == (true))
                            earning = earning+6;

                        customers--;

                        if(customers > 0 && currentcups == 0)
                            cout << "You ran out of cups!" << endl;
                        if(customers > 0 && currentingredients <= 0)
                            cout << "You ran out of ingredients!" << endl;
                    }

                    if(solarpanels==(false))
                        currentpower--;

                    // Dark Vader Generator:

                    if(safe == (false))
                    {
                        srand(time(0));
                        darkvader = rand()%(4-1+1) + 1;

                        if(darkvader == 3)
                        {
                            cout << "You were raided by Dark Vader and his Troops!\n";

                            int loss = 0;

                            loss = earning + tips;
                            salary = salary - loss;

                            cout << endl;
                            cout << "You lost $" << loss << "." << endl;
                        }
                    }

                    salary = salary + earning + tips;

                    if(darkvader != 3)
                    {
                        cout << "Tips               $" << tips << endl;
                        cout << "Earning            $" << earning+tips << endl;
                    }

                    cout << "Salary             $" << salary << endl;
                    cout << "Cups                " << currentcups << endl;
                    cout << "Ingredients         " << currentingredients << endl;

                    if(solarpanels == (true))
                    {
                        cout << "You have free power courtesy of the solar-panel upgrade!\n";
                    }

                    else if(solarpanels == (false))
                        cout << "Power               " << currentpower << endl;


                    system("pause");

                }

                else// if(customers > currentcups || power < 1 || customers > currentingredients )
                {
                    if(currentcups == 0)
                        cout << "You don't have enough utensils to make and sell coffee!\n";

                    if(currentingredients == 0)
                        cout << "You don't have enough ingredients to brew coffee!\n";

                    if(currentpower == 0)
                        cout << "You don't have enough power to start the day!\n";

                    cout << endl;
                    cout << "0. Return to menu.\n";
                    cout << endl;
                    cin >> startchoice;
                }


            }


        }while(startchoice != 0);

    }

// Exit The Game:

}while(menuchoice != 0);

//End of Program:

return 0;
}
