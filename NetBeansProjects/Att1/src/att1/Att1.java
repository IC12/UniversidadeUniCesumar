package att1;

public class Att1 {
    public static void main(String[] args) {
    
        Cliente titular1 = new Cliente("Carla", "117.062.990-36");
        Cliente titular2 = new Cliente("John", "166.108.900-30");
        
        ContaCorrente contaCorrente = new ContaCorrente(98765, 1234567, titular1);
        contaCorrente.depositar(2000);
        
        ContaPoupanca contaPoupanca = new ContaPoupanca(56789, 7654321, titular2);
        contaPoupanca.depositar(2000);
        
        exibirDados(contaCorrente, contaPoupanca);
        
        System.out.println("Transferir R$500,00 da Conta Corrente para Conta Poupança");
        contaCorrente.transferir(500.0, contaPoupanca);
        exibirDados(contaCorrente, contaPoupanca);
    }
        
    private static void exibirDados(ContaCorrente contaCorrente, ContaPoupanca contaPoupanca){
            System.out.println("Conta Corrente: \n" +
                    "Nome: " + contaCorrente.getSetor().getNome() + "\n" +
                    "CPF: " + contaCorrente.getSetor().getCpf() + "\n" +
                    "Agência da Conta: " + contaCorrente.getAgenciaConta() + "\n" +
                    "Número da Conta: " + contaCorrente.getNumeroConta() + "\n" +
                    "Saldo: " + contaCorrente.getSaldoConta() + "\n" +
                    "");
            System.out.println("Conta Poupança: \n" +
                    "Nome: " + contaPoupanca.getSetor().getNome() + "\n" +
                    "CPF: " + contaPoupanca.getSetor().getCpf() + "\n" +
                    "Agência da Conta: " + contaPoupanca.getAgenciaConta() + "\n" +
                    "Número da Conta: " + contaPoupanca.getNumeroConta() + "\n" +
                    "Saldo: " + contaPoupanca.getSaldoConta() + "\n" +
                    "");          
    }
    
}
