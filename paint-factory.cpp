#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
string adminName = "hassan";
string adminPin = "123";
string managerName = "ali";
string managerpin = "111";
const int size = 10;
int currentWorkers = 0;
string workerName[size];
int workerAge[size];
int workerExperience[size];
string paintName[size];
int paintQuantity[size];
int paintPrice[size];
int sort[size];
int copyArray[size];
string messageArray;
string messageArrayC;
string messageStore;
int currentPaint = 0;
void admin();
int manue();
void addWorkersFunction(string wname, int wage, int wexperience);
void changeWorkersFunction(int i, string nname, int nage, int nexperience);
void addPaintFunction(string paint, int pquantity, int pprice);
void changePaintFunction(int i, string npaint, int nquantity, int nprice);
int managerManue();
void loginManager();
void addWorkers();
void viewWorker();
void demoWorker();
void changeWorker();
void addPaint();
void viewPaint();
void demoPaint();
void changePaint();
void sortByPrice();
void sortByExperience();
int customerManue();
void customerFunction();
void buyPaint();
void verity();
void messageForManager();
void showMsg();
void showMsgToCustomer();
void display();
void messageForCustomer();
void messageForManagerFromAdmin();
void showMsgToManager();
int main()
{
    display();
    cout << "press any key to countinue" << endl;
    getch();
    int option = -2;
    while (option != 4)
    {

        system("CLS");
        cout << " 1:Login as Admin" << endl;
        cout << " 2:Login as manager" << endl;
        cout << " 3:customer" << endl;
        cout << " 4:Exit" << endl;
        cout << "enter your option" << endl;
        cin >> option;
        system("cls");
        if (option == 1)
        {
            admin();
        }
        if (option == 2)
        {
            loginManager();
        }
        if (option == 3)
        {
            customerFunction();
        }
    }
}
void admin()
{
    string userName, userPin;
    cout << "enter the admin name" << endl;
    cin >> userName;
    cout << "enter the admin password" << endl;
    cin >> userPin;
    if (userName == adminName && userPin == adminPin)
    {
        cout << "sucessfully login" << endl;
        cout << "press any key to countinue" << endl;
        getch();

        int adminOption = -1;
        demoWorker();
        while (adminOption != 8)
        {
            system("cls");
            adminOption = manue();
            if (adminOption == 1)
            {
                addWorkers();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 2)
            {
                viewWorker();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 3)
            {
                changeWorker();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 4)
            {
                viewPaint();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 5)
            {
                sortByPrice();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 6)
            {
                sortByExperience();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 7)
            {
                messageForManager();
                cout << "press any key to countinue" << endl;
                getch();
            }
        }
    }
    else
    {
        cout << "you are not admin try again" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
int manue()
{
    int option = -5;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|         WELCOM TO ADMIN SECTION               |" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1. Admin can add workers detail" << endl;
    cout << "2. admin can view the workers details." << endl;
    cout << "3. admin can change the workers detail" << endl;
    cout << "4. Admin can view paint detail" << endl;
    cout << "5. view sortout the paints by price" << endl;
    cout << "6. view workers sort by experience" << endl;
    cout << "7. send message to manager" << endl;
    cout << "8. exit" << endl;
    cout << "enter your option" << endl;
    cin >> option;
    system("cls");
    return option;
}
void loginManager()
{
    string manager, pin;
    cout << "enter the manager id" << endl;
    cin >> manager;
    cout << "enter the manager pin" << endl;
    cin >> pin;
    if (managerName == manager && managerpin == pin)
    {
        cout << "sucessfully login" << endl;

        int mOption = -5;
        //demoPaint();
        while (mOption != 9)
        {
            system("cls");

            mOption = managerManue();
            if (mOption == 1)
            {
                addPaint();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 2)
            {
                viewPaint();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 3)
            {
                changePaint();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 4)
            {
                sortByPrice();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 5)
            {
                sortByExperience();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 6)
            {
                showMsgToManager();
                getch();
            }
            if (mOption == 7)
            {
                messageForCustomer();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 8)
            {
                showMsg();
                getch();
            }
        }
    }
    else
    {
        cout << "you are not manager" << endl;
    }
}
int managerManue()
{
    int managerOption;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|         WELCOM TO MANAGER SECTION             |" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1. add paints details" << endl;
    cout << "2. view paint details" << endl;
    cout << "3. change paint details" << endl;
    cout << "4. sortout the paints by price" << endl;
    cout << "5. sort by experience" << endl;
    cout << "6. view message of customer" << endl;
    cout << "7. send message to customer" << endl;
    cout << "8. view message of admin" << endl;
    cout << "9. exit" << endl;
    cout << "enter your option" << endl;
    cin >> managerOption;
    system("cls");
    return managerOption;
}
void addWorkers()
{
    string wname;
    int wage;
    int wexperience;
    cout << "enter the name of worker" << endl;
    cin >> wname;
    cout << "enter the age of worker" << endl;
    cin >> wage;
    cout << "enter the work experience of worker" << endl;
    cin >> wexperience;
    addWorkersFunction(wname, wage, wexperience);
}
void addWorkersFunction(string wname, int wage, int wexperience)
{
    if (wage > 18 && wage < 60)
    {
        if (currentWorkers <= 10)
        {
            workerName[currentWorkers] = wname;
            workerAge[currentWorkers] = wage;
            workerExperience[currentWorkers] = wexperience;
            currentWorkers++;
        }
        else
        {
            cout << "you have capacity of 10 workers" << endl;
        }
    }
    else
    {
        cout << "age Error" << endl;
    }
}
void viewWorker()
{
    cout << "WORKER"
         << "\t"
         << "AGE"
         << "\t"
         << "EXPERIENCE IN YEARS" << endl;
    for (int i = 0; i <= currentWorkers; i++)
    {
        cout << workerName[i] << "\t" << workerAge[i] << "\t" << workerExperience[i] << endl;
    }
}
void demoWorker()
{
    addWorkersFunction("kamran", 30, 9);
    addWorkersFunction("talha", 45, 15);
    addWorkersFunction("haris", 48, 20);
    addWorkersFunction("furkan", 25, 17);
}
void changeWorker()
{
    string cname;
    int cage;
    int cexperience;
    cout << "enter the name of worker which you want to change" << endl;
    cin >> cname;
    cout << "enter the age of worker which you want to change" << endl;
    cin >> cage;
    cout << "enter the experience of worker which you want to change" << endl;
    cin >> cexperience;
    for (int i = 0; i <= currentWorkers; i++)
    {
        if (cname == workerName[i] && cage == workerAge[i] && cexperience == workerExperience[i])
        {
            string nname;
            int nage;
            int nexperience;
            cout << "enter the name of new worker" << endl;
            cin >> nname;
            cout << "enter the age of new worker" << endl;
            cin >> nage;
            cout << "enter the experience of new worker" << endl;
            cin >> nexperience;
            changeWorkersFunction(i, nname, nage, nexperience);
        }
    }
}
void changeWorkersFunction(int i, string nname, int nage, int nexperience)
{
    if (nage > 18 && nage < 60)
    {
        workerName[i] = nname;
        workerAge[i] = nage;
        workerExperience[i] = nexperience;
    }
    else
    {
        cout << "age Error" << endl;
    }
}
void addPaint()
{
    string paint;
    int pprice;
    int pquantity;
    cout << "enter the paint" << endl;
    cin >> paint;
    cout << "enter the quantity of paint in buckets" << endl;
    cin >> pquantity;
    cout << "enter the work price of paint" << endl;
    cin >> pprice;
    addPaintFunction(paint, pquantity, pprice);
}
void addPaintFunction(string paint, int pquantity, int pprice)
{
    if (pquantity > 0 && pquantity < 60)
    {
        if (pprice > 0)
        {
            paintName[currentPaint] = paint;
            paintQuantity[currentPaint] = pquantity;
            paintPrice[currentPaint] = pprice;
            currentPaint++;
        }
        else
        {
            cout << "price error" << endl;
        }
    }
    else
    {
        cout << "quantity Error" << endl;
    }
}
void viewPaint()
{
    cout << "PAINT"
         << "\t"
         << "\t"
         << "BUCKETS"
         << "\t"
         << "\t"
         << "PRICE" << endl;
    for (int i = 0; i <= currentPaint; i++)
    {
        cout << paintName[i] << "\t" << paintQuantity[i] << "\t"
             << "\t" << paintPrice[i] << endl;
    }
}
void demoPaint()
{
    addPaintFunction("apple-white", 5, 2000);
    addPaintFunction("rock-wall", 6, 6000);
    addPaintFunction("graphy-vv", 4, 3000);
    addPaintFunction("off-white", 9, 2000);
}
void changePaint()
{
    string cpaint;
    int cquantity;
    int cprice;
    cout << "enter the name of paint which you want to change" << endl;
    cin >> cpaint;
    cout << "enter the buckets of paint which you want to change" << endl;
    cin >> cquantity;
    cout << "enter the price of paint which you want to change" << endl;
    cin >> cprice;
    for (int i = 0; i <= currentPaint; i++)
    {
        if (cpaint == paintName[i] && cquantity == paintQuantity[i] && cprice == paintPrice[i])
        {
            string npaint;
            int nquantity;
            int nprice;
            cout << "enter the name of new paint" << endl;
            cin >> npaint;
            cout << "enter the buckets of new paint" << endl;
            cin >> nquantity;
            cout << "enter the price of new paint" << endl;
            cin >> nprice;
            changePaintFunction(i, npaint, nquantity, nprice);
        }
    }
}
void changePaintFunction(int i, string npaint, int nquantity, int nprice)
{
    if (nquantity > 0 && nquantity < 60)
    {
        if (currentPaint <= 10)
        {
            paintName[i] = npaint;
            paintQuantity[i] = nquantity;
            paintPrice[i] = nprice;
        }
        else
        {
            cout << "you have the capacity of 10 " << endl;
        }
    }
    else
    {
        cout << "quantity Error" << endl;
    }
}
void sortByPrice()
{

    for (int i = 0; i <= currentPaint; i++)
    {

        copyArray[i] = paintPrice[i];
    }

    int largestidx = 0;
    for (int j = 0; j <= currentPaint; j++)
    {
        int largest = 0;
        for (int i = 0; i <= currentPaint; i++)
        {
            if (copyArray[i] > largest)
            {
                largest = copyArray[i];
                largestidx = i;
            }
        }
        sort[j] = largestidx;
        copyArray[largestidx] = -1;
    }
    cout << "price" << endl;
    cout << "PAINT"
         << "\t"
         << "\t"
         << "BUCKETS"
         << "\t"
         << "\t"
         << "PRICE" << endl;
    for (int k = 0; k <= currentPaint; k++)
    {
        largestidx = sort[k];
        cout << paintName[largestidx] << "\t" << paintQuantity[largestidx] << "\t"
             << "\t" << paintPrice[largestidx] << endl;
    }
}
void sortByExperience()
{

    for (int i = 0; i <= currentWorkers; i++)
    {

        copyArray[i] = workerExperience[i];
    }

    int largestidx = -0;
    for (int j = 0; j <= currentWorkers; j++)
    {
        int largest = 0;
        for (int i = 0; i <= currentWorkers; i++)
        {
            if (copyArray[i] > largest)
            {
                largest = copyArray[i];
                largestidx = i;
            }
        }
        sort[j] = largestidx;
        copyArray[largestidx] = -1;
    }
    cout << "price" << endl;
    cout << "WORKER"
         << "\t"
         << "\t"
         << "AGE"
         << "\t"
         << "\t"
         << "EXPERIENCE" << endl;
    for (int k = 0; k <= currentWorkers; k++)
    {
        largestidx = sort[k];
        cout << workerName[largestidx] << "\t"
             << "\t" << workerAge[largestidx] << "\t"
             << "\t" << workerExperience[largestidx] << endl;
    }
}
void customerFunction()
{
    int customerOption;
    while (customerOption != 6)
    {
        customerOption = customerManue();
        if (customerOption == 1)
        {
            system("cls");
            viewPaint();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 2)
        {
            buyPaint();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 3)
        {
            verity();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 4)
        {
            messageForManagerFromAdmin();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 5)
        {
            showMsgToCustomer();
            getch();
        }
    }
}
int customerManue()
{
    int customerOption = 0;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|         WELCOM TO CUSTOMER SECTION            |" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1.view the stocks" << endl;
    cout << "2.buy paint" << endl;
    cout << "3.view the verity of paints" << endl;
    cout << "4.send message to manager" << endl;
    cout << "5.view message of manager" << endl;
    cout << "6.exit" << endl;
    cout << "enter your option" << endl;
    cin >> customerOption;
    system("cls");
    return customerOption;
}
void buyPaint()
{
    string bpaint;
    cout << "enter the name of paint which you want to buy" << endl;
    cin >> bpaint;
    int bquantity;
    cout << "enter the quantity of buckets" << endl;
    cin >> bquantity;
    int totalprice;
    for (int i = 0; i <= currentPaint; i++)
    {
        if (bpaint == paintName[i])
        {
            totalprice = bquantity * paintPrice[i];
            paintQuantity[i] = paintQuantity[i] - bquantity;
        }
    }
    cout << "your total price is  " << totalprice << endl;
}
void verity()
{
    cout << "1.blue sparkal paint" << endl;
    cout << "2.African violet paint" << endl;
    cout << "3.Air superiority blue paint" << endl;
    cout << "4.Alabaster paint" << endl;
    cout << "5.Alice blue paint" << endl;
    cout << "6.off-white paint" << endl;
    cout << "7.apple white paint" << endl;
    cout << "8.rock wall paint" << endl;
    cout << "9.graphy paint" << endl;
}
void messageForManager()
{
    cout << "write your massage for manager" << endl;
    cin >> messageArray;
}
void showMsg()
{
    cout << "message of customer" << endl;
    for (int i = 0; messageArray[i] != '\0'; i++)
    {

        cout << messageArray[i];
    }
}
void messageForCustomer()
{
    cout << "write your massage for customer" << endl;
    cin >> messageArrayC;
}
void showMsgToCustomer()
{
    cout << "message of manager" << endl;
    for (int i = 0; messageArrayC[i] != '\0'; i++)
    {

        cout << messageArrayC[i];
    }
}
void messageForManagerFromAdmin()
{
    cout << "write your massage for manager" << endl;
    cin >> messageStore;
}
void showMsgToManager()
{
    cout << "message of admin" << endl;
    for (int i = 0; messageStore[i] != '\0'; i++)
    {

        cout << messageStore[i];
    }
}
void display()
{
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << " ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||     ________   _______  _______         __________        ________  ________   _______ ________  _______  _______                  ||" << endl;
    cout << " ||     |       | |       |    |    |-    |     |            |          |       | |           |     |       | |      | |     |         ||" << endl;
    cout << " ||     |       | |       |    |    | -   |     |            |          |       | |           |     |       | |      | |_____|         ||" << endl;
    cout << " ||     |_______| |_______|    |    |  -  |     |            |_______   |_______| |           |     |       | |______|    |            ||" << endl;
    cout << " ||     |         |       |    |    |   - |     |            |          |       | |           |     |       | |+          |            ||" << endl;
    cout << " ||     |         |       | ___|___ |    -|     |            |          |       | |_______    |     |_______| | +         |            ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||    +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++       ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||   developer: HASSAN NISAR                                                                                                          ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||                                                                                                                                    ||" << endl;
    cout << " ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}