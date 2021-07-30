package com.mycompany.veiculos;

public class PrincipalVeiculo {

    public static void main(String arg[]) {
        Veiculo veiculo = new Aviao();
        
        estacionarVeiculo(veiculo); 
    }
    
    public static void estacionarVeiculo(Veiculo veiculo) {
        
        if(veiculo instanceof Carro) {
            System.out.println("Iniciando o estacionamento do Carro");
        } else {
            System.out.println("Iniciando o estacionamento do Avião");
        }
        
        veiculo.andarFrente();
        veiculo.andarFrente();
        veiculo.buzinar();
        System.out.println("Finalizando o estacionamento...");
    }
}
