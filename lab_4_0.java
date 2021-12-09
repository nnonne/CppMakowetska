public class lab_4_0 {
	public static void main(){
        String mas[] = {"mes1", "mes2", "mes3"};
        conn_manager cm = new conn_manager(mas);
        while(cm.existConnection()){
            cm.getConnection().show();
        }
    }
}
