#ifndef GUARD_PATH_ENGINE_H

#ifdef _WIN32
#define PATH_ENGINE_API __declspec(dllexport)
#else
#define PATH_ENGINE_API
#endif

extern "C" PATH_ENGINE_API void shortest_path(const int o_node_no, const int node_size,
                                              const int* from_node_no_arr, const int* to_node_no_arr,
                                              const int* first_link_from, const int* last_link_from,
                                              const int* sorted_link_no_arr, const double* link_cost,
                                              double* label_cost, int* node_pred,
                                              int* link_pred, int* deque_next,
                                              int departure_time = 0, int first_thru_node = 0);

#endif