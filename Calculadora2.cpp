package CalculadoraMetodo;
import java.util.*;

public class CalculadoraMetodo {
	public static void main (String[]args) {
		Scanner op = new Scanner(System.in);
		int num1;
		int num2;
		
		System.out.println("Ingresa el primer valor");
		num1=op.nextInt();
		System.out.println("Ingresa el segundo valor");
		num2=op.nextInt();

		Operaciones valor = new Operaciones();
		int suma = valor.suma(num1,num2);
		System.out.println("La suma es: "+suma);
		
		int resta= valor.resta(num1,num2);
		System.out.println("La resta es: "+resta);
		
		int multi= valor.multiplicacion(num1,num2);
		System.out.println("La multiplicacion es: "+multi);
		
		int divi= valor.division(num1,num2);
		System.out.println("La division es "+ divi);
		}
}
