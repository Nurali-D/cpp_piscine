#include "serialization.hpp"
#include <iomanip>

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int main()
{
	Data *client = new Data;
	uintptr_t uptr = 0;

	client->firstName = "Tom";
	client->lastName = "Ford";
	client->age = 55;
	client->balance = 150000;

	std::cout << "First name: " << client->firstName << std::endl;
	std::cout << "Last name : " << client->lastName << std::endl;
	std::cout << "Age       : " << client->age << std::endl;
	std::cout << "Balance   : " << client->balance << std::endl;
	std::cout << "client      = " << client << std::endl;

	uptr = serialize(client);
	std::cout << "uptr        = " << std::hex << "0x" << uptr << std::endl;

	Data *clientDeser = deserialize(uptr);
	std::cout << "clientDeser = " << clientDeser << std::endl;
		
	std::cout << "First name: " << clientDeser->firstName << std::endl;
	std::cout << "Last name : " << clientDeser->lastName << std::endl;
	std::cout << "Age       : " << clientDeser->age << std::endl;
	std::cout << "Balance   : " << clientDeser->balance << std::endl;

	// delete [] reinterpret_cast<char*>(uptr);
	// delete clientDeser;
	delete client;
	return (0);
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}


