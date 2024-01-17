class HelloWorld {
    public static void main(String[] args) {
        // main body 
    }

    // acess_specifier return_type function_name(parameters){
        // function_body
    // }
}


/*
 * Driver manager
 * Oonnection
 * Statement
 * prepared statement
 * Resultset
 * 
 * 
 * Steps involved in database connection
 * -- register the driver
 *      Class.forName("com.mysql.cj.jdbc.Driver");
 * -- establish the connection
 *      Connection con = DriverManager.getConnection(url.username,password);
 *          Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/dbname",root,"Ravikant@1043");
 * -- create the statement object
 *      Statement st=con.ceateStatement();
 * -- execute your sql query 
 *      st.executeUpdata("insert into table_name values(all data variables needed to be inserted)");
 *      st.executeQuery("select * from table_name");
 * -- close the connection 
 *      con.close();
 */