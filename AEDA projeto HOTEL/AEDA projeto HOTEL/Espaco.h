#ifndef ESPACO_H_
#define ESPACO_H_
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Espaco {

	string nomeEspaco;
	int preco;
public:
	/*construtor*/
	Espaco(string nomeEspaco, int preco);

	/*Metodos get*/
	string getNomeEspaco(){ return nomeEspaco; }
	int getPreco(){ return preco; }

	/* Metodos update */
	bool update_espaco_nome(string nome1, string nome2);
	bool update_espaco_preco(string nome, int preco);
};
#endif;