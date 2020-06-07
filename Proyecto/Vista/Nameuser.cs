using System;
using System.Windows.Forms;

namespace Proyecto
{
    public partial class Nameuser : Form
    {
        public Nameuser()
        {
            InitializeComponent();
        }
//Pora regresar al menu principal
        private void btbehind_Click(object sender, EventArgs e)
        {
            this.Hide();
            Inicio inicio = new Inicio();
            inicio.Show();
            this.Close();
        }
    }
}