import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Morse extends Thread {

    private long tiempoTotal;

    @Override
    public void run() {

        long start = System.nanoTime();

        File f = new File("morse.txt");
        
        try {
            
            BufferedReader bf = new BufferedReader(new FileReader(f));
            String aux = "";
            String linea;
            String palabraEnMorse = "";

            while ((linea = bf.readLine()) != null) {
                
                aux = aux + linea + " ";

                String str[] = aux.split(" ");
                List<String> arreglo = new ArrayList<String>();
                arreglo = Arrays.asList(str);

                for (String letra : arreglo) {
                
                    switch (letra) {
                        case ".-":
                            palabraEnMorse += "A";
                            break;
    
                        case "-...":
                            palabraEnMorse += "B";
                            break;
    
                        case "-.-.":
                            palabraEnMorse += "C";
                            break;
    
                        case "-..":
                            palabraEnMorse += "D";
                            break;
    
                        case ".":
                            palabraEnMorse += "E";
                            break;
    
                        case "..-.":
                            palabraEnMorse += "F";
                            break;
    
                        case "--.":
                            palabraEnMorse += "G";
                            break;
    
                        case "....":
                            palabraEnMorse += "H";
                            break;
    
                        case "..":
                            palabraEnMorse += "I";
                            break;
    
                        case ".---":
                            palabraEnMorse += "J";
                            break;
    
                        case "-.-":
                            palabraEnMorse += "K";
                            break;
    
                        case ".-..":
                            palabraEnMorse += "L";
                            break;
    
                        case "--":
                            palabraEnMorse += "M";
                            break;
                        
                        case "-.":
                            palabraEnMorse += "N";
                            break;
    
                        case "---":
                            palabraEnMorse += "O";
                            break;
    
                        case ".--.":
                            palabraEnMorse += "P";
                            break;
    
                        case "--.-":
                            palabraEnMorse += "Q";
                            break;
    
                        case ".-.":
                            palabraEnMorse += "R";
                            break;
    
                        case "...":
                            palabraEnMorse += "S";
                            break;
    
                        case "-":
                            palabraEnMorse += "T";
                            break;
    
                        case "..-":
                            palabraEnMorse += "U";
                            break;
    
                        case "...-":
                            palabraEnMorse += "V";
                            break;
    
                        case ".--":
                            palabraEnMorse += "W";
                            break;
    
                        case "-..-":
                            palabraEnMorse += "X";
                            break;
    
                        case "-.--":
                            palabraEnMorse += "Y";
                            break;
    
                        case "--..":
                            palabraEnMorse += "Z";
                            break;
                    
                        default:
                            break;
                    }
                }

                aux = "";

                if (palabraEnMorse != "") {

                    palabraEnMorse += " ";
                    
                }
            }

            System.out.println(palabraEnMorse);
            bf.close();

            long end = System.nanoTime();
            tiempoTotal = (end - start);
            
            return;

        } catch (Exception e) {
            System.err.println("No se encontro el archivo");
        }

    }

    /* funcion para obtener el tiempo total de ejecucion en nanosegundos */
    public long getTiempoTotal() {
        return tiempoTotal;
    }
}
