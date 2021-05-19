#include <iostream>
#include <string>
using namespace std;

class Data
{
private:
	int dia;
	int mes;
	int ano;
public:
	Data(int dia, int mes, int ano)
	{
		this->dia = dia;
		this->mes = mes;
		this->ano = ano;
	}
	Data()
	{
		this->dia = 0;
		this->mes = 0;
		this->ano = 0;
	}
	void setDia(int dia)
	{
		this->dia = dia;
	}

	void setMes(int mes)
	{
		this->mes = mes;
	}

	void setAno(int ano)
	{
		this->ano = ano;
	}

	int getDia()
	{
		return this->dia;
	}

	int getMes()
	{
		return this->mes;
	}

	int getAno()
	{
		return this->ano;
	}
};


class Contato : Data
{
private:
	string email, nome, telefone;
	Data dtnasc;

public :
	Contato(string email, string nome, string telefone, Data dtnasc)
	{
		this -> email = email;
		this -> nome = nome;
		this -> telefone = telefone;
		this -> dtnasc = dtnasc;
	}
	Contato()
	{
		this -> email = "";
		this -> nome = "";
		this -> telefone = "";

	}

	string getEmail()
	{
		return this -> email;
	}
	void setEmail(string email)
	{
		this ->email = email;
	}
	string getNome()
	{
		return this -> nome;
	}
	void setNome(string nome)
	{
		this->nome = nome;
	}
	string getTelefone()
	{
		return this -> telefone;
	}
	void setTelefone(string telefone)
	{
		this ->telefone = telefone;
	}

	void coletar_idade()
	{
		cout << "Digite seu nome: ";
		cin >> setNome();
		cout << endl;
		cout << "Digite seu email: ";
		cin >> setEmail();
		cout << endl;
		cout << "Digite seu telefone: ";
		setTelefone() >> cin;
		cout << endl;
	}

};
int main(int argc, char** argv)
{
	Data *datas[5];
	Contato *ctt[5];

	for(int i = 0; i < 5; ++i)
	{
		
	}
	for(int i = 0; i < 5; ++i)
	{
		cout << "Dia: " << datas[i]->getDia() << "/" << datas[i]-> getMes() << "/" << datas[i]-> getAno() << endl;
		cout << datas[i]->getDia() << datas[i]->getMes() << datas[i]->getAno();
	}


	for (int i = 0; i < 5; ++i )
	{
		cout << "Digite o dia do nascimento: ";
		cin >> datas[i]->setDia();
		cout << "Digite o mes do nascimento: ";
		cin >> datas[i]->setMes();
		cout << "Digite o ano do nascimento: ";
		cin >> datas[i]->setAno();
	}
	//cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;

	return 0;
}
