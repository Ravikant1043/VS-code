import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class calculator implements ActionListener{

    JFrame frame;
    JTextField textField;
    JButton[] numButtons = new JButton[10];
    JButton[] funcButtons = new JButton[9];
    JButton addb,subb,divib,mulb,equal,dec,del,clear,neg;
    JPanel panel;
    Font font = new Font("Helvetica", Font.BOLD, 30);
    double num1=0,num2=0,result=0;
    char operator;

    calculator(){
        frame=new JFrame("Calculator ");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(420, 600);
        frame.setLayout(null);

        textField=new JTextField();
        textField.setBounds(50, 25, 300, 50);
        textField.setFont(font);
        textField.setEditable(false);

        addb=new JButton("+");
        subb=new JButton("-");
        mulb=new JButton("*");
        divib=new JButton("/");
        equal=new JButton("=");
        dec=new JButton(".");
        clear=new JButton("C");
        del=new JButton("Del");
        neg=new JButton("(-)");

        funcButtons[0]=addb;
        funcButtons[1]=subb;
        funcButtons[2]=mulb;
        funcButtons[3]=divib;
        funcButtons[4]=dec;
        funcButtons[5]=equal;
        funcButtons[6]=del;
        funcButtons[7]=clear;
        funcButtons[8]=neg;

        for(int i=0;i<9;i++){
            funcButtons[i].addActionListener(this);
            funcButtons[i].setFont(font);
            funcButtons[i].setFocusable(false);
        }
        for(int i=0;i<10;i++){
            numButtons[i]=new JButton(String.valueOf(i));
            numButtons[i].addActionListener(this);
            numButtons[i].setFont(font);
            numButtons[i].setFocusable(false);
        }
        neg.setBounds(50,430, 100,50);
        del.setBounds(150, 430, 100, 50);
        clear.setBounds(250, 430, 100, 50);
        panel=new JPanel();
        panel.setBounds(50, 100, 300, 300);
        panel.setLayout(new GridLayout(4,4,10,10));
        // panel.setBackground(Color.BLUE);

        panel.add(numButtons[1]);
        panel.add(numButtons[2]);
        panel.add(numButtons[3]);
        panel.add(addb);
        panel.add(numButtons[4]);
        panel.add(numButtons[5]);
        panel.add(numButtons[6]);
        panel.add(subb);
        panel.add(numButtons[7]);
        panel.add(numButtons[8]);
        panel.add(numButtons[9]);
        panel.add(mulb);
        panel.add(numButtons[0]);
        panel.add(divib);
        panel.add(dec);
        panel.add(del);
        panel.add(equal);
        

        frame.add(panel);
        frame.add(neg);
        frame.add(del);
        frame.add(clear);
        frame.add(textField);
        frame.setVisible(true);
    }

    // @Override
    public static void main(String args[]) {
        calculator cal=new calculator(); 
    }

    public void actionPerformed(ActionEvent e){
        for(int i=0;i<10;i++){
            if(e.getSource()==numButtons[i]){
                textField.setText(textField.getText().concat(String.valueOf(i)));
            }
        }
        if(e.getSource()==dec){
            textField.setText(textField.getText().concat("+"));
        }
        if(e.getSource()==addb){
            num1=Double.parseDouble(textField.getText());
            // textField.setText(textField.getText().concat("+"));
            operator='+';
            textField.setText("");
        }
        if(e.getSource()==subb){
            num1=Double.parseDouble(textField.getText());
            // textField.setText(textField.getText().concat("-"));
            operator='-';
            textField.setText("");
        }
        if(e.getSource()==divib){
            num1=Double.parseDouble(textField.getText());
            // textField.setText(textField.getText().concat("-"));
            operator='/';
            textField.setText("");
        }
        if(e.getSource()==mulb){
            num1=Double.parseDouble(textField.getText());
            // textField.setText(textField.getText().concat("-"));
            operator='*';
            textField.setText("");
        }
        if(e.getSource()==equal){
            num2=Double.parseDouble(textField.getText());
            if(operator=='+'){
                result=num1+num2;;

            }
            else if(operator=='-'){
                result=num1-num2;
            }
            else if(operator=='*'){
                result  = num1*num2;
            }
            else if(operator=='/'){
                result=num1/num2;
            }
            textField.setText(String.valueOf(result));
            num1=result;
        }
        if(e.getSource()==clear){
            textField.setText("");
        }
        if(e.getSource()==del){
            String t=textField.getText();
            textField.setText("");
            for(int i=0;i<t.length()-1;i++){
                textField.setText(textField.getText()+t.charAt(i));
            }
        }
        if(e.getSource()==neg){
            double nn=Double.parseDouble(textField.getText());
            nn*=-1;
            textField.setText(String.valueOf(nn));
        }
        
    }
}