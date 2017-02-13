#include "data/TaskShowStatusDialog.h"

#include "component/view/DialogView.h"

TaskShowStatusDialog::TaskShowStatusDialog(
	const std::string& title,
	const std::string& message,
	DialogView* dialogView
)
	: m_title(title)
	, m_message(message)
	, m_dialogView(dialogView)
{
}

TaskShowStatusDialog::~TaskShowStatusDialog()
{
}

void TaskShowStatusDialog::doEnter(std::shared_ptr<Blackboard> blackboard)
{
}

Task::TaskState TaskShowStatusDialog::doUpdate(std::shared_ptr<Blackboard> blackboard)
{
	m_dialogView->showStatusDialog(m_title, m_message);
	return STATE_SUCCESS;
}

void TaskShowStatusDialog::doExit(std::shared_ptr<Blackboard> blackboard)
{
}

void TaskShowStatusDialog::doReset(std::shared_ptr<Blackboard> blackboard)
{
}