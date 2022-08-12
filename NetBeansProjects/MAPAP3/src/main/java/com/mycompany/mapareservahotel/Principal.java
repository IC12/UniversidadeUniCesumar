package com.mycompany.mapareservahotel;

//MAPA - ADS - PROGRAMAÇÃO III - 53/2022
//Aluna: Iara Silva Maciel Camargos
//RA: 20114003-5

public class Principal {
    public static void main(String[] args){
        
        Hospede h1 = new Hospede(01, "Carla", "Belo Horizonte - MG", 22);
        Suite s1 = new Suite(01, "Luxo", 2, 120.5);       
        Reserva r1 = new Reserva(s1, 2, 11);
        r1.cadastrarHospedes(h1);
        
        System.out.println(r1);
        System.out.println("Valor Total: R$" + r1.CalcularDiaria());
        
        System.out.println();
        
        Hospede h2 = new Hospede(02, "John", "Porto Alegre - RS", 25);
        Suite s2 = new Suite(02, "Simples", 5, 90.5);       
        Reserva r2 = new Reserva(s2, 6, 5);
        r2.cadastrarHospedes(h2);
        
        System.out.println(r2);
        System.out.println("Valor Total: R$" + r2.CalcularDiaria());
    }
}
