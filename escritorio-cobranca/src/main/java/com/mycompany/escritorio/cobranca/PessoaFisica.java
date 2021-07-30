package com.mycompany.escritorio.cobranca;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class PessoaFisica extends Pessoa {
    private String cpf;
    private LocalDate dataNascimento;
    
    public String getCpf() {
        return cpf;
    }
    
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    
    public LocalDate getDataNascimento() {
        return dataNascimento;
    }
    
    public void setDataNascimento(LocalDate dataNascimento) {
        this.dataNascimento = dataNascimento;
    }
    
     public void setDataNascimento(String dataNascimento) {
        this.dataNascimento = LocalDate.parse(dataNascimento, DateTimeFormatter.ofPattern("dd/MM/yyyy"));
    }
     
     @Override
     public String getDocumento() {
        return this.getCpf();
     }
     
     @Override
     public String getDataFormada() {
        return this.dataNascimento.format(DateTimeFormatter.ofPattern("dd/MM/yyyy"));
     }
}
