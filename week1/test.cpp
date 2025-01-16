#include <simplecpp>

main_program {
   bool to_be;
   cin >> to_be;

   bool question = !(to_be || !to_be);
   // !(to_be || !to_be) <=> (!to_be && to_be)

   cout << "Question" << question << std::endl;
}

