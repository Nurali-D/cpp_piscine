#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::tree =
	"              * *\n"    
	"           *    *  *\n"
	"      *  *    *     *  *\n"
	"     *     *    *  *    *\n"
	" * *   *    *    *    *   *\n"
	" *     *  *    * * .#  *   *\n"
	" *   *     * #.  .# *   *\n"
	"  *     .#.  #: #. * *    *                        ,@@@@@@@,\n"
	" *   * * .#. ##.       *                   ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
	"   *       .###                         ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	"             .##                       ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"              ##.                      %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
	"              .##:                     %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
	"              :###                     `&%\\ ` /%&'    |.|        \\ '|8'\n"
	"              ;###                         |o|        | |         | |\n"
	"            ,####.                         |.|        | |         | |\n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\//\\/\\/\\/\\._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &t) 
		: Form("ShrubberyCreationForm", 145, 137), target(t)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy)
		: Form(toCopy.getName(), toCopy.getGradeSign(), toCopy.getGradeExecution())
{
	this->target = toCopy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &right)
{
	if (this != &right)
		this->target = right.getTarget();
	return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	const std::string filename = target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.fail())
		throw (FileErrorException());
	std::cout << "Creating " << filename << std::endl;
	file << tree;
	file.close();
}

std::string				ShrubberyCreationForm::getTarget() const
{
	return (target);
}

ShrubberyCreationForm::FileErrorException::FileErrorException(void)
{}

const char* ShrubberyCreationForm::FileErrorException::what() const throw()
{
	return "cannot write to file";
}