public class Tri {
	public static void main(String[] args) {
		int[] integerArray = new int[3];
		int i = 0;
		Kattio io = new Kattio(System.in);
		while (io.hasMoreTokens()) {
			integerArray[i] = io.getInt();
			i++;
		}
		if (integerArray[0] + integerArray[1] == integerArray[2]) {
			io.println(integerArray[0] + "+" + integerArray[1] + "=" + integerArray[2]);
		}
		else if (integerArray[0] - integerArray[1] == integerArray[2]) {
			io.println(integerArray[0] + "-" + integerArray[1] + "=" + integerArray[2]);
		}
		else if (integerArray[0] * integerArray[1] == integerArray[2]) {
			io.println(integerArray[0] + "*" + integerArray[1] + "=" + integerArray[2]);
		}
		else if (integerArray[0] / integerArray[1] == integerArray[2]) {
			io.println(integerArray[0] + "/" + integerArray[1] + "=" + integerArray[2]);
		}
		else if (integerArray[1] + integerArray[2] == integerArray[0]) {
			io.println(integerArray[0] + "=" + integerArray[1] + "+" + integerArray[2]);
		}
		else if (integerArray[1] - integerArray[2] == integerArray[0]) {
			io.println(integerArray[0] + "=" + integerArray[1] + "-" + integerArray[2]);
		}
		else if (integerArray[1] * integerArray[2] == integerArray[0]) {
			io.println(integerArray[0] + "=" + integerArray[1] + "*" + integerArray[2]);
		}
		else if (integerArray[1] / integerArray[2] == integerArray[0]) {
			io.println(integerArray[0] + "=" + integerArray[1] + "/" + integerArray[2]);
		}
		else {
			io.println("ERROR: No valid equation");
		}
		io.close();
	}
}
