import java.util.Scanner;

public class fibonacci{
    public static void main(String args[]){
        Scanner numScan = new Scanner(System.in);
        int n;
        int fibNumEx;
        int fibNumLin;
        long startTime1, startTime2, endTime1, endTime2;
        double totalTimeEx, totalTimeLin;
        
        System.out.println("***FIBONACCI ALGORITHM TEST***");
        System.out.println();
        System.out.println("Enter the integer term of the fibonacci " +
            "sequence to be displayed: ");
        
        n = numScan.nextInt();
        System.out.println();
        
        startTime1 = currentTime();
        fibNumEx = fibEx(n);
        endTime1 = currentTime();
        totalTimeEx = computeTime(startTime1, endTime1);
        
        startTime2 = currentTime();
        fibNumLin = fibLin(n);
        endTime2 = currentTime();
        totalTimeLin = computeTime(startTime2, endTime2);
        System.out.println("\nThe requested term (" + n + ") of the fibonacci" 
            + " sequence is: " + fibNumLin);
        System.out.println();
        System.out.print("Time to run fibonacci exponential algorithm: " + totalTimeEx);
        System.out.println(" milliseconds");
        System.out.println();
        System.out.print("Time to run fibonacci linear algorithm: " + totalTimeLin);
        System.out.println(" milliseconds");
        System.out.println();
        System.out.println(fibNumLin);
    }
    
    public static int fibEx(int n){
        if(n == 0)
            return(0);
        if(n == 1)
            return(1);
        return (fibEx(n - 1) + fibEx(n - 2));
    }
    
    public static int fibLin(int n){
        if(n == 0)
            return(0);
        
        int[] fibArray = new int[n + 1];
        
        fibArray[0] = 0;
        fibArray[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
        }
        
        return fibArray[n];
    }
    
    public static long currentTime(){
        long  start = System.currentTimeMillis();
        return start;
    }
    
    public static double computeTime(long t1, long t2){
        return (double)(t2 - t1);
    }
    
}
