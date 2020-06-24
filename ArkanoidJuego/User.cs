using System;
using System.Windows.Forms;

namespace ArkanoidJuego
{
    public partial class User : Form
    {
        public User()
        {
            InitializeComponent();
            Height = ClientSize.Height;
            Width = ClientSize.Width;
            WindowState = FormWindowState.Maximized;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Play user = new Play();
            user.Show();
            this.Close();
        }
    }
}