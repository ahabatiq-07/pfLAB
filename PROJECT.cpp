#include <iostream>
#include <string>
using namespace std;

int main() {

    // ─── Product Data (1D Arrays) ───────────────────────────────────────────

    // Cakes
    string cakeNames[5] = {"Chocolate Fudge Cake", "Red Velvet Cake", "Black Forest Cake", "Vanilla Dream Cake", "Lemon Drizzle Cake"};
    int    cakePrices[5] = {1500, 1800, 2000, 1200, 1400};

    // Pastries
    string pastryNames[5] = {"Croissant", "Éclair", "Danish Pastry", "Cream Puff", "Fruit Tart"};
    int    pastryPrices[5] = {200, 250, 180, 220, 300};

    // Custom cake options
    string cakeFlavours[4]  = {"Chocolate", "Vanilla", "Strawberry", "Red Velvet"};
    string cakeFrostings[3] = {"Buttercream", "Cream Cheese", "Whipped Cream"};
    string cakeSizes[3]     = {"Small (6\")  - Rs.800", "Medium (8\") - Rs.1200", "Large (10\") - Rs.1800"};
    int    cakeSizePrices[3] = {800, 1200, 1800};

    int mainChoice = 0;

    cout << "\n";
    cout << "  ****************************************************\n";
    cout << "  *                                                  *\n";
    cout << "  *         SWEET CRUMBS BAKERY - WELCOME!          *\n";
    cout << "  *                                                  *\n";
    cout << "  ****************************************************\n";

    // ─── MAIN LOOP ──────────────────────────────────────────────────────────
    while (mainChoice != 6) {

        cout << "\n  ============= MAIN MENU =============\n";
        cout << "  1. Cakes\n";
        cout << "  2. Pastries\n";
        cout << "  3. Make Your Own Cake\n";
        cout << "  4. Delivery Info\n";
        cout << "  5. Contact Us\n";
        cout << "  6. Exit\n";
        cout << "  =====================================\n";
        cout << "  Enter your choice: ";
        cin  >> mainChoice;

        // ── INVALID INPUT ──────────────────────────────────────────────────
        if (mainChoice < 1 || mainChoice > 6) {
            cout << "\n  [!] Invalid choice. Please enter a number between 1 and 6.\n";
        }

        // ══════════════════════════════════════════════════════════════════
        // OPTION 1 — CAKES
        // ══════════════════════════════════════════════════════════════════
        else if (mainChoice == 1) {

            cout << "\n  --------- OUR CAKES ---------\n";
            for (int i = 0; i < 5; i++) {
                cout << "  " << (i + 1) << ". " << cakeNames[i]
                     << " - Rs." << cakePrices[i] << "\n";
            }
            cout << "  6. Back to Main Menu\n";
            cout << "  ------------------------------\n";

            int cakeChoice = 0;
            cout << "  Select a cake to order (or 6 to go back): ";
            cin  >> cakeChoice;

            if (cakeChoice == 6) {
                cout << "  Returning to main menu...\n";
            }
            else if (cakeChoice >= 1 && cakeChoice <= 5) {
                int qty = 0;
                cout << "\n  You selected: " << cakeNames[cakeChoice - 1] << "\n";
                cout << "  Price per cake: Rs." << cakePrices[cakeChoice - 1] << "\n";
                cout << "  How many would you like to order? ";
                cin  >> qty;

                if (qty <= 0) {
                    cout << "\n  [!] Invalid quantity.\n";
                }
                else {
                    int total = qty * cakePrices[cakeChoice - 1];
                    cout << "\n  ╔══════════════════════════════╗\n";
                    cout << "  ║         ORDER SUMMARY        ║\n";
                    cout << "  ╠══════════════════════════════╣\n";
                    cout << "  ║  Item  : " << cakeNames[cakeChoice - 1] << "\n";
                    cout << "  ║  Qty   : " << qty << "\n";
                    cout << "  ║  Total : Rs." << total << "\n";
                    cout << "  ╚══════════════════════════════╝\n";
                    cout << "  Thank you for your order! We'll get it ready soon.\n";
                }
            }
            else {
                cout << "\n  [!] Invalid selection.\n";
            }
        }

        // ══════════════════════════════════════════════════════════════════
        // OPTION 2 — PASTRIES
        // ══════════════════════════════════════════════════════════════════
        else if (mainChoice == 2) {

            cout << "\n  --------- OUR PASTRIES ---------\n";
            for (int i = 0; i < 5; i++) {
                cout << "  " << (i + 1) << ". " << pastryNames[i]
                     << " - Rs." << pastryPrices[i] << "\n";
            }
            cout << "  6. Back to Main Menu\n";
            cout << "  --------------------------------\n";

            int pastryChoice = 0;
            cout << "  Select a pastry to order (or 6 to go back): ";
            cin  >> pastryChoice;

            if (pastryChoice == 6) {
                cout << "  Returning to main menu...\n";
            }
            else if (pastryChoice >= 1 && pastryChoice <= 5) {
                int qty = 0;
                cout << "\n  You selected: " << pastryNames[pastryChoice - 1] << "\n";
                cout << "  Price each: Rs." << pastryPrices[pastryChoice - 1] << "\n";
                cout << "  How many would you like to order? ";
                cin  >> qty;

                if (qty <= 0) {
                    cout << "\n  [!] Invalid quantity.\n";
                }
                else {
                    int total = qty * pastryPrices[pastryChoice - 1];
                    cout << "\n -------------------------------\n";
                    cout << "   ---------ORDER SUMMARY---------        \n";
                    cout << "   -------------------------------\n";
                    cout << "     Item  : " << pastryNames[pastryChoice - 1] <<endl;
                    cout << "     Qty   : " << qty << "\n";
                    cout << "     Total : Rs." << total <<endl;
                    cout << "   -------------------------------\n";
                    cout << "  Thank you for your order! Freshly baked just for you.\n";
                }
            }
            else {
                cout << "\n  [!] Invalid selection.\n";
            }
        }

        // ══════════════════════════════════════════════════════════════════
        // OPTION 3 — MAKE YOUR OWN CAKE
        // ══════════════════════════════════════════════════════════════════
        else if (mainChoice == 3) {

            cout << "\n  ======= BUILD YOUR CUSTOM CAKE =======\n";

            // Step 1: Size
            cout << "\n  STEP 1 — Choose your cake size:\n";
            for (int i = 0; i < 3; i++) {
                cout << "  " << (i + 1) << ". " << cakeSizes[i] << "\n";
            }
            int sizeChoice = 0;
            cout << "  Your choice: ";
            cin  >> sizeChoice;

            if (sizeChoice < 1 || sizeChoice > 3) {
                cout << "\n  [!] Invalid size choice. Returning to menu.\n";
            }
            else {
                // Step 2: Flavour
                cout << "\n  STEP 2 — Choose your flavour:\n";
                for (int i = 0; i < 4; i++) {
                    cout << "  " << (i + 1) << ". " << cakeFlavours[i] << "\n";
                }
                int flavourChoice = 0;
                cout << "  Your choice: ";
                cin  >> flavourChoice;

                if (flavourChoice < 1 || flavourChoice > 4) {
                    cout << "\n  [!] Invalid flavour choice. Returning to menu.\n";
                }
                else {
                    // Step 3: Frosting
                    cout << "\n  STEP 3 — Choose your frosting:\n";
                    for (int i = 0; i < 3; i++) {
                        cout << "  " << (i + 1) << ". " << cakeFrostings[i] << "\n";
                    }
                    int frostingChoice = 0;
                    cout << "  Your choice: ";
                    cin  >> frostingChoice;

                    if (frostingChoice < 1 || frostingChoice > 3) {
                        cout << "\n  [!] Invalid frosting choice. Returning to menu.\n";
                    }
                    else {
                        // Step 4: Message on cake
                        string cakeMessage = "";
                        cout << "\n  STEP 4 — Any message on your cake? (type 'none' to skip)\n";
                        cout << "  Message: ";
                        cin.ignore();
                        getline(cin, cakeMessage);

                        int totalPrice = cakeSizePrices[sizeChoice - 1];

                        cout << "\n  ╔══════════════════════════════════════╗\n";
                        cout << "  ║       YOUR CUSTOM CAKE ORDER         ║\n";
                        cout << "  ╠══════════════════════════════════════╣\n";
                        cout << "  ║  Size    : " << cakeSizes[sizeChoice - 1]     << "\n";
                        cout << "  ║  Flavour : " << cakeFlavours[flavourChoice - 1]  << "\n";
                        cout << "  ║  Frosting: " << cakeFrostings[frostingChoice - 1] << "\n";
                        if (cakeMessage != "none" && cakeMessage != "") {
                            cout << "  ║  Message : \"" << cakeMessage << "\"\n";
                        }
                        cout << "  ║  Total   : Rs." << totalPrice               << "\n";
                        cout << "  ╚══════════════════════════════════════╝\n";
                        cout << "  Your custom cake has been placed! Ready in 24 hours.\n";
                    }
                }
            }
        }

        // ══════════════════════════════════════════════════════════════════
        // OPTION 4 — DELIVERY INFO
        // ══════════════════════════════════════════════════════════════════
        else if (mainChoice == 4) {

            cout << "\n  ============ DELIVERY INFO ============\n";
            cout << "  We deliver across the city!\n\n";
            cout << "  Delivery Areas & Charges:\n";
            cout << "  - Zone A (0–5 km)  : Rs.100\n";
            cout << "  - Zone B (5–10 km) : Rs.200\n";
            cout << "  - Zone C (10–20 km): Rs.350\n\n";
            cout << "  Delivery Hours:\n";
            cout << "  - Mon to Sat : 9:00 AM – 8:00 PM\n";
            cout << "  - Sunday     : 10:00 AM – 5:00 PM\n\n";
            cout << "  Notes:\n";
            cout << "  - Free delivery on orders above Rs.3000!\n";
            cout << "  - Custom cake orders need 24 hrs advance notice.\n";
            cout << "  - Same-day delivery available before 2 PM.\n";
            cout << "  =======================================\n";
        }

        // ══════════════════════════════════════════════════════════════════
        // OPTION 5 — CONTACT US
        // ══════════════════════════════════════════════════════════════════
        else if (mainChoice == 5) {

            cout << "\n  ============ CONTACT US ============\n";
            cout << "  Sweet Crumbs Bakery\n";
            cout << "  123 Baker Street, Lahore, Pakistan\n\n";
            cout << "  Phone   : +92-300-1234567\n";
            cout << "  Email   : hello@sweetcrumbs.pk\n";
            cout << "  Website : www.sweetcrumbs.pk\n\n";
            cout << "  Opening Hours:\n";
            cout << "  - Mon to Sat : 8:00 AM – 9:00 PM\n";
            cout << "  - Sunday     : 9:00 AM – 6:00 PM\n\n";
            cout << "  Follow us on Instagram: @SweetCrumbsPK\n";
            cout << "  ====================================\n";

            // Leave a message feature
            int contactChoice = 0;
            cout << "\n  Would you like to leave a message?\n";
            cout << "  1. Yes\n";
            cout << "  2. No (Back to menu)\n";
            cout << "  Your choice: ";
            cin  >> contactChoice;

            if (contactChoice == 1) {
                string name = "", message = "";
                cout << "\n  Your Name   : ";
                cin.ignore();
                getline(cin, name);
                cout << "  Your Message: ";
                getline(cin, message);
                cout << "\n  Thank you, " << name << "! We've received your message.\n";
                cout << "  Our team will get back to you within 24 hours.\n";
            }
            else {
                cout << "  Returning to main menu...\n";
            }
        }

        // ══════════════════════════════════════════════════════════════════
        // OPTION 6 — EXIT
        // ══════════════════════════════════════════════════════════════════
        else if (mainChoice == 6) {
            cout << "\n  ****************************************************\n";
            cout << "  *   Thank you for visiting Sweet Crumbs Bakery!   *\n";
            cout << "  *       Have a sweet day! See you soon :)          *\n";
            cout << "  ****************************************************\n\n";
        }

    } // end while

    return 0;
}