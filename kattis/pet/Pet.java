public class Pet {
	
	public static void main(String[] args) {
		
		int[] integerArray = new int[20];
		int i = 0, j, contestantGrades, winnerScore = -1, winnerNumber = -1;
		
		Kattio io = new Kattio(System.in);
		
		while (io.hasMoreTokens()) {
			integerArray[i] = io.getInt();
			i++;
		}
		
		for (i = 0; i < 5; i++) {
			
			contestantGrades = 0;
			
			for (j = 0; j < 4; j++) {
				contestantGrades = contestantGrades + integerArray[j + i * 4];
			}
			
			if (contestantGrades > winnerScore) {
				winnerNumber = i + 1;
				winnerScore = contestantGrades;
			}
		}
		
		io.println(winnerNumber + " " + winnerScore);
		
		io.close();
	}
}