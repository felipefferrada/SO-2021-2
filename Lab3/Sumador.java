import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Sumador extends Thread {
    
    private long tiempoTotal;

    @Override
    public void run() {

        long start = System.nanoTime();

        File f = new File("numeros.txt");
        int resultado = 65;

        try {
            BufferedReader bf = new BufferedReader(new FileReader(f));
            String aux = "";
            String linea;

            while ((linea = bf.readLine()) != null) {
                
                aux = aux + linea + " ";

            }

            String str[] = aux.split(" ");
            List<String> arreglo = new ArrayList<String>();
            arreglo = Arrays.asList(str);

            for (String strNumero : arreglo) {

                int numero = Integer.parseInt(strNumero);
                
                for (String strSigNumero : arreglo) {

                    int sigNumero = Integer.parseInt(strSigNumero);
                    
                    if ((numero + sigNumero) == resultado){
                        System.out.println(numero + " + " + sigNumero + " = " + resultado);
                        bf.close();

                        long end = System.nanoTime();
                        tiempoTotal = (end - start);

                        return;
                    }
                }
            }
            
            bf.close();

        } catch (Exception e) {
            System.err.println("No se encontró el archivo");
        }

        System.out.println("No existe el par de numeros");

        long end = System.nanoTime();
        tiempoTotal = (end - start);
    }

    /* funcion para obtener el tiempo total de ejecucion en nanosegundos */
    public long getTiempoTotal() {
        return tiempoTotal;
    }
}
