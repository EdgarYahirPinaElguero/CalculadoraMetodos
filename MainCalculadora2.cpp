package CalculadoraMetodo;

public class Operaciones {
	int Suma;
	int Resta;
	int Multi;
	int Divi;

	public int suma(int num1, int num2) {
	Suma= num1+num2;
	return Suma;
	}
	
	public int resta(int num1, int num2) {
	Resta= num1-num2;
	return Resta;
	}
	
	public int multiplicacion(int num1, int num2) {
	Multi= num1*num2;
	return Multi;
	}
	
	public int division(int num1, int num2) {
	Divi= num1/num2;
	return Divi;
	}
}
