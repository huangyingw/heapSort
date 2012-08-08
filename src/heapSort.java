class HeapSort {
	private int length;
	private int[] data;

	public HeapSort(int[] data) {
		super();
		this.data = data;
		length = data.length;
	}

	public HeapSort(int len) {
		length = len;
		data = new int[length];
	}

	public void Initial() {

	}

	public void Print() {
		for (int i = 0; i < length; i++) {
			System.out.print(data[i] + ",");
		}
		System.out.println();
	}

	public void Print(int l, int r) {
		for (int i = l; i <= r; i++) {
			System.out.print(data[i] + ",");
		}
		System.out.println();
	}

	public void Heapify(int low, int high) {
		int temp;
		int current = low;
		int child = 2 * current + 1;
		if (child <= high) {
			if (child + 1 < high) {
				if (data[child] < data[child + 1])
					child++;
			}
			if (data[current] < data[child]) {
				temp = data[child];
				data[child] = data[current];
				data[current] = temp;
				Heapify(2 * current + 1, high);
				Heapify(2 * current + 2, high);
			}
		}
	}

	public void BuildHeap(int n) {
		for (int i = (n - 1) / 2; i >= 0; i--) {
			Heapify(i, n);
		}
	}

	public void Sort() {
		int temp;
		for (int i = length - 1; i >= 1; i--) {
			BuildHeap(i);
			temp = data[i];
			data[i] = data[0];
			data[0] = temp;
		}
	}
}
