// See https://aka.ms/new-console-template for more information
using System;
class Program
{
    public static void Main(String[] args){
        string s = Console.ReadLine();
        char[] ch = s.ToCharArray();
        int len = s.Length;
        bool[] isVisited = new bool[26];
        for (int i = 0; i < len; i++){
            if (!isVisited[ch[i] - 'a']){
                Console.Write(ch[i]);
                isVisited[ch[i] - 'a'] = true;
            }
        }
        Console.WriteLine();
    }
}
