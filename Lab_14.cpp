////Task 01 - template func for array
//#include <iostream>
//using namespace std;
//template<class T>
//auto summarize(T arr[], int size) {
//	double sum{ 0 };
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum/size;
//}
//int main()
//{
//	int arr[] = { 9,3,17,6,5,4,31,2,12 };
//  double arr1[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
//	int k1 = sizeof(arr) / sizeof(arr[0]);
//	auto sum = summarize(arr, k1);
//	cout << "median sum of the array: " << sum;
//	}

//Task 02 - Template func for stream output
#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<class T>
void Print(const T& data, string delim) 
{
	for (auto& item : data)
	{
		cout << item;
		cout << delim;
	}
}


int main() {
	std::vector<int> data = { 1, 2, 3 };
	Print(data, ", "); // на экране: 1, 2, 3
}




//#include <iostream>
//using namespace std;
//template<class T>
//void sorting(T arr[], int size) {
//	int j = 0;
//	for (int i = 0; i < size; i++) {
//		T x = arr[i];
//		for (j = i - 1; j >= 0 && x < arr[j]; j--)
//			arr[j + 1] = arr[j];
//		arr[j + 1] = x;
//	}
//}
////void sorting(int arr[], int size) {
////	int j = 0;
////	for (int i = 0; i < size; i++) {
////		int x = arr[i];
////		for (j = i - 1; j >= 0 && x < arr[j]; j--)
////			arr[j + 1] = arr[j];
////		arr[j + 1] = x;
////	}
////}
//int main()
//{
//	//int arr[] = { 9,3,17,6,5,4,31,2,12 };
//	//int k1 = sizeof(arr) / sizeof(arr[0]);
//	//sorting(arr, k1);
//	//for (int i = 0; i < k1; i++) 
//	//{
//	//	std::cout << arr[i] << ";";
//	//}
//
//	int arr[] = { 9,3,17,6,5,4,31,2,12 };
//	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
//	char arrc[] = "Hello, word";
//	int k1 = sizeof(arr) / sizeof(arr[0]);
//	int k2 = sizeof(arrd) / sizeof(arrd[0]);
//	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
//	sorting(arr, k1);
//	for (int i = 0; i < k1; i++) cout << arr[i] << ";";
//	cout << endl;
//	sorting(arrd, k2);
//	for (int i = 0; i < k2; i++) cout << arrd[i] << ";";
//	cout << endl;
//	sorting(arrc, k3);
//	for (int i = 0; i < k3; i++) cout << arrc[i] << ";";
//	cout << endl;	
//}

//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <tuple>
//#include <vector>
//using namespace std;
//using Tuple = tuple<string, int, double>;
//template<class Tuple>
//void printTupleOfThree(Tuple t)
//{
//	cout << "("
//		<< std::get<0>(t) << ", "
//		<< std::get<1>(t) << ", "
//		<< std::get<2>(t) << ")" << endl;
//}
//
//Tuple funtup(string s, int a, double d)
//{
//	s.append("!");
//	return make_tuple(s, a, d * 10);
//}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
//	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
//	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
//	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
//	printTupleOfThree(t0);
//	auto t1 = funtup(v1[1], v2[1], v3[1]);
//	printTupleOfThree(t1);
//
//
//
//	auto t3 = std::make_tuple(v1[0], v1[1], v2[2]);
//	printTupleOfThree(t3);
//	return 0;
//
//
//}

//#include <iostream>
//#include <tuple>
//#include <vector>
//using namespace std;
//template<class Tuple, std::size_t N>
//struct TuplePrinter {
//	static void print(const Tuple& t)
//	{
//		TuplePrinter<Tuple, N - 1>::print(t);
//		cout << ", " << get<N - 1>(t);
//	}
//};
//template<class Tuple>
//struct TuplePrinter<Tuple, 1> {
//	static void print(const Tuple& t)
//	{
//		cout << get<0>(t);
//	}
//};
//template<class... Args>
//void printTuple(const tuple<Args...>& t)
//{
//	cout << "(";
//	TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
//	cout << ")" << endl;
//}
//int main()
//{
//	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
//	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
//	vector<float> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
//	auto t1 = std::make_tuple(v1[0], v1[1], v3[0]);
//	auto t2 = std::make_tuple(v1[0], v1[1], v2[1], v3[0], v3[1]);
//	printTuple(t1);
//	printTuple(t2);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class array
//{
//public:
//    array(int size);
//    ~array() { delete data; cout << "des" << endl; };
//    long sum();
//    int average_value();
//    void show_array();
//    int add_value(int);
//
//
//private:
//    int* data;
//    int size;
//    int index;
//};
//
//array::array(int size)
//{
//    data = new int[size];
//    if (data == NULL)
//    {
//        cerr << "Error memory ---- exit program" << endl;
//        exit(1);
//    }
//    array::size = size;
//    array::index = 0;
//}
//long array::sum()
//{
//    long sum = 0;
//    for (int i = 0; i < index; i++) sum += data[i];
//    return(sum);
//}
//int array::average_value()
//{
//    long sum = 0;
//    for (int i = 0; i < index; i++) sum += data[i];
//    return (sum / index);
//}
//void array::show_array()
//{
//    for (int i = 0; i < index; i++) cout << data[i] << ' ';
//    cout << endl;
//}
//int array::add_value(int value)
//{
//    if (index == size) return(-1); // массив полон 
//    else
//    {
//        data[index] = value;
//        index++;
//        return(0); // успешно 
//    }
//}

//#include <iostream>
//using namespace std;
//template<class T, class T1> class array
//{
//public:
//    array(int size);
//    T1 sum();
//    T average_value();
//    void show_array();
//    int add_value(T);
//    template<class T, class T1> array<T, T1>::array(int size)
//    {
//        data = new T[size];
//        if (data == NULL)
//        {
//            cerr << "Error memory ---- exit program" << endl;
//            exit(1);
//        }
//        array::size = size;
//        array::index = 0;
//    }
//    template<class T, class T1> T1 array<T, T1>::sum()
//    {
//        T1 sum = 0;
//        for (int i = 0; i < index; i++) sum += data[i];
//        return(sum);
//    }
//    template<class T, class T1> T array<T, T1>::average_value()
//    {
//        T1 sum = 0;
//        for (int i = 0; i < index; i++) sum += data[i];
//        return (sum / index);
//    }
//    template<class T, class T1> void array<T, T1>::show_array()
//    {
//        for (int i = 0; i < index; i++) cout << data[i] << ' ';
//        cout << endl;
//    }
//    template<class T, class T1> int array<T, T1>::add_value(T value)
//    {
//        if (index == size)
//            return(-1);
//        else
//        {
//            data[index] = value;
//            index++;
//            return(0);
//        }
//    }
//private:
//    T* data;
//    int size;
//    int index;
//};
//
//
//int main()
//{
//    array<int, long> numbers(100);
//    array<float, float> values(200);
//    int i;
//    for (i = 0; i < 50; i++) numbers.add_value(i);
//    numbers.show_array();
//    cout << "Sum = " << numbers.sum() << endl;
//    cout << "Average = " << numbers.average_value() << endl;
//    for (i = 0; i < 100; i++) values.add_value(i * 100);
//    values.show_array();
//    cout << "Sum = " << values.sum() << endl;
//    cout << "Average = " << values.average_value() << endl;
//}
