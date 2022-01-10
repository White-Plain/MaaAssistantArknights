#pragma once
#include "InfrastProductionTask.h"

namespace asst
{
    class InfrastTradeTask final : public InfrastProductionTask
    {
    public:
        using InfrastProductionTask::InfrastProductionTask;
        virtual ~InfrastTradeTask() = default;

        virtual size_t max_num_of_facilities() const noexcept override { return 5ULL; }
        virtual size_t max_num_of_opers() const noexcept override { return 3ULL; }

    protected:
        virtual bool _run() override;
    };
}
