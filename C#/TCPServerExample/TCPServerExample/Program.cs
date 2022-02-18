using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace TCPServerExample
{
    internal class Program
    {
        static void Main(string[] args)
        {
            TcpListener TcpListener = new TcpListener(IPAddress.Parse("192.168.112.123"), 5000);
            TcpListener.Start();

            Console.WriteLine("TCP server started listen");
            TcpClient t = TcpListener.AcceptTcpClient();
            ClientHandle(t);

            Console.ReadKey();
        }

        private static void ClientHandle(object obj)
        {
            TcpClient t = obj as TcpClient;

            Console.WriteLine("TCP client connected from " + ((IPEndPoint)t.Client.RemoteEndPoint).Address + ":" + ((IPEndPoint)t.Client.RemoteEndPoint).Port);
            
            t.Close();
        }
    }

    public static class DataStorage 
    {
        public static int Number;
    }
}
