// #include "baseclass_day.h"

// #include <stdexcept>
// #include <iostream>
// #include <chrono>  /* для учета времени */
// #include <ctime>




// Day::Day()
// {
//     auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
//     tm *timeInfo = localtime(&currentTime);

//     memset(&_date, -1, sizeof(_date));
//     _date = { .day = timeInfo->tm_mday, .month = timeInfo->tm_mon + 1, /* tm_mon начинается с 0 */ };
// }

// STATUS Day::delete_task(const std::string &name_task)
// {
//     try
//     {
//         auto task = get_task(name_task);
//         _tasks_day.erase(task);
//         return STATUS::SUCCES;
//     }
//     catch (const std::runtime_error &e)
//     {
//         std::cerr << e.what() << '\n';
//         return STATUS::FAIL;
//     }
// }

// it_Task Day::get_task(const std::string &name_task) 
// {
//     auto it = find_if(_tasks_day.begin(), _tasks_day.end(), [&](const Task& tmp) 
//                                                             { return tmp.name() == name_task; });

//     if ( it != _tasks_day.end() ) return it;
//     else throw std::runtime_error("Task not found: " + name_task);
// }

// const_it_Task Day::get_const_task(const std::string & name_task) const
// {
//     const auto it = std::find_if(_tasks_day.cbegin(), _tasks_day.cend(), [&](const Task& tmp) 
//                                                                          { return tmp.name() == name_task; });

//     if ( it != _tasks_day.cend() ) return it;
//     else throw std::runtime_error("Task not found: " + name_task);
// }

// // void Day::update()
// // {

// // }
