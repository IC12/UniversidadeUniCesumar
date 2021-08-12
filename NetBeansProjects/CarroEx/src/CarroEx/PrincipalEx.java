package CarroEx;

public class PrincipalEx {
    public static void main(String[] args) {
        Automovel primeiroAutomovel = new Automovel();
        primeiroAutomovel.setPlaca("SYS85744");
        primeiroAutomovel.setModelo("Ford");
        primeiroAutomovel.setQtdPortas(4);
        
        primeiroAutomovel.setProprietario("Jane", "741852369");
        
        System.out.println("Quantidade Carros: " + primeiroAutomovel.getQtdCarros());
        
        Automovel segundoAutomovel = new Automovel();
        segundoAutomovel.setPlaca("QWS26541");
        segundoAutomovel.setModelo("VW");
        segundoAutomovel.setQtdPortas(2);
        
        System.out.println("Primeiro Carro: \n"+primeiroAutomovel.imprimir());
        System.out.println("Segundo Carro: \n"+segundoAutomovel.imprimir());
        
        Automovel[] vetorAutomovel = new Automovel[2];
        vetorAutomovel[0] = primeiroAutomovel;
        vetorAutomovel[1] = segundoAutomovel;
        
        for (int i = 0; i < vetorAutomovel.length; i++){
            Automovel automovel = vetorAutomovel[i];
            if (automovel.getModelo().equalsIgnoreCase("Ford"))
            System.out.println("Automóvel posição " + i + " - valor - \n" + vetorAutomovel[i].imprimir());
        }
        
    }
    
}
