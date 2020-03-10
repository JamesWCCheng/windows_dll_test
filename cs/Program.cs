using System;

public class Program
{
    public static void Main(string[] args)
    {
        var guid = Guid.NewGuid().ToString().ToUpper();

        Console.WriteLine(guid);
    }
}