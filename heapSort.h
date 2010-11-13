template <class Type> class HeapSort
{
  private:
    int length;

  public:
    Type* data;
    HeapSort<Type>(int len);
    void Sort();
    void Heapify(int low,int high);
    void Print(int l,int r);
    void BuildHeap(int n);
    void Print();
};

template <class Type> HeapSort<Type>::HeapSort(int len)
{
  length=len;
  data=new Type[length];
}

template <class Type> void HeapSort<Type>::Print()
{
  Print(0,length-1);
}

template <class Type> void HeapSort<Type>::Print(int l,int r)
{
  for(int i=l;i<=r;i++)
  {
    cout<<data[i]<<",";
  }
  cout<<endl;
}

template <class Type> void HeapSort<Type>::Heapify(int low,int high)
{
  Type temp;
  int current=low;
  int child=2*current+1;
  if(child<=high)//
  {
    if(child+1<high)//右子女存在的情况下
      if(data[child]<data[child+1])
        child++;
    if(data[current]<data[child])
    {
      data[child]^=data[current];
      data[current]^=data[child];
      data[child]^=data[current];
      Heapify(2*current+1,high);
      Heapify(2*current+2,high);
    }
  }
}


template <class Type> void HeapSort<Type>::BuildHeap(int n)
{
  for(int i=(n-1)/2;i>=0;i--)//为什么此处是(n-1)/2,得自己想想
    Heapify(i,n);
}


template <class Type> void HeapSort<Type>::Sort()//归并排序
{
  Type temp;
  for(int i=length-1;i>=1;i--)
  {
    BuildHeap(i);
    data[i]^=data[0];
    data[0]^=data[i];
    data[i]^=data[0];
  }
}
