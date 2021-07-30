package com.mycompany.escritorio.cobranca;

public enum FormaDePagamento {
    DEBITO(0.05), CREDITO(0.15), BOLETO(0.10);
    
    private Double taxaCobranca;
    
    FormaDePagamento(Double taxaCobranca) {
        this.taxaCobranca = taxaCobranca;
    }
    
    public Double getTaxaCobranca() {
        return taxaCobranca;
    }
}
