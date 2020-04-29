package leaderboard;
import java.security.KeyStore.Entry;
import java.util.*;


public class driver {

static TreeMap<String, Integer> WL = new TreeMap<String, Integer>();
static TreeMap<String, Integer> LL = new TreeMap<String, Integer>();
static TreeMap<String, Integer> KL = new TreeMap<String, Integer>();
static TreeMap<String, Integer> DL = new TreeMap<String, Integer>();
static TreeMap<String, Integer> TGL = new TreeMap<String, Integer>();

	public static void main(String[] args) 
	{
		
Boolean startLoop = true;

String input;
char choice;
Scanner keyboard = new Scanner(System.in);
methods method = new methods();
Random rand = new Random();
int usercount = 0;

		while(startLoop)
		{
			input = keyboard.nextLine();
			choice = input.charAt(0);
		
			switch (choice)
			{
			case '1':
				usercount++;
				String name = "Player " + usercount;
				System.out.println("You are: " + name);
				int A = rand.nextInt(50);
				System.out.println ("You have " + A + " wins.");
				int B = rand.nextInt(50);
				System.out.println ("You have " + B + " loses.");
				System.out.println ("You have played " + (A + B) + " games in total.");
				System.out.println("Your W/L percentage is: " + method.findWL(A, B));
				System.out.println("Your number of kills are going to be between: " + A*5
						+ " and " + (A*5+B*4));
				
				int C;
					if(B >= 1){
						C = rand.nextInt(B*4);
						C += A*5;
					}
					else {
						C = A*5;
					}
					
				System.out.println ("You have " + C + " kills.");
				System.out.println("Your number of deaths are going to be between: " + B*5
						+ " and " + (B*5+A*4));
				
				int D;
					if (A > 1) {
						D = rand.nextInt(A*4);
						D += B*5;
					}
					else {
						D = B*5;
					}
					
				System.out.println ("You have " + D + " deaths.");
				System.out.println("Your K/D percentage is: " + method.findKD(C, D));
				
				method.insertUserWL(name, method.findWL(A, B));
				method.insertUserKD(name, method.findKD(C, D));
				
				WL.put(name, A);
				LL.put(name, B);
				KL.put(name, C);
				DL.put(name, D);
				TGL.put(name, (A + B));
				
				break;
				
			case '2':			System.out.println("Win/Loss Leaderboard:");
								method.printLeaderboard(method.WLL, usercount);
								break;
								
			case '3':			System.out.println("Kill/Death Leaderboard:");
								method.printLeaderboard(method.KDL, usercount);
								break;
								
			case '4':			System.out.println("Win Leaderboard:");
								method.printLeaderboardint(WL, usercount);
								break;
			case '5':
								System.out.println("Loss Leaderboard:");
								method.printLeaderboardint(LL, usercount);
								break;
			case '6':
								System.out.println("Kill Leaderboard:");
								method.printLeaderboardint(KL, usercount);
								break;
			case '7':			System.out.println("Death Leaderboard:");
								method.printLeaderboardint(DL, usercount);
								break;
			case '8':			System.out.println("Total Games Leaderboard:");
								method.printLeaderboardint(TGL, usercount);
								break;
								
			case '9':
								startLoop = false;
								break;
			}
		}
	}
}
