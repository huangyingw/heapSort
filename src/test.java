public class test {
	static public void main(String[] args) {

		int[] data = { 6, 16, 15, 1, 12, 13, 2, 9, 10, 5, 3, 7, 10, 11, 14, 17,
				2, 18, 20, 19 };
		HeapSort heapSort = new HeapSort(data);
		heapSort.Sort();
		heapSort.Print();
	}
}
