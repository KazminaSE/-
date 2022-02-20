using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FPKM
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Graphics g;
        private void Form1_Paint(object sender, PaintEventArgs e
            {
            g = CreateGraphics();
            g.Clear(Color.White);
            for (int i = 10; i < 500; i += 10)
                g.DrawLine(Pens.LightGray, i, 20, i, 500);
            for (int i = 20; i < 500; i += 10)
                g.DrawLine(Pens.LightGray, 0, i, 500, i);
        }
        private void textBox1_TextChangedo(object sender, EventArgs e)
        {

        }
        private void button1_Click(object sender, EventArgs e)
        {
            int n = 0, m = 0;
            string x = textBox1.Text;
            int x1 = Convert.ToInt32(x);
            string x2 = textBox3.Text;
            int x3 = Convert.ToInt32(x2);
            string y = textBox2.Text;
            int y1 = Convert.ToInt32(y);
            string y2 = textBox4.Text;
            int y3 = Convert.ToInt32(y2);
            string x4 = textBox6.Text;
            int x5 = Convert.ToInt32(x4);
            string y4 = textBox7.Text;
            int y5 = Convert.ToInt32(y4);
            string x6 = textBox9.Text;
            int x7 = Convert.ToInt32(x6);
            string y6 = textBox10.Text;
            int y7 = Convert.ToInt32(y6);
            g = CreateGraphics();
            g.DrawLine(Pens.Black, x1, y1 + 20, x3, y3 + 20);
            g.DrawLine(Pens.Black, x1, y1 + 20, x5, y5 + 20);
            g.DrawLine(Pens.Black, x5, y5 + 20, x7, y7 + 20);
            g.DrawLine(Pens.Black, x3, y3 + 20, x7, y7 + 20);
            for (int i = x1; i <= x7; i += 10)
                for (int j = y1; j <= y7; j += 10)
                {
                    if ((i == x1 || i == x7) || (j == y1 || j == y7))
                    {
                        g.DrawEllipse(Pens.Green, i, j + 20, 3, 3);
                        n++;
                    }
                    else
                    {
                        g.DrawEllipse(Pens.Red, i, j + 20, 3, 3);
                        m++;
                    }
                }
            private void label3_Click(object sender, EventArgs e)
            {

            }
        }
    }
}
