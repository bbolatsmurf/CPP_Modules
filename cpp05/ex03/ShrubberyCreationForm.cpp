#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 137, 145)
{
	std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	std::cout << "ShrubberyCreationForm Assignment Operator Called" << std::endl;
	AForm::operator=(src);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& execute) const
{
    if(execute.getGrade() > getGradeExecute())
        throw AForm::NotEnoughToExecute();
    else if(!getSign())
        throw AForm::NotEnoughToSign();
    std::string res = getName() + "_shrubbery";
    std::cout << res << ": file created." << std::endl;
    std::ofstream file(res.c_str()); //string to const string!
    if(file.is_open())
    {
    file << "               _{\\ _{\\{\\/}/}/}__" << std::endl;
    file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    file << "            {/{/\\}{/{/\\}(_)}{/{/\\}  _" << std::endl;
    file << "         {\\{/(/}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    file << "        {/{/(_)/}{\\{/)/}{\\(_){/}/}/}/}" << std::endl;
    file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    file << "      {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    file << "      _{\\{/{\\{/(_)/}/}{/{/{/\\}\\)(\\}{/\\}" << std::endl;
    file << "     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
    file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/)(/}" << std::endl;
    file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
    file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
    file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
    file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
    file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
    file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
    file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
    file << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
    file << "              (_)  \\.-'.-/" << std::endl;
    file << "          __...--- |'-.-'| --...__" << std::endl;
    file << "   _...--\"   .-'  |'-.-'|  ' -.  \"\"--..__" << std::endl;
    file << " -\"    ' .  . '   |.'-._| '  . .  '   jro" << std::endl;
    file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
    file << "          ' ..     |'-_.-|" << std::endl;
    file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
    file << "              .'   |'- .-|   '." << std::endl;
    file << "  ..-'   ' .  '.   `-._-_.'   .'  '  - ." << std::endl;
    file << "   .-' '        '-._______.-'     '  ." << std::endl;
    file << "        .      ~," << std::endl;
    file.close();  
    }
    else
        throw AForm::FileCreationException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}