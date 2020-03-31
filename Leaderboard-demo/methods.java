package leaderboard;

import java.util.*;
import java.util.Map.Entry;

public class methods {
	TreeMap<String, Float> WLL = new TreeMap<String, Float>();
	TreeMap<String, Float> KDL = new TreeMap<String, Float>();
public float findWL (int W, int L) {
	Float WL = (float) W / L;
	return WL;
}
public float findKD (int K, int D) {
	Float KD = (float) K / D;
	return KD;
}
public TreeMap<String, Float> insertUserWL (String name, Float WL) {
	WLL.put(name, WL);
	return WLL;
}

public TreeMap<String, Float> insertUserKD (String name, Float KD) {
	KDL.put(name, KD);
	return KDL;
}
public void printLeaderboard(TreeMap<String, Float> LB, int number) {
	Map sorted = sortByValues(LB);
	Set set = sorted.entrySet();
	Iterator i = set.iterator();
	while(i.hasNext() && number > 0){
		Map.Entry meLB = (Map.Entry)i.next();
		System.out.println(number + ".\t" + meLB.getKey() + ": \t" + meLB.getValue());
		number--;
		}
}
public static <K, V extends Comparable<V>> Map<K, V> 
sortByValues(final Map<K, V> map) {
Comparator<K> valueComparator = 
         new Comparator<K>() {
             public int compare(K k1, K k2) {
                 int compare = 
                       map.get(k1).compareTo(map.get(k2));
                 if (compare == 0) 
                	 return 1;
                 else
                	 return compare;
             }
          };

Map<K, V> sortedByValues = 
new TreeMap<K, V>(valueComparator);
sortedByValues.putAll(map);
return sortedByValues;
}

public void printLeaderboardint(TreeMap<String, Integer> LB, int number) {
	Map sorted = sortByValues(LB);
	Set set = sorted.entrySet();
	Iterator i = set.iterator();
	while(i.hasNext() && number > 0){
		Map.Entry meLB = (Map.Entry)i.next();
		System.out.println(number + ".\t" + meLB.getKey() + ": \t" + meLB.getValue());
		number--;
		}
	}


}
