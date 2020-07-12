/*
Mini-Max Sum
problem link = https://www.hackerrank.com/challenges/mini-max-sum/problem
*/
using System;
using System.Linq;

class Solution
{
    static void miniMaxSum(long[] arr)
    {
        Array.Sort(arr);
        long sumMini = arr.Take(4).Sum(), sumMax = arr.Skip(1).Sum();
        Console.WriteLine($"{sumMini} {sumMax}");
    }

    static void Main(string[] args)
    {
        long[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), arrTemp => Convert.ToInt64(arrTemp))
        ;
        miniMaxSum(arr);
    }
}