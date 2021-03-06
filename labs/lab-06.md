# Εργαστήριο 6

Το περιεχόμενο του 6ου εργαστηρίου είναι το εξής:

- Δείκτες σε αντικείµενα
- Αντικείµενα ως παράµετροι σε συναρτήσεις
- Η κλάση string

## Άσκηση 6.1 - Τροποποίηση της κλάσης Καφετιέρα

Αντικείµενο του σηµερινού προγράµµατος είναι η µοντελοποίηση αντικειµένων **ΚΑΦΕΤΙΕΡΑΣ**. Θα προσπαθήσουµε να προσοµοιάσουµε τη λειτουργία µιας καφετιέρας µέσω των εργαλείων που διαθέτει η C++. Οι καφετιέρες που θα φτιάξουµε θα κάνουν σκέτο, µέτριο και γλυκό καφέ! Κάθε καφετιέρα θα έχει τα ακόλουθα χαρακτηριστικά:

Η κλάση kafetiera έχει τις ακόλουθες µεταβλητές-µέλη:

- **Χρώµα**: Προσδιορίζει το χρώµα της π.χ Ροζ.
- **Μάρκα**: Προσδιορίζει τη µάρκα της π.χ Philips.
- **Νερό**: Προσδιορίζει σε γραµµάρια τη ποσότητα.
του νερού που έχει µέσα η καφετιέρα.
- **Ζάχαρη**: Προσδιορίζει σε γραµµάρια τη ποσότητα της ζάχαρης που έχει µέσα η καφετιέρα.
- **Καφές**: Προσδιορίζει σε γραµµάρια τη ποσότητα του καφέ που έχει µέσα η καφετιέρα.

και τις ακόλουθες µεθόδους:

- **Γέµισµα**: Γεµίζει την καφετιέρα µε υλικά: 1000γρ νερό, 200γρ ζάχαρη και 100γρ καφέ.
- **Σκέτος**: Φτιάχνει έναν ή περισσότερους σκέτους καφέδες. Κάθε σκέτος καφές χρησιµοποιεί 100γρ νερού και 15γρ καφέ.
- **Μέτριος**: Φτιάχνει έναν ή περισσότερους µέτριους καφέδες. Κάθε µέτριος καφές χρησιµοποιεί 100γρ νερού, 10γρ καφέ και 10 γρ ζάχαρη.
- **Γλυκός**: Φτιάχνει έναν ή περισσότερους γλυκούς καφέδες. Κάθε γλυκός καφές χρησιµοποιεί 100γρ νερού, 10γρ καφέ και 20 γρ ζάχαρη.
- **Κατάσταση**: Μας εµφανίζει τις ποσότητες υλικών που έχουν µείνει στη καφετιέρα.

### Βήμα 1

Κατεβάστε το αρχείο **kodikas6.zip** και αντιγράψτε όλα τα αρχεία που περιέχει στο φάκελο "My documents". Το αρχείο **Lab6_1.cpp** περιέχει τη κλάση **kafetiera** την οποία πρέπει να τροποποιήσουµε. Ανοίξτε το µε το περιβάλλον του DEV C++.
Μελετήστε τη κλάση **kafetiera**, και τις µεθόδους της. Στη συνάρτηση **main()**
Δηµιουργήστε δύο αντικείµενα καφετιέρες **kaf1 & kaf2** µε υλικά νερό, ζάχαρη καφέ 2000,300,200 και 1500,250,150 αντίστοιχα, **χρησιµοποιώντας της κατάλληλες µεθόδους δόµησης**! Δηλαδή τις συγκεκριµένες ποσότητες θα πρέπει να τις αποκτήσουν οι καφετιέρες κατά τη στιγµή της δηµιουργίας τους.

```c++
#include <iostream>
#include <string>

using namespace std;

class kafetiera
{
  public:
    int kafes;
    int zaxari;
    int nero;

    string marka;
    string xroma;

    void gemisma();
    void katastasi();
    void sketos(int ar);
    void glykos(int ar);
    void metrios(int ar);
    kafetiera();
    kafetiera(int n, int z, int k);
};

kafetiera::kafetiera()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

kafetiera::kafetiera(int n, int z, int k)
{
	nero = n;
	kafes = k;
	zaxari = z;
}

void kafetiera::gemisma()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

void kafetiera::katastasi()
{
	cout << marka << " " << xroma << endl;
	cout << "================" << endl;
	cout << "Nero:" << nero << endl;
	cout << "Kafes:" << kafes << endl;
	cout << "Zaxari:" << zaxari << endl;
	cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 15 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " sketoi ....." << endl;
	else
		cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 20 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " glykoi ....." << endl;
	else
		cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 10 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " metrioi ....." << endl;
	else
		cout << "eftase o metrios ....." << endl;
}

int main()
{
	kafetiera kaf1(2000, 300, 200), kaf2(1500, 250, 150);
	return 0;
}
```

### Βήμα 2

Δηµιουργήστε έναν δείκτη µε όνοµα **ptr** µε σκοπό να δείχνει σε αντικείµενα της κλάσης **kafetiera**. Σε αυτόν τον δείκτη καταχωρήστε τη διεύθυνση του αντικειµένου **kaf1**. Μέσω του δείκτη ptr καταχωρήστε στο αντικείµενο **kaf1** ως µάρκα το "MULINEX" και ως χρώµα το "Yellow". Πάλι µέσω του δείκτη **ptr** εµφανίστε τη κατάσταση του **kaf1**. Τώρα στον ίδιο δείκτη **ptr** καταχωρήστε τη διεύθυνση του **kaf2**. Μέσω του δείκτη ptr καταχωρήστε στο αντικείµενο **kaf2** ως µάρκα το "SIEMENS" και ως χρώµα το "Black". Πάλι µέσω του δείκτη ptr εµφανίστε τη κατάσταση του **kaf2**.

```c++
#include <iostream>
#include <string>

using namespace std;

class kafetiera
{
  public:
    int kafes;
    int zaxari;
    int nero;

    string marka;
    string xroma;

    void gemisma();
    void katastasi();
    void sketos(int ar);
    void glykos(int ar);
    void metrios(int ar);
    kafetiera();
    kafetiera(int n, int z, int k);
};

kafetiera::kafetiera()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

kafetiera::kafetiera(int n, int z, int k)
{
	nero = n;
	kafes = k;
	zaxari = z;
}

void kafetiera::gemisma()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

void kafetiera::katastasi()
{
	cout << marka << " " << xroma << endl;
	cout << "================" << endl;
	cout << "Nero:" << nero << endl;
	cout << "Kafes:" << kafes << endl;
	cout << "Zaxari:" << zaxari << endl;
	cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 15 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " sketoi ....." << endl;
	else
		cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 20 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " glykoi ....." << endl;
	else
		cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 10 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " metrioi ....." << endl;
	else
		cout << "eftase o metrios ....." << endl;
}

int main()
{
	kafetiera kaf1(2000, 300, 200), kaf2(1500, 250, 150);
	kafetiera *ptr;
	
	ptr = &kaf1;
	ptr -> marka = "MULINEX";
	ptr -> xroma = "Yellow";
	ptr -> katastasi();
	
	ptr = &kaf2;
	ptr -> marka = "SIEMENS";
	ptr -> xroma = "Black";
	ptr -> katastasi();
	
    	return 0;
}
```

### Βήμα 3

Φτιάξτε µια συνάρτηση η οποία **ΔΕΝ** θα είναι µέλος της κλάσης και θα δέχεται ως **παράµετρο** ένα **αντικείµενο** κλάσης **kafetiera** και θα **εµφανίζει** στην οθόνη την **αξία** σε ευρώ των υλικών που διαθέτει η καφετιέρα. Υποθέστε ότι κάθε γραµµάριο καφέ αξίζει 10λεπτά και κάθε γραµµάριο ζάχαρης 5λεπτά. Το νερό προσφορά του καταστήµατος!
Καλέστε τη **συνάρτηση** από τη **main()** ώστε να εµφανίστε την αξία των υλικών της καφετιέρας **kaf2**;

```c++
#include <iostream>
#include <string>

using namespace std;

class kafetiera
{
  public:
    int kafes;
    int zaxari;
    int nero;

    string marka;
    string xroma;

    void gemisma();
    void katastasi();
    void sketos(int ar);
    void glykos(int ar);
    void metrios(int ar);
    kafetiera();
    kafetiera(int n, int z, int k);
};

kafetiera::kafetiera()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

kafetiera::kafetiera(int n, int z, int k)
{
	nero = n;
	kafes = k;
	zaxari = z;
}

void kafetiera::gemisma()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

void kafetiera::katastasi()
{
	cout << marka << " " << xroma << endl;
	cout << "================" << endl;
	cout << "Nero:" << nero << endl;
	cout << "Kafes:" << kafes << endl;
	cout << "Zaxari:" << zaxari << endl;
	cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 15 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " sketoi ....." << endl;
	else
		cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 20 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " glykoi ....." << endl;
	else
		cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 10 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " metrioi ....." << endl;
	else
		cout << "eftase o metrios ....." << endl;
}

void aksia(kafetiera kaf);

int main()
{
	kafetiera kaf1(2000, 300, 200), kaf2(1500, 250, 150);
	kafetiera *ptr;
	
	ptr = &kaf1;
	ptr -> marka = "MULINEX";
	ptr -> xroma = "Yellow";
	ptr -> katastasi();
	
	ptr = &kaf2;
	ptr -> marka = "SIEMENS";
	ptr -> xroma = "Black";
	ptr -> katastasi();
	
	aksia(kaf2);
	
    	return 0;
}

void aksia(kafetiera kaf)
{
	float poso = kaf.zaxari * 0.05 + kaf.kafes * 0.10;
	cout << "Synolo: " << poso << " Euro" << endl;
}
```

### Βήμα 4

Φτιάξτε τώρα µια **µέθοδο** της κλάσης **kafetiera** που να **εµφανίζει** στην οθόνη πάλι την αναλυτική αξία σε ευρώ των υλικών που διαθέτει η καφετιέρα **ακριβώς** µε τον τρόπο που εµφανίζεται στο παρακάτω πλαίσιο. Στην πρώτη γραµµή να εµφανίζονται οι πρώτοι 6 χαρακτήρες από τη µάρκα και οι πρώτοι 3 από το χρώµα µε µια παύλα µεταξύ τους! Κάθε γραµµάριο καφέ αξίζει 10λεπτά και κάθε γραµµάριο ζάχαρης 5λεπτά. Από τη **main()** εµφανίστε την αξία των υλικών της καφετιέρας **kaf2**, εφαρµόζοντας τη µέθοδο

```c++
Philip-Πρα
==================
Καφές : 15 Euro
Ζάχαρη: 12.5 Euro
==================
Σύνολο: 27.5 Euro
```

```c++
#include <iostream>
#include <string>

using namespace std;

class kafetiera
{
  public:
    int kafes;
    int zaxari;
    int nero;

    string marka;
    string xroma;

    void gemisma();
    void katastasi();
    void sketos(int ar);
    void glykos(int ar);
    void metrios(int ar);
    void aksia();
    kafetiera();
    kafetiera(int n, int z, int k);
};

kafetiera::kafetiera()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

kafetiera::kafetiera(int n, int z, int k)
{
	nero = n;
	kafes = k;
	zaxari = z;
}

void kafetiera::gemisma()
{
	nero = 1000;
	kafes = 100;
	zaxari = 200;
}

void kafetiera::katastasi()
{
	cout << marka << " " << xroma << endl;
	cout << "================" << endl;
	cout << "Nero:" << nero << endl;
	cout << "Kafes:" << kafes << endl;
	cout << "Zaxari:" << zaxari << endl;
	cout << "================" << endl;
}

void kafetiera::sketos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 15 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " sketoi ....." << endl;
	else
		cout << "eftase o sketos ....." << endl;
}

void kafetiera::glykos(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 20 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " glykoi ....." << endl;
	else
		cout << "eftase o glykos ....." << endl;
}

void kafetiera::metrios(int ar = 1)
{
	nero = nero - 100 * ar;
	kafes = kafes - 10 * ar;
	zaxari = zaxari - 10 * ar;
	if (ar > 1)
		cout << "eftasan oi " << ar << " metrioi ....." << endl;
	else
		cout << "eftase o metrios ....." << endl;
}

void kafetiera::aksia()
{
	float synoliki_timi, aksia_kafe, aksia_zaxari;
	
	aksia_zaxari = zaxari * 0.05;
	aksia_kafe = kafes * 0.10;
	synoliki_timi = aksia_kafe + aksia_zaxari;
	
	cout << marka.substr(0,6) << "-" << xroma.substr(0,3) << endl;
	cout << "==================" << endl;
	cout << "Kafes:  " << aksia_kafe << " Euro" << endl;
	cout << "Zaxari: " << aksia_zaxari << " Euro" << endl;
	cout << "==================" << endl;
	cout << "Synolo: " << synoliki_timi << " Euro" << endl;
}

void aksia(kafetiera kaf);

int main()
{
	kafetiera kaf1(2000, 300, 200), kaf2(1500, 250, 150);
	kafetiera *ptr;
	
	ptr = &kaf1;
	ptr -> marka = "MULINEX";
	ptr -> xroma = "Yellow";
	ptr -> katastasi();
	
	ptr = &kaf2;
	ptr -> marka = "SIEMENS";
	ptr -> xroma = "Black";
	ptr -> katastasi();
	
	aksia(kaf2);
	kaf2.aksia();
	
    	return 0;
}

void aksia(kafetiera kaf)
{
	float poso = kaf.zaxari * 0.05 + kaf.kafes * 0.10;
	cout << "Synolo: " << poso << " Euro" << endl;
}
```

## Άσκηση 6.2 - Χειρισµός αντικειµένων κλάσης string

### Βήμα 1

Να φτιαχτεί νέο πρόγραµµα στο οποίο να καταχωρίζετε σε έναν πίνακα κλάσης **string** τα ονοµατεπώνυµα 10 φοιτητών τα οποία θα δίνει ο χρήστης.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string foitites[10];
	int i;
	
	for(i=0; i<10; i++){
		cout << "Dwse onoma " << i+1 << "ou foititi: ";
		getline(cin,foitites[i]);
	}
	return 0;
}
```

### Βήμα 2

Το πρόγραµµα ακόλουθα να εµφανίζει µόνο το πρώτο γράµµα του ονοµατεπωνύµου και των 10 φοιτητών.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string foitites[10];
	int i;
	
	for(i=0; i<10; i++){
		cout << "Dwse onoma " << i+1 << "ou foititi: ";
		getline(cin,foitites[i]);
	}
	
	for(i=0; i<10; i++)
		cout << foitites[i][0] << endl;
	
	return 0;
}
```

### Βήμα 3

Αµέσως µετά, το πρόγραµµα να εµφανίζει το πλήθος των χαρακτήρων και των 10 ονοµατεπωνύµων.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string foitites[10];
	int i;
	
	for(i=0; i<10; i++){
		cout << "Dwse onoma " << i+1 << "ou foititi: ";
		getline(cin,foitites[i]);
	}
	
	for(i=0; i<10; i++)
		cout << foitites[i][0] << endl;
	
	for(i=0; i<10; i++)
		cout << "Size " << i+1 << "ou: " << foitites[i].size() << endl;
	
	return 0;
}
```

### Βήμα 4

Ακόλουθα, το πρόγραµµα να εµφανίζει τους τελευταίους 3 χαρακτήρες από κάθε ονοµατεπώνυµο

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string foitites[10];
	int i;
	
	for(i=0; i<10; i++){
		cout << "Dwse onoma " << i+1 << "ou foititi: ";
		getline(cin,foitites[i]);
	}
	
	for(i=0; i<10; i++)
		cout << foitites[i][0] << endl;
	
	for(i=0; i<10; i++)
		cout << "Size " << i+1 << "ou: " << foitites[i].size() << endl;
	
	for(i=0; i<10; i++)
		cout << i+1 << "os foititis: " << foitites[i].substr(foitites[i].size()-3,3) << endl;
	
	return 0;
}
```

### Βήμα 5

Τέλος, το πρόγραµµα να εµφανίζει κάθε ονοµατεπώνυµο αντίστροφα (από τον τελευταίο του χαρακτήρα στον πρώτο

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string foitites[10];
	int i,j;
	
	for(i=0; i<10; i++){
		cout << "Dwse onoma " << i+1 << "ou foititi: ";
		getline(cin,foitites[i]);
	}
	
	for(i=0; i<10; i++)
		cout << foitites[i][0] << endl;
	
	for(i=0; i<10; i++)
		cout << "Size " << i+1 << "ou: " << foitites[i].size() << endl;
	
	for(i=0; i<10; i++)
		cout << i+1 << "os foititis: " << foitites[i].substr(foitites[i].size()-3,3) << endl;
	
	for(i=0; i<10; i++)
	{
		for(j=foitites[i].size()-1; j>=0; j--)
			cout << foitites[i][j];
		cout << endl;
	}
	
	return 0;
}
```

### Προσέξτε τα παρακάτω ...

- Ακολουθήστε βήµα-βήµα τα στάδια κάθε άσκησης και µετά από κάθε βήµα δοκιµάζετε το πρόγραµµά σας ώστε να διαπιστώστε ότι τουλάχιστον µέχρι το σηµείο αυτό δουλεύει!
- Καλό είναι τις συναρτήσεις-µέλη των κλάσεων να τις ορίζετε **αµέσως µετά** τη κλάση και **έξω** από τη κλάση. Σε αυτή τη περίπτωση πριν από το όνοµα της συνάρτησης πρέπει να µπαίνει το προσδιοριστικό **ΟνοµαΚλάσης::** όπου **ΟνοµαΚλάσης** το όνοµα της κλάσης στην οποία ανήκει η συνάρτηση-µέλος.
- Οι συναρτήσεις µέλη που ορίζονται εκτός της κλάσης πρέπει να δηλωθούν και µέσα στη κλάση (µόνο το πρότυπο τους).
- Η δήλωση αντικειµένων µιας κλάσης γίνεται µε πρόταση της µορφής
**κλάση αντικείµενο1, αντικείµενο2**, ... ;
- Η πρόσβαση σε ένα µέλος ενός αντικειµένου µέσω ενός **δείκτη** γίνεται µε πρόταση της µορφής **δείκτης->µέλος**.
