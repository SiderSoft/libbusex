#pragma once

#include <string>
#include <functional>

namespace sidersoft {
	namespace libbusex {

		template<typename T>
		class subscriber {
		public:
			typedef std::function< void(std::string, T&) > subscribe_callback;

			subscriber();
			~subscriber();

			int subscribe_channel( std::string channel_name, subscribe_callback cb );
		};
	}
}
