package com.mycompany.mapareservahotel;

import java.util.ArrayList;
import java.util.Scanner;

public class Reserva {
    private ArrayList<Hospede> hospedes = new ArrayList<Hospede>();
    private Suite suite;
    private int qtdPessoa;
    private int qtdDias;
    
    public Reserva(Suite suite, int qtdPessoa, int qtdDias){
        this.suite = suite;
        this.qtdPessoa = qtdPessoa;
        this.qtdDias = qtdDias;
    }
    
    public Reserva(){}
    public ArrayList<Hospede> getHospede(){
        return hospedes;
    }
    public void setHospede(ArrayList<Hospede> hospede){
        this.hospedes.addAll(hospede);
    }
    
    public Suite getSuite(){
        return suite;
    }
    public void setSuite(Suite suite){
        this.suite = suite;
    }
    
    public int getQtdPessoa(){
        return qtdPessoa;
    }
    public void setQtdPessoa(int qtdPessoa){
        this.qtdPessoa = qtdPessoa;
    }
    
    public int getQtdDias(){
        return qtdDias;
    }
    public void setQtdDias(int qtdDias){
        this.qtdDias = qtdDias;
    }
    
    public boolean VerificarCapacidade(){
        int hospDefinitivo = 0;
        
        for (Hospede h: this.hospedes){
            if (h.getIdade() > 2) {
                hospDefinitivo++;
            }
        }       
        return hospDefinitivo >= this.suite.getCapacidade();
    }
    
    public double CalcularDiaria(){
        
        double valorTotal = this.suite.getValorDiaria() * this.qtdDias;
        
        if (this.getQtdDias() > 7) {
            valorTotal -= valorTotal * 0.1;
        }
        return valorTotal;
    }
    
    public void cadastrarHospedes(Hospede h) {
        if (this.suite instanceof Suite){
            if (!this.VerificarCapacidade()) {
            
                this.hospedes.add(h);
                
            }else
            {
                System.out.println("Capacidade máxima atingida!");
            }
        }else
        {
            System.out.println("Inválido!");    
        }
    }
    
    public Hospede getHospede(int indice){
        return this.hospedes.get(indice);
    }
    
    @Override
    public String toString(){
        return "*** Reserva ***\n" + "Hóspedes: " + hospedes + "\nSuíte: " + suite + "\nQuantidade de pessoas: " + qtdPessoa + "\nQuantidade de dias: " + qtdDias;
    }
}
