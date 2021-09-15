
package com.mycompany.bhaskara;

import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int a, b, c;
    
        try { 

            System.out.println("Informe os números abaixo de acordo com a fórmula: ax²+bx+c=0");
        
            System.out.println("a: ");
            a = scan.nextInt();
            while(a==0){
                System.out.println("O valor de 'a' não pode ser igual a '0'. Digite novamente:" );
                a = scan.nextInt();
            }
    
            System.out.println("b: ");
            b = scan.nextInt();
    
            System.out.println("c: ");
            c = scan.nextInt();

            System.out.println();
            System.out.printf("%s\n", toString(a, b, c));

        } catch(NumberFormatException e) {
            System.out.println("Erro! Você deve informar um número inteiro!");
        }
    }
  
    public static double delta(int a, int b, int c) {
        return(Math.pow(b, 2) - (4 * a * c)); 
    }
  
    public static String toString(int a, int b, int c) {
        String result;
    
        double d;
        d = delta(a, b, c);
    
        result = String.format("Coeficientes a: %d; b: %d; c: %d\n", a, b, c) +
                 String.format("Discriminante (delta b²-4ac): %.2f\n", d);
    
        if ((d < 0) || (a == 0))
            result = result + "Não existem raízes reais!\n";

        if ((d == 0) && (a != 0)) {
            double x;                      
            x = -b / (2 * a);
            result = result + String.format("Raízes: x1 e x2 = %.2f\n", x);
        }
    
        if ((d > 0) && (a != 0)) {
            double x1, x2;            
            x1 = (-b + Math.sqrt(d)) / (2 * a);
            x2 = (-b - Math.sqrt(d)) / (2 * a);
            result = result + String.format("Raíz: x1 = %.2f\n", x1) +
                              String.format("Raíz: x2 = %.2f\n", x2);
        }  
    
        return(result);
    }
    
}
