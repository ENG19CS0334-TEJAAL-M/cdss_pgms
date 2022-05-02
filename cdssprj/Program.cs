using System;
namespace cdss
{
    class Program
    {
        static void Main(string[]args)
        {
            Console.WriteLine("Hello World");
            while(true)
            {
                Console.Write("> ");
                var line=Console.ReadLine();
                if(string.IsNullOrWhiteSpace(line))
                    return;
                if(line=="1+2*3")
                    Console.WriteLine("7");
                else
                Console.WriteLine("error:invalid expression");
            }
        }
    }
}
