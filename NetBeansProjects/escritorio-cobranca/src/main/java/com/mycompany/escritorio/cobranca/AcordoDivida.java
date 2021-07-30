package com.mycompany.escritorio.cobranca;

public class AcordoDivida {
    private Divida divida;
    private FormaDePagamento formaDePagamento;
    private Double valorTotal;

    public AcordoDivida(Divida divida, FormaDePagamento formaDePagamento) {
        this.divida = divida;
        this.setFormaDePagamento(formaDePagamento);
    }
    
    public Divida getDivida() {
        return divida;
    }
    
    public FormaDePagamento getFormaDePagamento() {
        return formaDePagamento;
    }
    
    public void setFormaDePagamento(FormaDePagamento formaDePagamento) {
        this.formaDePagamento = formaDePagamento;
        setValorTotal();
    }
    
    private void setValorTotal(){
        this.valorTotal = this.divida.getValorDivida() * (1+ this.formaDePagamento.getTaxaCobranca());
        
//        if (this.formaDePagamento.equals(FormaDePagamento.CREDITO)) {
//            this.valorTotal = this.divida.getValorDivida() * (1 + 0.15);
//        } else if (this.formaDePagamento.equals(FormaDePagamento.BOLETO)) {
//            this.valorTotal = this.divida.getValorDivida() * (1 + 0.10);
//        } else if (this.formaDePagamento.equals(FormaDePagamento.DEBITO)) {
//            this.valorTotal = this.divida.getValorDivida() * (1 + 0.05);
 //       }
    }
    
    public Double getValorTotal() {
        return valorTotal;
    }
}
