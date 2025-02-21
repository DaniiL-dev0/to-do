#pragma once
/*****************************************************************************************************************************
POS - пользовательская операционная система. Пафосное название, не более.
Раздел в проекте, хранящий общую информацию касающуюся всех остальных
разделом и обменов между ними. В отличие от библиотеки lib описывает конкретные
понятия.
****************************************************************************************************************************** */
#include <vector>
#include <memory>

#include <pos_window.h>

namespace pos
{
    enum class FRAME_KANBAB
    {
        FRAME_INIT = 0,
        FRAME_BACKLOG,
        FRAME_IN_PROGRESS,
        FRAME_DONE,
    };
    
    
    
    /** черновик структуры для передачи всей информации о кадре
     * Кадр состоит из окон. Данная структура содержит описание
     * всех окон текущего кадра.
     */
    typedef struct 
    {
        FRAME_KANBAB frame;
        std::vector<std::shared_ptr<Window*>> windows;
        //некая справочная информация
    }kadr_t;
}

