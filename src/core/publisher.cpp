#include "core/publisher.h"

template<typename T>
sidersoft::libbusex::publisher<T>::publisher() {

}

template<typename T>
sidersoft::libbusex::publisher<T>::~publisher() {

}

template<typename T>
int sidersoft::libbusex::publisher<T>::publish(std::string channel_name, T& t) {
	return 0;
}
