package com.mycompany.veiculos;

public class Aviao extends Veiculo implements Voo {

    @Override
    public void voar() {
        System.out.println("Voando...");
    }   

    @Override
    public void andarFrente() {
        System.out.println("Andando como avião");    
    }
}
