#pragma once

#include <string>
#include <functional>

namespace sidersoft {
	namespace libbusex {

		template<typename T>
		class subscriber {
		public:
			typedef std::function< void( std::string, T& ) > subscribe_callback;

			subscriber();
			~subscriber();

			int subscribe_channel( std::string channel_name, subscribe_callback cb );

			void on_channel_msg( T& t );
		private:
			std::string _sub_channel_name;
			subscribe_callback _sub_cb;
		};
	}
}
