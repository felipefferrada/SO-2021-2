public class Main {
    public static void main(String[] args) {
        
        Palabra palabra = new Palabra();
        Sumador sumador = new Sumador();
        Morse morse = new Morse();

        palabra.start();
        sumador.start();
        morse.start();

        try {
            palabra.join();
        } catch (InterruptedException e) {
            System.err.println("palabra got interrupted! >:C");
        }

        try {
            sumador.join();
        } catch (InterruptedException e) {
            System.err.println("sumador got interrupted! >:C");
        }

        try {
            morse.join();
        } catch (InterruptedException e) {
            System.err.println("morse got interrupted! >:C");
        }

        float tiempoEjecucionPalabra = palabra.getTiempoTotal();
        float tiempoEjecucionSumador = sumador.getTiempoTotal();
        float tiempoEjecucionMorse = morse.getTiempoTotal();

        System.out.println("Tiempo de ejecucion Hebra Palabra: " + (tiempoEjecucionPalabra/1000000) + " [ms]");
        System.out.println("Tiempo de ejecucion Hebra Sumador: " + (tiempoEjecucionSumador/1000000) + " [ms]");
        System.out.println("Tiempo de ejecucion Hebra Morse: " + (tiempoEjecucionMorse/1000000) + " [ms]");

    }
}
