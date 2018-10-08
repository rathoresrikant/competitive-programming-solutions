/*
Birthday Cake Candles
problem link = https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/
using System;
using System.IO;

class Solution {
    static int birthdayCakeCandles(int[] ar) {
        Array.Sort<int>(ar, new Comparison<int>((i1, i2) => i2.CompareTo(i1))); //sort array in descending order
        int tallest_candles = 0;
        for (int i = 0; i < ar.Length; i++)
        {
            if ((i != 0) && (ar[i] < ar[i-1]))
                break;
            tallest_candles++;
        }
        return tallest_candles;
    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int arCount = Convert.ToInt32(Console.ReadLine());

        int[] ar = Array.ConvertAll(Console.ReadLine().Split(' '), arTemp => Convert.ToInt32(arTemp))
        ;
        int result = birthdayCakeCandles(ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}