/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:44:33 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/11 20:07:49 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	-Finalmente utilizaré para este proyecto el algoritmo K-Sort

	-Este por como lo he entendido se podría estructurar
	en dos fases principales. La primera sería la distribución
	de elementos y la segunda la reconstrucción de números
	
	-Cada número dentro del stack a tendrá un índice basado en su orden
	esperado. Se utilizará para determinar cuando y como mover los elementos.
	
	-Usaremos pivotes calculados con la raíz cuadrada de la cantidad de elementos
	Si el indice del número es menor o igual a la posición i se manda al otro stack.

	-si el índice esta en el rango de los pivotes se mueve al otro stack
	pero con rotación para optimizar su posición. Si el indice es mayor al rangoel elemento
	se rota dentro del stack_a para seguir con los demás. 
	
	-Básicamente todo el tema de pivotes hace que te ahorres movimientos innecesarios. Al poner mas o menos
	los números orientados en el stack b

	-Los índices entiendo que los calcularé con un bubble sort
	
	-**DISCLAIMER** El numero 1.33 es para evitar rangos muy pequeños que harían que moviesen pocos números al
	otro stack. El 1.33 hace que el rango reciba más elementos en cada iteración. Ayudando a mantener cierto
	 orden desde el inicio sin estar ordenados del todo

	

*/