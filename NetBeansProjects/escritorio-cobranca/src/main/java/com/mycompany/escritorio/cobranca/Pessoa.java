package com.mycompany.escritorio.cobranca;

public abstract class Pessoa {
    private String nome;
    
    public void setNome(String nome){
        this.nome = nome.toUpperCase();
    }
    public String getNome(){
        return this.nome;
    }
    
    public abstract String getDocumento();
    public abstract String getDataFormada();
}
