#include "core/subscriber.h"

template<typename T>
sidersoft::libbusex::subscriber<T>::subscriber() {
	_sub_cb = nullptr;
}

template<typename T>
sidersoft::libbusex::subscriber<T>::~subscriber() {

}

template<typename T>
int sidersoft::libbusex::subscriber<T>::subscribe_channel( std::string channel_name, subscribe_callback cb ) {
	_sub_channel_name = channel_name;
	_sub_cb = cb;

	return 0;
}

template<typename T>
void sidersoft::libbusex::subscriber<T>::on_channel_msg( T& t ) {
	if( nullptr != _sub_cb ) {
		_sub_cb( _sub_channel_name, t );
	}
}
