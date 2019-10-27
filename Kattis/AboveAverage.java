import java.util.Scanner;

public class AboveAverage {

    private static Scanner reader = new Scanner(System.in);

    public static void main(String[] args) {

        int c;
       
        c = reader.nextInt();
       
        

        for (int i = 0; i < c; i++) {
            
            int n;
            double avg = 0.;
            n = reader.nextInt();
            double[] grade = new double[n];
            
            for (int j = 0; j < n; j++) {
                grade[j] = reader.nextInt();
                avg += grade[j];
            }
            avg = avg/n;
            int count = 0;
            for (int k = 0; k < n; k++){
                if ( grade[k] > avg)
                    count++;
            }
            
            double result = (double) count / (double) n;
            result = result * 100;
            System.out.printf("%.3f", result);
            System.out.println("%");
        }

    }
}
