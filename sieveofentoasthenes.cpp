#include <iostream>
#include <vector>

using namespace std;

void sieveOfEratosthenes(int n) {
    // एक boolean vector बना रहे हैं और शुरुआत में सबको true (Prime) मान रहे हैं
    // size n+1 लिया है ताकि हम index n तक आसानी से पहुँच सकें
    vector<bool> isPrime(n + 1, true);

    // 0 और 1 प्राइम नंबर नहीं होते हैं, इसलिए इन्हें false कर देंगे
    isPrime[0] = isPrime[1] = false;

    // Sieve Algorithm की मुख्य लूप
    for (int p = 2; p * p <= n; p++) {
        // अगर isPrime[p] अभी भी true है, तो इसका मतलब यह प्राइम नंबर है
        if (isPrime[p] == true) {
            // p के सभी multiples (गुणांकों) को false (not prime) मार्क करें
            // शुरुआत p*p से करते हैं क्योंकि उससे छोटे multiples पहले ही कवर हो चुके होते हैं
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // सभी प्राइम नंबर्स को प्रिंट करना
    cout << "1 se " << n << " ke beech ke Prime Numbers yeh hain:\n";
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Aapko kis number tak ke prime numbers chahiye? (N enter karein): ";
    cin >> n;

    // function को कॉल कर रहे हैं
    sieveOfEratosthenes(n);

    return 0;
}

