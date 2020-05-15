import java.io.BufferedOutputStream;
import java.io.IOException;

public class HelloWorld {
	public static void main(String[] args) throws IOException {
		BufferedOutputStream bos = new BufferedOutputStream(System.out);
		bos.write("Hello World!\n".getBytes());
		bos.close();
	}
}
