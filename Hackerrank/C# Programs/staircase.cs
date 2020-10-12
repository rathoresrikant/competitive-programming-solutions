/*
Staircase
problem link = https://www.hackerrank.com/challenges/staircase/problem
*/
using System;

class Solution
{
    static void staircase(int n)
    {
        string star_body = "#";
        for (int i = 1; i <= n; i++)
        {
            Console.WriteLine(star_body.PadLeft(n, ' '));
            star_body += "#";
        }
    }

    static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());

        staircase(n);
    }
}