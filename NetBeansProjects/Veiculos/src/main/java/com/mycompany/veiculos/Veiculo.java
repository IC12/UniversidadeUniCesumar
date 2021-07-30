package com.mycompany.veiculos;

public abstract class Veiculo {

    private int ano;
    
    public abstract void andarFrente();
    
    public void buzinar() {
        System.out.println("Buzinando...");
    }
}
