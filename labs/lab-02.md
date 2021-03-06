# Εργαστήριο 2

Το περιεχόμενο του 2ου εργαστηρίου είναι το εξής:

- Χρήση της οδηγίας #define
- Χρήση της εντολής if
- Επαναληπτική εκτέλεση προτάσεων
- Εντοπισµός συντακτικών σφαλµάτων σε ένα πρόγραµµα

## Άσκηση 2.1 - ∆ίσεκτο έτος

Να γραφεί πρόγραµµα στη C++ το οποίο να ζητάει ένα έτος και να εµφανίζει αν το έτος είναι δίσεκτο ή όχι. Στη περίπτωση που το έτος είναι δίσεκτο να εµφανίζει τη λέξη "Disekto"  διαφορετικά να εµφανίζει τη λέξη "Kanoniko".

Το πρόγραµµα θα πρέπει να έχει επαναληπτική λειτουργία και θα σταµατάει όταν ως έτος δοθεί το 0 ή αρνητικός αριθµός (<=0).

Τέλος, να εµφανίζει το ονοµατεπώνυµό σας το οποίο θα πρέπει µε την οδηγία #define να έχει ορισθεί ως σταθερά στην αρχή του προγράµµατος.

Γνωρίζουµε ότι: τα έτη που διαιρούνται ακριβώς µε το 4 και δεν διαιρούνται ακριβώς µε το 100 είναι δίσεκτα. Επίσης δίσεκτα είναι τα έτη που διαιρούνται ακριβώς µε το 400.

### Προσέξτε τα παρακάτω

- Πρώτα κάντε το πρόγραµµα να δουλεύει χωρίς επαναληπτική λειτουργία και µετά προσθέστε αυτή τη δυνατότητα.
- Στις διαφάνειες 3 και 4 θα βρείτε τη σύνταξη της if καθώς και περιπτώσεις εµφωλευµένων if! Στις διαφάνειες 5 και 6 τη σύνταξη των εντολών while και do...while.
- ∆οκιµάστε το πρόγραµµα µε τα έτη 2000, 1996 που είναι δίσεκτα και τα 2001 και 2100 που δεν είναι δίσεκτα.
- Για να διαιρείται ακριβώς ένας αριθµός a µε έναν αριθµό b, πρέπει το υπόλοιπο της διαίρεσης του α µε το b να είναι 0.
- Ο τελεστής υπολοίπου είναι το `%`. Αν `α % b` είναι ίσο µε 0, τότε το α διαιρείται ακριβώς µε το b.
- Ο τελεστής σύγκρισης για ισότητα είναι `==` και όχι `=`.
- Στη C++ το λογικό `AND` υλοποιείται από τον τελεστή `&&` και το λογικό OR από τον τελεστή `||` (ο χαρακτήρας `|` βγαίνει µε Shift και το πλήκτρο πάνω από το Enter).

```c++
#include <iostream>
#define ONOMA "Yoda"
using namespace std;

int main()
{
    int etos;
    do
    {
        cout << "Dose etos :";
        cin >> etos;
        if (etos>0)
        {
          if ((etos%4 == 0 && etos%100!=0) || etos%400==0)
              cout << "Disekto\n";
          else
              cout << "Kanoniko\n";
        }
    } while (etos>0);
    cout << ONOMA << endl;
    return 0;
}
```

## Άσκηση 2.2 - Βρείτε τα συντακτικά και λογικά λάθη

Το πρόγραµµα ζητάει τρεις βαθµούς και εµφανίζει τον µέσο όρο τους. Αν ο µέσος όρος είναι µεγαλύτερος ή ίσος µε 5 εµφανίζει 'Περασες' διαφορετικά εµφανίζει 'Κόπηκες'. Όµως είναι γεµάτο συντακτικά αλλά και λογικά σφάλµατα. Ανοίξτε το αρχείο και προσπαθήστε να τα εντοπίσετε και να τα διορθώσετε!

Προσθέστε στο πρόγραµµα επαναληπτική λειτουργία ώστε να ζητάει και να υπολογίζει τον µέσο όρο πολλών φοιτητών. Σκεφτείτε ποιο κοµµάτι του κώδικα πρέπει να επαναλαµβάνεται.

Η επαναληπτική λειτουργία πρέπει να σταµατάει όταν ο χρήστης δώσει έστω και έναν αρνητικό βαθµό (π.χ -1).

```c++
#include <iostream>
#define TMHMA "TMHMA POLITISMIKHS TEXNOLOGIAS"
using namespace std;

int main()
{
    float b1,b2,b3,mo;
    do{
        cout << "Dose treis bathmoys ";
        cin >> b1 >> b2 >> b3;
        if(b1 >= 0 && b2 >= 0 && b3 >= 0){
            mo=(b1+b2+b3)/3;
            cout << "o mesos oros einai:" << mo << endl;
            if (mo>=5)
                cout << "Perases" << endl;
            else
                cout << "Kopikes" << endl;
        }
    }while(b1>=0 && b2>=0 && b3>=0);
    cout << TMHMA << endl;
    return 0;
}
```

## Άσκηση 2.3 - Για όσους τελειώσουν γρήγορα και έχουν όρεξη ...

Κάντε ένα πρόγραµµα που να υπολογίζει και να εµφανίζει το άθροισµα όλων των ακέραιων αριθµών από το 1 µέχρι το 1000 (1+2+3+4+5+ ........ +1000)!

```c++
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i;
    for(i = 1; i <= 1000; i++){
        sum += i;
    }
    cout << "To athroisma twn arithmwn apo to 1 ews kai to 1000 einai: " << sum;
    return 0;
}
```
