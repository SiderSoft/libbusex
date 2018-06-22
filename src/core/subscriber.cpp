#include "core/subscriber.h"

template<typename T>
sidersoft::libbusex::subscriber<T>::subscriber() {

}

template<typename T>
sidersoft::libbusex::subscriber<T>::~subscriber() {

}

template<typename T>
int sidersoft::libbusex::subscriber<T>::subscribe_channel(std::string channel_name, subscribe_callback cb) {
	return 0;
}
