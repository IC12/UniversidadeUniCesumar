package com.mycompany.escritorio.cobranca;

//Estudo de Caso - Programação - Exemplo Cobrança

public class Principal {
    public static void main(String args[]) {
    
        PessoaJuridica lojaDoBairro = new PessoaJuridica();
        lojaDoBairro.setNome("Loja do Bairro");
        lojaDoBairro.setCnpj("95.058.163/0001-31");
        PessoaFisica joao = new PessoaFisica();
        joao.setNome("João");
        joao.setCpf("973.394.570-62");
        joao.setDataNascimento("15/11/1999");
        
        Divida divida = new Divida(joao, lojaDoBairro, 1000.00);
        AcordoDivida acordoDivida = new AcordoDivida(divida, FormaDePagamento.BOLETO);
        System.out.println("---- Dados Devedor: ");
        System.out.println("Nome: "+acordoDivida.getDivida().getDevedora().getNome());
        System.out.println("Data nascimento: "+acordoDivida.getDivida().getDevedora().getDataFormada());
        System.out.println("Documento: "+acordoDivida.getDivida().getDevedora().getDocumento());
        System.out.println("---- Dados cobrador: ");
        System.out.println("Nome: "+acordoDivida.getDivida().getCobradora().getNome());
        System.out.println("Documento: "+acordoDivida.getDivida().getCobradora().getDocumento());
        
        System.out.println("Valor da dívida: "+acordoDivida.getDivida().getValorDivida());
        System.out.println("Forma de pagamento: "+acordoDivida.getFormaDePagamento().name());
        System.out.println("Valor total: "+acordoDivida.getValorTotal());
    }  
}
