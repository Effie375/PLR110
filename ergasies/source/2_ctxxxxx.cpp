#include <iostream>

using namespace std;

class dexameni
{
	private:
		int posotita_kausimou;
		float axia();
	public:
		string eidos_kausimou;
		float timi_kausimou;
		int xoritikotita;
		dexameni();
		dexameni(string eidos, int xwros);
		dexameni(string eidos, int xwros, float timi);
		~dexameni();
		void info();
		void prosthiki(int posotita);
		void aferesi(int posotita);
        static void statistics();
		static int plithos;
		static float axia_objs;

		/* Operator Overloading */
		dexameni operator+(const dexameni &right);
		bool operator>(dexameni &right);
		void operator<<(int right);
		void operator>>(int right);
};

class ntepozito :public dexameni{
	public:
		int rezerva;
		ntepozito();
		void info();
};

int dexameni::plithos = 0;
float dexameni::axia_objs = 0;

dexameni dexameni::operator+(const dexameni &right)
{
	dexameni neo_kausimo;

	neo_kausimo.eidos_kausimou = eidos_kausimou + "-" + right.eidos_kausimou;
	neo_kausimo.xoritikotita = xoritikotita + right.xoritikotita;
	neo_kausimo.timi_kausimou = (timi_kausimou + right.timi_kausimou)/2;
	neo_kausimo.posotita_kausimou = posotita_kausimou + right.posotita_kausimou;
    axia_objs += neo_kausimo.timi_kausimou * neo_kausimo.posotita_kausimou;

	return neo_kausimo;
}

bool dexameni::operator>(dexameni &right)
{
	if(this->axia() > right.axia())
	{
		return 	true;
	}
	else
	{
		return false;
	}
}

void dexameni::operator<<(int right)
{
	this->prosthiki(right);
}

void dexameni::operator>>(int right)
{
	this->aferesi(right);
}

dexameni::dexameni()
{
	posotita_kausimou = 0;
	timi_kausimou = 0;
	xoritikotita = 1000;
	plithos++;
}

dexameni::dexameni(string eidos, int xwros)
{
	eidos_kausimou = eidos;
	xoritikotita = xwros;
	posotita_kausimou = 0;
	timi_kausimou = 0;
	plithos++;
}

dexameni::dexameni(string eidos, int xwros, float timi)
{
	eidos_kausimou = eidos;
	xoritikotita = xwros;
	timi_kausimou =  timi;
	posotita_kausimou = 0;
	plithos++;
}

dexameni::~dexameni()
{
	cout << "Dystyxos h dexamenh mas afise xronoys kai xathikan " << posotita_kausimou << " litra " << eidos_kausimou << endl;
    plithos--;
}

ntepozito::ntepozito()
{
	rezerva = 20;
	eidos_kausimou = "Benzini";
	xoritikotita = 60;
	timi_kausimou = 1.55;
}

float dexameni::axia()
{
	float sunoliki_axia;

	sunoliki_axia = timi_kausimou * posotita_kausimou;

	return sunoliki_axia;
}

void dexameni::info()
{
	cout << eidos_kausimou << endl;
	cout << "MAX: " << xoritikotita << endl;
	cout << "===============================" << endl;
	cout << "Timi: " << timi_kausimou << endl;
	cout << "Posotita: " << posotita_kausimou << endl;
	cout << "===============================" << endl;
	cout << "Axia: " << axia() << endl;
	cout << "*******************************" << endl << endl;
}

void ntepozito::info()
{
	dexameni::info();
}

void dexameni::prosthiki(int posotita)
{
	if((posotita + posotita_kausimou) <= xoritikotita)
    {
        posotita_kausimou += posotita;
		axia_objs += posotita * timi_kausimou;
    }
	else
		cout << "Den yparxei arketos xoros gia " << posotita << " litra." << endl;
}

void dexameni::aferesi(int posotita)
{
	if(posotita <= posotita_kausimou)
    {
		posotita_kausimou -= posotita;
		axia_objs -= posotita * timi_kausimou;
	}
	else
		cout << "Den yparxoyn " << posotita << " litra " << eidos_kausimou << " sti dexameni" << endl;
}

void dexameni::statistics()
{
    cout << "STATISTICS" << endl;
	cout << "===============================" << endl;
	cout << "Plithos: " << plithos << endl;
	cout << "Synoliki axia: " << axia_objs << endl;
	cout << "*******************************" << endl << endl;
}

dexameni new_tank();

int main()
{
	dexameni D1, D2;

	/* D1 */
	D1.eidos_kausimou = "Amolivdi";
	D1.timi_kausimou = 1.67;
	D1.info();
	D1.prosthiki(500);
	D1.prosthiki(100);
	D1.aferesi(700);
	D1.info();

	/* D2 */
	D2.eidos_kausimou = "Diesel";
	D2.timi_kausimou = 1.43;
	D2.info();
	D2.prosthiki(200);
	D2.aferesi(50);
	D2.prosthiki(1000);
	D2.info();

	/* D3 */
	dexameni D3("Super", 2000);
	D3.info();

	/* D4 */
	dexameni D4("Ygraerio", 3000, 0.83);
	D4.info();

	/* mytank */
	dexameni mytank = new_tank();
	mytank.info();

	/* D5 */
	dexameni D5 = D3 + D4;
	D5.info();

	if(D3 > D2)
	{
		D3.info();
	}
	else
	{
		D2.info();
	}

	D4 << 200;
	D4.info();

	D4 >> 50;
	D4.info();

	ntepozito nt1;

	nt1.info();

	dexameni::statistics();

	return 0;
}

dexameni new_tank()
{
	int p_xoritikotita;
	string p_eidos;
	float p_timi;

	cout << "Dwse eidos kausimou: ";
	cin >> p_eidos;

	cout << "Dwse xoritikotita dexamenis: ";
	cin >> p_xoritikotita;

	cout << "Dwse timi kausimou ana litro: ";
	cin >> p_timi;

	dexameni tank(p_eidos, p_xoritikotita, p_timi);

	return tank;
}
