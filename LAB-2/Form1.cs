using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LAB_2
{
    public partial class LAB2 : Form
    {
        public LAB2()
        {
            InitializeComponent();
        }
        //TASK1
        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Ми не сомневались, что ви так думаете");
        }

        private void button2_MouseMove(object sender, MouseEventArgs e)
        {
            button2.Top -= e.Y;
            button2.Left += e.X;
            if (button2.Top < -10 || button2.Top > 100) button2.Top = 60;
            if (button2.Left < -80 || button2.Left > 250) button2.Left = 120;
        }
        // TASK2
        private void button3_Click(object sender, EventArgs e)
        {
            label2.Text = "Привет";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            label2.Text = "До свидания";
        }

        private void LAB2_Load(object sender, EventArgs e)
        {
            label2.BackColor = Color.Yellow;
            label2.Text = "Начало роботи";
            label3.BackColor = Color.Pink;
            label3.Text = "Начало роботи";
        }
        // TASK3
        private void button5_Click(object sender, EventArgs e)
        {
            label3.Visible = false;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            label3.Visible = true;
        }
        // TASK4
        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Visible = false;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Visible = true;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
        }

        //TASK5
        private void button10_Click(object sender, EventArgs e)
        {
            dateTimePicker1.Focus();
            label4.Text = $"Вибраная дата {dateTimePicker1.Text}";
        }
        private void dateTimePicker1_GotFocus(object sender, EventArgs e)
        {
            System.Windows.Forms.SendKeys.Send("%{DOWN}");
        }
    }
}
