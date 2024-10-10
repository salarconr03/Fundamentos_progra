Algoritmo conversion_metros
	metros = 0
	conversion = 0
	Escribir "Ingrese una cantidad en metros: "
	Leer metros
	Escribir "Escoja a que convertir la cantidad: 1.Centimetros 2.Milimetros 3.Kilometros"
	Leer conversion
	Segun conversion Hacer
		1:
			metros= metros * 100
			Escribir "El resultado de la conversion es: ", metros
		2:
			metros= metros * 1000
			Escribir "El resultado de la conversion es: ", metros
		3:
			metros= metros / 1000
			Escribir "El resultado de la conversion es: ", metros
		De Otro Modo:
			Escribir "Por favor escoja una de las opciones proporcionadas"
	Fin Segun
FinAlgoritmo
