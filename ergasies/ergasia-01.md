# 1η Εργασία

O ακόλουθος αλγόριθµος του Zeller (1822-1899) υπολογίζει την ηµέρα της εβδοµάδας µιας συγκεκριµένης ηµεροµηνίας.

Προκειµένου να βρούµε ποια µέρα της εβδοµάδας αντιστοιχεί σε µια δοθείσα ηµεροµηνία Η/M/E (**H** ηµέρα, **M** µήνας, **E** έτος) υπολογίζουµε το άθροισµα Σ=A+B1+B2+B3+Γ+∆+Η όπου:

- **Α** = 365 * (Ε - 1)
- **Β1** = (Ε - 1) / 4 &rarr; Το / αναφέρεται σε ακέραια διαίρεση
- **Β2** = – (Ε - 1) / 100
- **Β3** = (Ε - 1) / 400
- **Γ** = (367 * Μ - 362) / 12
- **H** = η ηµέρα της ηµεροµηνίας (π.χ. για 28/10/2014 είναι το 28)

Υπολογισµός του **∆**:

το **∆** έχει τιµή 0 αν Μ<=2, τιµή -1 αν Μ>2 και το έτος Ε είναι δίσεκτο και -2 σε κάθε άλλη περίπτωση.

Η ζητούµενη ηµέρα προκύπτει από τον ακέραιο αριθµό Χ = Σ%7. Το 0 αντιστοιχεί στην Κυριακή, το 1 στη ∆ευτέρα, κ.ο.κ.

Παράδειγµα: Για την ηµεροµηνία 25/12/1996 (d=25, m=12, y=1996 προκύπτει:

Α=728175, Β1=498, Β2=-19, Β3=4, Γ=336, ∆=-1, Σ=729018 και Χ=3 εποµένως η ηµέρα είναι Τετάρτη.

***Θέλουµε να φτιάξουµε ένα πρόγραµµα το οποίο να ζητάει την ηµέρα, τον µήνα και το έτος και να εµφανίζει την ηµέρα της εβδοµάδας. Για τη κατάστρωση του προγράµµατος θα πρέπει να ακολουθήσετε µε τη σειρά τα ακόλουθα βήµατα:***

## 1o βήμα

Καταστρώστε µια ξεχωριστή **συνάρτηση** η οποία θα ελέγχει αν ένα έτος είναι **δίσεκτο** ή όχι. Η συνάρτηση θα δέχεται ως **παράµετρο** το **έτος** και θα επιστρέφει τη τιµή **true** στην περίπτωση που είναι δίσεκτο, διαφορετικά θα επιστρέφει τη τιµή **false**. Η συνάρτηση **δεν** θα εµφανίζει τίποτε στην οθόνη. Αποφασίστε για το όνοµα και τον τύπο της. Υπενθυµίζουµε ότι τα έτη που διαιρούνται ακριβώς µε το 4 και δεν διαιρούνται ακριβώς µε το 100 είναι δίσεκτα. Επίσης δίσεκτα είναι τα έτη που διαιρούνται ακριβώς µε το 400 (δείτε το 2ο εργαστήριο).

## 2ο βήμα

Καταστρώστε µια δεύτερη **συνάρτηση** η οποία θα δέχεται ως παραµέτρους την **Ηµέρα**, τον **Μήνα** και το **Έτος** και θα εµφανίζει την ηµέρα της εβδοµάδας στην παρακάτω µορφή:

```
====================================
Στις ηη/µµ/εεεε η ηµέρα είναι ####
------------------------------------
```

Πάνω εµφανίζει µια γραµµή από 40 ίσον (=) και κάτω µια γραµµή από 40 παύλες (-).

Όπου **ηη** η ηµέρα, **µµ** ο µήνας, **εεεε** το έτος και #### η ηµέρα της εβδοµάδας που βρήκαµε.

Για τον υπολογισµό της ηµέρας η συνάρτηση θα ακολουθήσει τον αλγόριθµο του Zeller που περιγράφηκε αρχικά, και θα χρησιµοποιήσει τη συνάρτηση που φτιάχτηκε στο προηγούµενο βήµα.

## 3ο βήμα

Τώρα ήρθε η ώρα να γράψουµε το κυρίως πρόγραµµα µας δηλαδή τη συνάρτηση main(). Στη main() το πρόγραµµα θα πρέπει να ζητάει από το χρήστη την ηµέρα, τον µήνα και το έτος και να εµφανίζει την ηµέρα της εβδοµάδας ως εξής:

```
∆ώσε ηµέρα:25
∆ώσε µήνα:12
∆ώσε έτος:1996
====================================
Στις 25/12/1996 η ηµέρα είναι Τετάρτη
------------------------------------
```

Για να εµφανίσει το αποτέλεσµα το πρόγραµµα θα πρέπει να καλεί κατάλληλα τη συνάρτηση που φτιάξατε στο 2ο βήµα. Το πρόγραµµα θα πρέπει να έχει **επαναληπτική** λειτουργία και να σταµατάει όταν για **ηµέρα** δώσουµε αριθµό `<=0`!

## 4ο βήμα

Φτιάξτε µια συνάρτηση η οποία θα δέχεται ως παραµέτρους ένα Ονοµατεπώνυµο και έναν Κωδικό Φοιτητή (ctxxxxx) και θα εµφανίζει τα στοιχεία του στην οθόνη µε τον ακόλουθο τρόπο.

```
######################################
Κωδικός : ΚωδικόςΦοιτητή
Όνοµα : ΟνοµατεπωνυµοΦοιτητή
######################################
```

Πάνω και κάτω εµφανίζει µια γραµµή από 38 #.

όπου `ΚωδικόςΦοιτητή` και `ΟνοµατεπώνυµοΦοιτητή`, ο κωδικός και το όνοµα που µεταβιβάζονται στη συνάρτηση

## 5ο βήμα

Από τη main(), µετά από το τέλος της επαναληπτικής διαδικασίας, **καλέστε** τη συνάρτηση που φτιάξατε στο 4ο βήµα µε τέτοιο τρόπο ώστε να εµφανίσετε τα δικά σας στοιχεία.

## 6ο βήμα

Παρατηρήστε ότι στο πρόγραµµα αρκετές φορές εµφανίζεται µια γραµµή µε τον ίδιο χαρακτήρα. Π.χ µια γραµµή µε ίσον (=), µια µε παύλες (-), µε δίεση (#) κ.λ.π. Θέλουµε αυτή τη δουλειά να την κάνει µια παραµετρική συνάρτηση. Η συνάρτηση θα πρέπει να έχει δύο παραµέτρους: έναν ακέραιο και έναν χαρακτήρα. Η συνάρτηση θα πρέπει να εµφανίζει τόσες φορές τον χαρακτήρα της δεύτερης παραµέτρου όσες η τιµή της πρώτης παραµέτρου της. Φτιάξτε µια τέτοια συνάρτηση (δείτε το 3ο εργαστήριο).

## 7ο βήμα

Σε διάφορα σηµεία του προγράµµατος, υπάρχει κώδικας ο οποίος εµφανίζει µια γραµµή µε τον ίδιο χαρακτήρα. **Αντικαταστήστε** τον συγκεκριµένο κώδικα µε **κλήση της συνάρτησης** που φτιάξατε στο 6o βήµα ώστε να επιτελεί ακριβώς την ίδια λειτουργία.

## 8ο βήμα

∆ηµιουργήστε δύο **υπερφορτωµένες** εκδόσεις της συνάρτησης που φτιάξατε στο 6o βήµα. Η πρώτη έκδοση θα έχει µία µόνο παράµετρο έναν ακέραιο αριθµό και θα εµφανίζει τόσα αστεράκια (*) όσα η τιµή της παραµέτρου(δείτε το 3ο εργαστήριο). Η δεύτερη έκδοση δεν θα πρέπει να έχει παράµετρο και θα εµφανίζει 50 φορές τον χαρακτήρα θαυµαστικό (!).

## 9ο βήμα

Στο τέλος του κυρίως προγράµµατος (µετά από την εµφάνιση των στοιχείων σας) καλέστε τις δύο εκδόσεις της υπερφορτωµένης συνάρτησης. Μία για να εµφανίσει 40 αστεράκια και µια για να εµφανίσει τα θαυµαστικά.

**Αποθηκεύστε** το πρόγραµµα σε ένα πηγαίο αρχείο µε όνοµα `1_ctxxxxx.cpp` (όπου ctxxxxx) το όνοµα χρήστη σας (user name). **Υποβάλτε** την εργασία σας µέσω του συστήµατος **moodle** και **όχι** µε e-mail. Χρησιµοποιήστε τoν κωδικό ενός από τα µέλη της οµάδας το οποίο θα θεωρείται **επικεφαλής** της οµάδας (µε το µέλος αυτό θα γίνεται η επικοινωνία - θα στέλνονται τα e-mail κ.λ.π που αφορούν αυτή την εργασία). Η εργασία θα υποβληθεί µόνο µια φορά από τον επικεφαλής της οµάδας.

Αν δεν µπορέσετε να ολοκληρώστε το πρόγραµµα, στείλτε το µέχρι το σηµείο που έχετε φτάσει.

## Οδηγίες - Συμβουλές

- Μην στείλετε πρόγραµµα που δεν µεταγλωττίζεται σωστά. ∆εν θα ληφθεί καθόλου υπόψη.
- Χρησιµοποιείστε κλιµακωτή γραφή ώστε το πρόγραµµα να είναι ευανάγνωστο.
- Το υπόλοιπο µιας ακέραιας διαίρεσης υπολογίζεται µε τον τελεστή %
- Ακολουθήστε πιστά τα βήµατα που αναφέρονται. ∆οκιµάζετε συχνά το πρόγραµµα ώστε να δείτε αν δουλεύει σωστά µέχρι το σηµείο που φτάσατε.
- Χρησιµοποιείστε διαφορετικά ονόµατα µεταβλητών και παραµέτρων στις συναρτήσεις και στο κυρίως πρόγραµµα ώστε να αντιληφθείτε την µεταβίβαση παραµέτρων.
- Οι υπερφορτωµένες συναρτήσεις έχουν το ίδιο όνοµα.
- Μην ξεχάστε τις **πρόσθιες** δηλώσεις των συναρτήσεων. Κάθε έκδοση µιας υπερφορτωµένης συνάρτησης θέλει τη δική της πρόσθια δήλωση.
- Μελετήστε προσεκτικά τα προγράµµατα των εργαστηρίων και τα παραδείγµατα των διαλέξεων. Θα σας βοηθήσουν αρκετά!

Στις πρώτες γραµµές στον κώδικα του προγράµµατος να υπάρχουν δύο γραµµές σχολίων µε τα ονόµατα και τους κωδικών των φοιτητών που υποβάλλουν την εργασία.

```
// Onomatepwnymo1 ctxxxxx
// Onomatepwnymo2 ctxxxxx
```

Η πρώτη γραµµή να έχει τα στοιχεία του επικεφαλής της οµάδας (αυτός που θα υποβάλει την εργασία).

## ΠΡΟΣΟΧΗ - ΠΡΟΣΟΧΗ

Αυτή η εργασία θα πρέπει να γίνει ανά ζεύγη φοιτητών. ∆εν αποτελεί ευκαιρία για κάποιον που δεν έχει ασχοληθεί καθόλου να µετέχει σε µια εργασία, αλλά ευκαιρία να µάθει από συναδέλφους του!

Είµαι βέβαιος ότι έχετε αντιληφθεί ότι δεν έχει κανένα νόηµα να σας κάνουν άλλοι τις εργασίες! Επαναλαµβάνω ότι η µόνη λύση είναι να ασχοληθείτε σοβαρά και αν έχετε δυσκολίες να µε ρωτήσετε και να σας βοηθήσω.

Όλοι σχεδόν θα εξεταστείτε προφορικά επάνω στην εργασία που θα παραδώσετε!
