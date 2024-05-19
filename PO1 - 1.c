#include <stdio.h>

/*1. Faça um programa que peça o número de horas trabalhadas e o valor da hora de um determinado funcionário. 
Em seguida, calcule o salário do funcionário. Caso o funcionário tenha trabalhado mais de 200 horas, o salário final é acrescido de 5%. */

int main () {
  int salarioHora;
  printf ("Digite seu salario por hora: \n");
  scanf ("%d", &salarioHora);

  int horasTrabalhadas;
  printf ("Digite o numero de horas trabalhadas: \n");
  scanf ("%d", &horasTrabalhadas);

  int salario = salarioHora * horasTrabalhadas;

  if (horasTrabalhadas > 200){
	  salario = salario * 1.5;
	}

  printf("O seu salario:  %d", salario);
  return 0;
}