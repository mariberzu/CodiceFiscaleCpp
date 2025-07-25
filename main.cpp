
#include "CodiceFiscale.cpp"

using namespace std;

int main()
{
    string cogno;
    string name;
    string zona;
    bool sesso;
    int mese;
    int giorno;
    int ann;
    cout << "Inserisci Cognome: " << endl;
    getline(cin, cogno);
    transform(cogno.begin(),cogno.end(),cogno.begin(),::toupper);
    cout << "Inserisci Nome: " << endl;
    getline(cin,name);
    transform(name.begin(),name.end(),name.begin(),::toupper);
    cout << "Inserisci Anno di Nascita: " << endl;
    cin >> ann;
    cout << "Inserisci Mese di Nascita (1-12): " << endl;
    cin >> mese;
    cout << "Inserisci Giorno di Nascita (1-31): " << endl;
    cin >> giorno;
    cout << "Inserisci Sesso (1=Maschile/0=Femminile): " << endl;
    cin >> sesso;
    cin.ignore();
    cout << "Inserisci Comune di Nascita: " << endl;
    getline(cin, zona);
    zona = normalizzaNome(zona);


    string x1 = Cognome(cogno);
    string x2 = Nome(name);
    string temp = to_string(ann);
    string x3 = temp.substr(temp.length() - 2);
    string x4 = MeseNascita(mese);
    string x5 = to_string(GiornoNascita(giorno, sesso));
    string x6 = ZonaNascita(zona);
    string tot = x1+x2+x3+x4+x5+x6;
    string x7 = CarattereControllo(tot);

    string cf_finale = x1+x2+x3+x4+x5+x6+x7;
    cout << "Codice Fiscale: " << cf_finale << endl;


}