//3. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
#include <iostream>

using namespace std;

//le o vetor atraves da função ler-vetor
void ler_vetor(int vet[], int tam) {
	for (int i = 0; i < tam; i++)
	{
		cout << "informe umm numero: ";
		cin >> vet[i];
	}

}


void contar_vetor(int v[], int tam) {
	int contador = 0;
	for (int i = 0; i < tam; i++)
	{
		if (v[i] % 2 == 0)
			contador++;
	}
	cout << "O vetor possui " << contador << " valores pares." << endl;
}

int main() {
	const int tam = 10;
	int vet1[tam];
	ler_vetor(vet1, tam);
	contar_vetor(vet1, tam);





}