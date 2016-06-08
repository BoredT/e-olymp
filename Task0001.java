import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Task001 {
    private Scanner mInput;
    private PrintWriter mOutput;


    public static void main(String [] args) {
        new Task001().run();
    }

    public void run() {
            try {
                openFiles();
                solveTask();
            }
            catch(Exception e) {
                System.out.println("Failed to execute " + this.getClass().getSimpleName());
                e.printStackTrace();

            }
            finally  {
                if (mInput != null) {
                    mInput.close();
                }
                if (mOutput != null) {
                    mOutput.close();
                }
            }

    }

    public void openFiles() throws FileNotFoundException {
        mInput = new Scanner(new File("input.txt"));
        mOutput = new PrintWriter(new File("output.txt"));
    }

    public void solveTask() {
        int n = mInput.nextInt();
        mOutput.print((n / 10) + " " + (n % 10));
    }
}