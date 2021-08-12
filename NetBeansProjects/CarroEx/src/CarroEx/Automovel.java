package CarroEx;

public class Automovel{
    private Proprietario proprietario;
    private String placa;
    private String modelo;
    private int qtdPortas;
    private boolean motorEletrico;
    private static int qtdCarros = 0;
    
    public Automovel(){
        this.qtdCarros += 1;
    }
    
    public Automovel(String tipoMotor){
        if (tipoMotor.equals("Elétrico")){
            this.motorEletrico = true;
        } else this.motorEletrico = false;
    }
    
    public Proprietario getProprietario() {
        return proprietario;
    }

    public void setProprietario(String nome, String cnh) {
        this.proprietario = new Proprietario(nome, cnh);
    }
    
    public void setPlaca(String placa){
        if ((placa.length() == 8) || (placa.length() == 9)){
            this.placa = placa;
        } else {
            System.out.println("Placa inválida!");
        }
    }
    
    public String getPlaca(){
        return this.placa;
    }
    
    public String getModelo(){
        return modelo;
    }
    
    public void setModelo(String modelo){
        this.modelo = modelo;
    }
    
    public int getQtdPortas(){
        return qtdPortas;
    }
    
    public void setQtdPortas(int qtdPortas){
        if ((qtdPortas > 0) && (qtdPortas < 9)){
            this.qtdPortas = qtdPortas;
        } else {
            System.out.println("Quantidade de portas inválidas!");
        }
    }
    
    public static int getQtdCarros() {
        return qtdCarros;
    }
    
    public boolean isMotorEletrico() {
        return motorEletrico;
    }

    public void setMotorEletrico(boolean motorEletrico) {
        this.motorEletrico = motorEletrico;
    }
    
    public String imprimir(){
        return "CARRO\n" +
                "Placa: "+ this.getPlaca()+"\n"+
                "Modelo: "+ this.getModelo()+"\n"+
                "Quantidade de Portas: "+ this.getQtdPortas();
    }

}
