void　Qsort(int　a[],int　low,int　high)
{
　if(low>=high) return;
　int　first=low;
　int　last=high;
　int　key=a[first];/*用字表的第一个记录作为枢轴*/
　while(first<last)
　{
	　while(first<last&&a[last]>=key) --last;
	　	a[first]=a[last];/*将比第一个小的移到低端*/
	　while(first<last&&a[first]<=key) ++first;
	　	a[last]=a[first];/*将比第一个大的移到高端*/
　}
　a[first]=key;/*枢轴记录到位*/
　Qsort(a,low,first-1);
　Qsort(a,first+1,high);
}


-------------------------------------------------------------------------

int　Qsort(int　a[],int　low,int　high)
{
  int  mid = (low + high) / 2;
　int　key = a[mid];
　while(low < high)
　{
	　while(low < high && a[high] >= key) --high;
	　	a[first] = a[high];/*将比第一个小的移到低端*/
	　while(first<last&&a[first]<=key) ++first;
	　	a[last]=a[first];/*将比第一个大的移到高端*/
　}
　a[first]=key;/*枢轴记录到位*/
　Qsort(a,low,first-1);
　Qsort(a,first+1,high);

}
