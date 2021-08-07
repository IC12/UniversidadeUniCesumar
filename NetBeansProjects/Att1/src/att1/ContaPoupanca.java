package att1;

public class ContaPoupanca extends Conta {
    
    public ContaPoupanca(int agenciaConta, int numeroConta, Cliente titular2){
        super(agenciaConta, numeroConta, titular2);
    } 
    
    @Override
    public void depositar(double valor){
        valor = valor*1.2;
        super.depositar(valor);
    }
    
    @Override
    public void sacar(double valor){
        double valorSacar = valor*1.1;
        if (this.getSaldoConta() < valorSacar){
            System.out.println("Saldo: " + this.getSaldoConta() + "Valor a ser sacado: " + valorSacar);   
        } else
            this.setReduzirSaldo(valorSacar);
    }
}
