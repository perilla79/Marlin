#ifndef SCREEN_LIST_H
#define SCREEN_LIST_H

#include "Screen.h"

namespace screen
{
	class ScreenList : public Screen
	{
		public:
			ScreenList(const char * title);
			virtual ~ScreenList();

			void left();
			void right();
			void draw();
			Screen & press();
			void add(Screen & component);

		private:
			uint16_t m_index;
			uint16_t m_num_list;
			Screen * m_next_screen;
			Screen * m_items[max_list];
	};
}

#endif //SCREEN_LIST_H