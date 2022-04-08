#include <iostream>
namespace Quick {

	template<typename Type, typename Function>
		int partition(Type sequence[], int start, int end, Function compare) {
		int wall = start;
		auto& pivot = sequence[end];
		for(int i = start; i < end; i++) {
			if(compare(sequence[i], pivot)) {
				auto temp = sequence[wall];
				sequence[wall] = sequence[i];
				sequence[i] = temp;
				wall++;
			}
		}
		auto temp = sequence[wall];
		sequence[wall] = sequence[end];
		sequence[end] = temp;
		return wall;
	}

	template<typename Type, typename Function>
	void quick_sort(Type sequence[], int start, int end, Function compare) {
		if(start < end) {
			auto pivot = partition(sequence, start, end, compare);
			quick_sort(sequence, start, pivot-1, compare);
			quick_sort(sequence,  pivot+1, end, compare);
		}
	}
}
