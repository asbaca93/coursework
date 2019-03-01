/************************************************************************************
*
* Andrew Baca
* 
* CS 278
* Lab 7
*
* October 10, 2017
*
* Purpose: This program maps functions X and Y prints out all ossible functions
*          and decides whether they are onto, one to one, or a bijection
*
***************************************************************************************/
import java.util.Scanner;

public class functions{
   public static void main(String args[]){
      
      Scanner scnr = new Scanner(System.in);
      boolean onto;
      boolean oneToOne;
      boolean bijection;
      char[] X = new char[3];
      int[] Y;
      int N;
      
      System.out.println("This program will generate all the"
                  + " possible functions from X = {a,b,c} to Y = {0,1,...,N}.");
      System.out.print("Enter N: ");
      N = scnr.nextInt();
      
      Y = new int[N + 1];
      
      for(int i  = 0; i <= N; i++){
         