package att1;

public abstract class Conta {

    private int numeroConta;
    private int agenciaConta;
    private Cliente titular;
    private double saldoConta;
    
    public Conta (int agenciaConta, int numeroConta, Cliente titular){
        this.setAgenciaConta(agenciaConta);
        this.setNumeroConta(numeroConta);
        this.titular = titular;
        this.saldoConta = 0;
    }

    public void depositar(double valor){
        this.setDepositar(valor);
    }
    
    public void sacar(double valor){
        this.setReduzirSaldo(valor);
    }
    
    public void transferir(double valor, Conta destino){
        this.sacar(valor);
        destino.depositar(valor);
    }
    
    protected void setReduzirSaldo(double valor){
        this.saldoConta -= valor;
    }
    
    protected void setDepositar(double valor){
        this.saldoConta += valor;
    }
    
    public double getSaldoConta(){
        return this.saldoConta;
    }
    
    public int getNumeroConta(){
        return this.numeroConta;
    }
    
    public void setNumeroConta(int numeroConta){
        if (numeroConta <= 0){
            System.out.println("Não permitido valor menor ou igual a 0.");
            return;
        }
        this.numeroConta = numeroConta;
    }
    
    public int getAgenciaConta(){
        return this.agenciaConta;
    }
    
    public void setAgenciaConta(int agenciaConta){
        if (agenciaConta <= 0){
            System.out.println("Não permitido valor menor ou igual a 0.");
            return;
        }
        this.agenciaConta = agenciaConta;
    }
    
    public Cliente getSetor(){
        return this.titular;
    }
}
