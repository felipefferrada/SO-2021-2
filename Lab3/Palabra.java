import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

public class Palabra extends Thread {

    private long tiempoTotal;
    
    @Override
    public void run() {

        long start = System.nanoTime();

        File f = new File("palabras.txt");

        String eiffel = "eiffel";

        try {
            BufferedReader bf = new BufferedReader(new FileReader(f));
            String aux = "";
            String linea;

            while ((linea = bf.readLine()) != null) {
                aux = aux + linea + "\n";

                if (aux.contains(eiffel)) {

                    System.out.println("eiffel");

                    bf.close();
                    long end = System.nanoTime();
                    tiempoTotal = (end - start);

                    return;

                } else {

                    aux = "";
                }
            }

            bf.close();

        } catch (Exception e) {
            System.err.println("No se encontró el archivo");
        }

        System.out.println("Palabra no encontrada");

        long end = System.nanoTime();
        tiempoTotal = (end - start);
        
    }

    /* funcion para obtener el tiempo total de ejecucion en nanosegundos */
    public long getTiempoTotal() {
        return tiempoTotal;
    }

}
