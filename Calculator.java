import java.awt.*;
import java.awt.event.*;
class calc implements ActionListener
{
Frame f=new Frame();
Label l1=new Label("enter number ");
Label l2=new Label("enter number ");
Label l3=new Label("result");
TextField t1=new TextField();
TextField t2=new TextField();
TextField t3=new TextField();
Button b1=new Button("ADD");
Button b2=new Button("SUB");
Button b3=new Button("MUL");
Button b4=new Button("DIV");
calc() {
l1.setBounds(50,100,100,20);
l2.setBounds(50,150,100,20);
l3.setBounds(50,200,100,20);
t1.setBounds(200,100,100,20);
t2.setBounds(200,150,100,20);
t3.setBounds(200,200,100,20);
b1.setBounds(50,250,50,20);
b2.setBounds(110,250,50,20);
b3.setBounds(170,250,50,20);
b4.setBounds(230,250,50,20);
f.add(l1);
f.add(l2);
f.add(t1);
f.add(t2);
f.add(t3);
f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
f.setLayout(null);
f.setVisible(true);
f.setSize(500,500); }
public void actionPerformed(ActionEvent e){
int i=Integer.parseInt(t1.getText());
int j=Integer.parseInt(t2.getText());
if(e.getSource()==b1) {
t3.setText(String.valueOf(i+j)); }
if(e.getSource()==b2) {
t3.setText(String.valueOf(i-j)); }
if(e.getSource()==b3)
{
t3.setText(String.valueOf(i*j));
}
if(e.getSource()==b4)
{
t3.setText(String.valueOf(i/j)); }
}
public static void main(String args[]) {
new calc();
}}
