using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _20141527E1
{
    public partial class Form1 : Form
    {
        private bool[] m_Checked = new bool[3] { false, false, false };

        public Form1()
        {
            InitializeComponent();
        }


        private void Form1_Load(object sender, EventArgs e)
        {
            //comboBox1.Items.Add("남자");
            //comboBox1.Items.Add("여자");
            listBox1.Items.Add("독서");
            listBox1.Items.Add("낚시");
            listBox1.Items.Add("운동");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string hobby = " ";

            if (checkBox1.Checked == true)
            {
                hobby += checkBox1.Text.ToString() + " ";
            }
            if (checkBox2.Checked == true)
            {
                hobby += checkBox2.Text.ToString() + " ";
            }
            if (checkBox3.Checked == true)
            {
                hobby += checkBox3.Text.ToString();
            }

            if (textBox2.Text == "")//이름x
            {
                MessageBox.Show("이름을 입력하십시오");
            }
            else if (textBox2.Text != "")//이름o
            {
                if (radioButton1.Checked == true || radioButton2.Checked == true)
                {
                    if (checkBox1.Checked == true || checkBox2.Checked == true || checkBox3.Checked == true)
                    {
                        textBox1.Text = "이름 : " + textBox2.Text + "\r\n" + "성별 : " + radioButton1.Text.ToString() + "\r\n" + "취미 :" + hobby;
                    }
                    else if (checkBox1.Checked == false && checkBox2.Checked == false && checkBox3.Checked == false)
                    {
                        textBox1.Text = "이름 : " + textBox2.Text + "\r\n" + "성별 : " + radioButton1.Text.ToString();
                    }
                }
                else if (radioButton1.Checked == false && radioButton2.Checked == false)
                {
                    if (checkBox1.Checked == true || checkBox2.Checked == true || checkBox3.Checked == true)
                    {
                        textBox1.Text = "이름 : " + textBox2.Text + "\r\n" + "취미 :" + hobby+ "\n";
                    }
                }
            }
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(comboBox1.SelectedIndex == 0)
            {
                radioButton1.Checked = true;
            }
            else if(comboBox1.SelectedIndex == 1)
            {
                radioButton2.Checked = true;
            }
        }

        private void radioButton1_Click(object sender, EventArgs e)
        {
            comboBox1.Text = radioButton1.Text.ToString();
        }

        private void radioButton2_Click(object sender, EventArgs e)
        {
            comboBox1.Text = radioButton2.Text.ToString();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            foreach (int index in listBox1.SelectedIndices)
            {
                if (index == 0)
                {
                    m_Checked[0] = true;
                    checkBox1.Checked = true;
                }

                else if (index == 1)
                {
                    m_Checked[1] = true;
                    checkBox2.Checked = true;
                }
                else if (index == 2)
                {
                    m_Checked[2] = true;
                    checkBox3.Checked = true;
                }
            }

            if (listBox1.GetSelected(0) == false)
            {
                checkBox1.Checked = false;
            }
            if (listBox1.GetSelected(1) == false)
            {
                checkBox2.Checked = false;
            }
            if (listBox1.GetSelected(2) == false)
            {
                checkBox3.Checked = false;
            }
        }

        private void checkBox1_Click(object sender, EventArgs e)
        {
            if(m_Checked[0] == true)
            {
                m_Checked[0] = false;
                listBox1.SetSelected(0, false);
            }
            else
            {
                m_Checked[0] = true;
                listBox1.SetSelected(0, true);
            }
        }

        private void checkBox2_Click(object sender, EventArgs e)
        {
            if (m_Checked[1] == true)
            {
                m_Checked[1] = false;
                listBox1.SetSelected(1, false);
            }
            else
            {
                m_Checked[1] = true;
                listBox1.SetSelected(1, true);
            }
        }

        private void checkBox3_Click(object sender, EventArgs e)
        {
            if (m_Checked[2] == true)
            {
                m_Checked[2] = false;
                listBox1.SetSelected(2, false);
            }
            else
            {
                m_Checked[2] = true;
                listBox1.SetSelected(2, true);
            }
        }
    }
}
