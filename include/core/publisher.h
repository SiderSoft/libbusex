#pragma once

#include <string>

namespace sidersoft {
	namespace libbusex {

		template<typename T>
		class publisher {
		public:
			publisher();
			~publisher();

			int publish( std::string channel_name, T& t );

		private:
		};

	}
}
