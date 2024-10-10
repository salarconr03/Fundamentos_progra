Algoritmo calculadora
	resultado <- 0
	num_1 = 0
	num_2 = 0
	operacion = 0
	Escribir 'Ingrese dos n�meros: '
	Leer num_1, num_2
	Escribir 'Escoja una de las siguientes operaciones: 1.Suma 2.Resta 3.Multiplicaci�n 4.Divisi�n'
	Leer operacion
	Seg�n operacion Hacer
		1:
			resultado <- num_1+num_2
			Escribir 'El resultado de la operaci�n es: ', resultado
		2:
			resultado <- num_1-num_2
			Escribir 'El resultado de la operaci�n es: ', resultado
		3:
			resultado <- num_1*num_2
			Escribir 'El resultado de la operaci�n es: ', resultado
		4:
			resultado <- num_1/num_2
			Escribir 'El resultado de la operaci�n es: ', resultado
		De Otro Modo:
			Escribir 'Por favor escoja una de las opciones proporcionadas.'
	FinSeg�n
FinAlgoritmo
